#ifndef __BASIC_WORD_PARSER_H_
#define __BASIC_WORD_PARSER_H_

#include "dann/misc/Locale.h"
#include "dann/dataprocessing/language/parsing/WordParser.h"

#include <vector>
#include <set>
#include <string>

using namespace dann::misc;

namespace dann {
namespace dataprocessing {
namespace language {
namespace parsing {
   class BasicWordParser  : public IWordParser { 
      Locale _locale;
      public:
        BasicWordParser();
        BasicWordParser(Locale ourLocale);
        std::vector<std::string> getWords(std::string text);
        std::set<std::string> getUniqueWords(std::string text);
        Locale getLocale();
   };
}}}}
#endif
