## ---- eval=FALSE---------------------------------------------------------
#  URLdecode("test%gIL")
#  Error in rawToChar(out) : embedded nul in string: '\0L'
#  In addition: Warning message:
#  In URLdecode("%gIL") : out-of-range values treated as 0 in coercion to raw

## ---- eval=FALSE---------------------------------------------------------
#  URLencode("https://en.wikipedia.org/wiki/Article", reserved = TRUE)
#  [1] "https%3a%2f%2fen.wikipedia.org%2fwiki%2fArticle"

## ---- eval=FALSE---------------------------------------------------------
#  library(urltools)
#  url_decode("test%gIL")
#  [1] "test"
#  url_encode("https://en.wikipedia.org/wiki/Article")
#  [1] "https://en.wikipedia.org%2fwiki%2fArticle"

## ---- eval=FALSE---------------------------------------------------------
#  > str(url_parse("https://en.wikipedia.org/wiki/Article"))
#  'data.frame':	1 obs. of  6 variables:
#   $ scheme   : chr "https"
#   $ domain   : chr "en.wikipedia.org"
#   $ port     : chr ""
#   $ path     : chr "wiki/article"
#   $ parameter: chr ""
#   $ fragment : chr ""

## ---- eval=FALSE---------------------------------------------------------
#  > str(url_parameters(urls = "http://en.wikipedia.org/wiki/api.php?action=parse&pageid=1023&export=json",
#                       parameter_names = c("pageid","export")))
#  'data.frame':	1 obs. of  2 variables:
#   $ pageid: chr "1023"
#   $ export: chr "json"

## ---- eval=FALSE---------------------------------------------------------
#  url <- "https://en.wikipedia.org/wiki/Article"
#  scheme(url)
#  "https"
#  scheme(url) <- "ftp"
#  url
#  "ftp://en.wikipedia.org/wiki/Article"

