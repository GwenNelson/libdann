#ifndef __TRAINABLE_NAIVE_BAYES_CLASSIFIER_H_
#define __TRAINABLE_NAIVE_BAYES_CLASSIFIER_H_
#include "dann/classify/naive/TrainableNaiveClassifier.h"
#include "dann/classify/naive/bayes/NaiveBayesClassifier.h"

namespace dann {
namespace classify {
namespace naive {
namespace bayes {

  template <class I, class F, class C> 
  class ITrainableNaiveBayesClassifier : public INaiveBayesClassifier<I, F, C>, public ITrainableNaiveClassifier<I, F, C> {
     public:
       virtual ~ITrainableNaiveBayesClassifier() { }
  };

}}}}
#endif
