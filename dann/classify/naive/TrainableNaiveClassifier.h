#ifndef __TRAINABLE_NAIVE_CLASSIFIER_H_
#define __TRAINABLE_NAIVE_CLASSIFIER_H_

#include "dann/classify/naive/NaiveClassifier.h"
#include "dann/classify/TrainableClassifier.h"

namespace dann {
namespace classify {
namespace naive {

  template <class I, class F, class C> 
  class ITrainableNaiveClassifier : public INaiveClassifier<I, F, C>, public ITrainableClassifier<I, C> {
     public:
       virtual ~ITrainableNaiveClassifier() { }
  };

}}}
#endif
