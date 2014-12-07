## ----, eval=FALSE--------------------------------------------------------
#  URLdecode("test%gIL")
#  #Error in rawToChar(out) : embedded nul in string: '\0L'
#  #In addition: Warning message:
#  #In URLdecode("%gIL") : out-of-range values treated as 0 in coercion to raw

## ----, eval=FALSE--------------------------------------------------------
#  URLencode("https://en.wikipedia.org/wiki/Article", reserved = TRUE)
#  #[1] "https%3a%2f%2fen.wikipedia.org%2fwiki%2fArticle"

## ----, eval=FALSE--------------------------------------------------------
#  library(urltools)
#  url_decode("test%gIL")
#  #[1] "test"
#  url_encode("https://en.wikipedia.org/wiki/Article")
#  #[1] "https://en.wikipedia.org%2fwiki%2fArticle"

## ----, eval=FALSE--------------------------------------------------------
#  url_parse("https://en.wikipedia.org/wiki/Article")
#  #[[1]]
#  #[1] "https"            "en.wikipedia.org" ""                 "wiki/article"     ""                 ""

## ----, eval=FALSE--------------------------------------------------------
#  url_param(urls = "https://en.wikipedia.org/w/api.php?action=sitematrix&format=xml&smstate=all", parameter = "smstate")
#  #[1] "all"

