#ifndef __LANGUAGE_NAIVE_CLASSIFIER_H_
#define __LANGUAGE_NAIVE_CLASSIFIER_H_

#include <string>

#include "dann/classify/naive/NaiveClassifier.h"
#include "dann/classify/LanguageClassifier.h"

namespace dann {
namespace classify {
namespace naive {
   template <class C>
   class ILanguageNaiveClassifier : public INaiveClassifier<std::string, std::string, C>, public ILanguageClassifier<C> { 
      public:
        virtual ~ILanguageNaiveClassifier() { }
   };
}}}
#endif
