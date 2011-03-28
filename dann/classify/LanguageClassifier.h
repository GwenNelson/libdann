#ifndef __LANGUAGE_CLASSIFIER_H_
#define __LANGUAGE_CLASSIFIER_H_

#include <string>
#include "dann/misc/Locale.h"
#include "Classifier.h"

using namespace dann::misc;

namespace dann {
namespace classify {
   template <class C>
   class ILanguageClassifier  : public IClassifier<std::string, C> { 
      public:
        virtual ~ILanguageClassifier() { }
        virtual Locale getLocale() { return Locale(); };
   };
}}
#endif
