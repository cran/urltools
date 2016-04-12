#include "compose.h"

bool compose::emptycheck(String element){
  if(element == NA_STRING){
    return false;
  }
  return true;
}

std::string compose::compose_single(String scheme, String domain, String port, String path,
                                    String parameter, String fragment){
  
  std::string output;
  
  if(emptycheck(scheme)){
    output += scheme;
    output += "://";
  }
  
  if(emptycheck(domain)){
    output += domain;
    
    if(emptycheck(port)){
      output += ":";
      output += port;
    } else {
      output += "/";
    }
  }
  
  if(emptycheck(path)){
    output += path;
  }
  
  if(emptycheck(parameter)){
    output += "?";
    output += parameter;
  }
  
  if(emptycheck(fragment)){
    output += "#";
    output += fragment;
  }
  
  return output;
}

CharacterVector compose::compose_multiple(DataFrame parsed_urls){
  
  CharacterVector schemes = parsed_urls["scheme"];
  CharacterVector domains = parsed_urls["domain"];
  CharacterVector ports = parsed_urls["port"];
  CharacterVector paths = parsed_urls["path"];
  CharacterVector parameters = parsed_urls["parameter"];
  CharacterVector fragments = parsed_urls["fragment"];
  
  CharacterVector output(schemes.size());
  
  for(unsigned int i = 0; i < schemes.size(); i++){
    if((i % 10000) == 0){
      Rcpp::checkUserInterrupt();
    }
    output[i] = compose_single(schemes[i], domains[i], ports[i], paths[i], parameters[i],
                               fragments[i]);
  }
  
  return output;
}
