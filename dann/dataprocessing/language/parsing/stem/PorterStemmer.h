#ifndef __PORTER_STEMMER_H_
#define __PORTER_STEMMER_H_

#include <string>
#include <vector>

#include "dann/misc/Locale.h"
#include "dann/dataprocessing/language/parsing/stem/Stemmer.h"

using namespace dann::misc;

namespace dann {
namespace dataprocessing {
namespace language {
namespace parsing {
namespace stem {
   class PorterStemmer  : public IStemmer { 
      public:
        PorterStemmer();
        PorterStemmer(int ourGrowSize);
        PorterStemmer(Locale ourLocale);
        PorterStemmer(Locale ourLocale, int ourGrowSize);
        std::string stemWord(std::string originalWord);
        int getGrowSize();
        Locale getLocale();
   };
}}}}}
#endif
