#ifndef __TRAINABLE_LANGUAGE_CLASSIFIER_H_
#define __TRAINABLE_LANGUAGE_CLASSIFIER_H_
#include <string>
#include "dann/classify/LanguageClassifier.h"
#include "dann/classify/TrainableClassifier.h"

namespace dann {
namespace classify {
   template <class C>
   class ITrainableLanguageClassifier  : public ILanguageClassifier<C>, public ITrainableClassifier<std::string, C> { 
      public:
         virtual ~ITrainableLanguageClassifier() { }
   };
}}
#endif
