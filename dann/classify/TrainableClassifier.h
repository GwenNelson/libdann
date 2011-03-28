#ifndef __TRAINABLE_CLASSIFIER_H_
#define __TRAINABLE_CLASSIFIER_H_
#include "dann/classify/Classifier.h"
#include "dann/classify/Trainable.h"

namespace dann {
namespace classify {
  template <class I, class C> 
  class ITrainableClassifier : public IClassifier<I, C>, public ITrainable<I, C> {
     public:
        virtual ~ITrainableClassifier() { }
  };

}}
#endif
