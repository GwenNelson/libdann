#ifndef __LANGUAGE_NAIVE_BAYES_CLASSIFIER_H_
#define __LANGUAGE_NAIVE_BAYES_CLASSIFIER_H_

#include <string>

#include "dann/classify/LanguageClassifier.h"
#include "dann/classify/naive/bayes/NaiveBayesClassifier.h"

namespace dann {
namespace classify {
namespace naive {
namespace bayes {
   template <class C>
   class ILanguageNaiveBayesClassifier  : public INaiveBayesClassifier<std::string, std::string, C>, public ILanguageClassifier<C> { 
   };
}}}}
#endif
