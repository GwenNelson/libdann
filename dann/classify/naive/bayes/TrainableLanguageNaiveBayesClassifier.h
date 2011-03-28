#ifndef __TRAINABLE_LANGUAGE_NAIVE_BAYES_CLASSIFIER_H_
#define __TRAINABLE_LANGUAGE_NAIVE_BAYES_CLASSIFIER_H_

#include "dann/classify/naive/TrainableLanguageNaiveClassifier.h"
#include "dann/classify/naive/bayes/LanguageNaiveBayesClassifier.h"
#include "dann/classify/naive/bayes/TrainableNaiveBayesClassifier.h"

namespace dann {
namespace classify {
namespace naive {
namespace bayes {

  template <class C> 
  class ITrainableLanguageNaiveBayesClassifier : public ITrainableNaiveBayesClassifier<std::string, std::string, C>, public ILanguageNaiveBayesClassifier<C>, public ITrainableLanguageNaiveClassifier<C> {
  };

}}}}
#endif
