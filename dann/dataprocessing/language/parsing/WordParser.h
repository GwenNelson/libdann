#ifndef __WORD_PARSER_H_
#define __WORD_PARSER_H_

#include <set>
#include <vector>
#include <string>

namespace dann {
namespace dataprocessing {
namespace language {
namespace parsing {
   class IWordParser { 
      public:
        virtual ~IWordParser() { }
        virtual std::vector<std::string> getWords(std::string text) = 0;
        virtual std::set<std::string> getUniqueWords(std::string text) = 0;

   };
}}}}
#endif
