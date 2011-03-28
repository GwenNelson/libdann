#ifndef __TRAINABLE_LANGUAGE_NAIVE_CLASSIFIER_H_
#define __TRAINABLE_LANGUAGE_NAIVE_CLASSIFIER_H_

#include <string>

#include "dann/classify/naive/TrainableNaiveClassifier.h"
#include "dann/classify/naive/LanguageNaiveClassifier.h"
#include "dann/classify/TrainableLanguageClassifier.h"

namespace dann {
namespace classify {
namespace naive {
   template <class C>
   class ITrainableLanguageNaiveClassifier  : public ITrainableNaiveClassifier<std::string, std::string, C>, public ILanguageNaiveClassifier<C>, public ITrainableLanguageClassifier<C> { 
      public:
        virtual ~ITrainableLanguageNaiveClassifier() { }
   };
}}}
#endif
