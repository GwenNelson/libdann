#ifndef __STEMMING_WORD_PARSER_H_
#define __STEMMING_WORD_PARSER_H_

#include <vector>
#include <map>
#include <set>
#include <string>

#include "dann/dataprocessing/language/parsing/BasicWordParser.h"
#include "dann/dataprocessing/language/parsing/stem/PorterStemmer.h"
#include "dann/dataprocessing/language/parsing/stem/Stemmer.h"

namespace dann {
namespace dataprocessing {
namespace language {
namespace parsing {
namespace stem {
   class StemmingWordParser  : public BasicWordParser, public IStemmer { 
      IStemmer &stemmer;
      public:
        StemmingWordParser();
        StemmingWordParser(IStemmer &ourStemmer);
        std::string stemWord(std::string word);
        std::vector<std::string> stemList(std::vector<std::string> unstemmed);
        std::set<std::string> stemSet(std::vector<std::string> unstemmed);
        std::vector<std::string> getWords(std::vector<std::string> text);
        std::set<std::string> getUniqueWords(std::vector<std::string> text);
   };
}}}}}
#endif
