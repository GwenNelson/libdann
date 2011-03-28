#ifndef __NAIVE_CLASSIFIER_H_
#define __NAIVE_CLASSIFIER_H_
#include "dann/classify/Classifier.h"

namespace dann {
namespace classify {
namespace naive {

  template <class I, class F, class C> 
  class INaiveClassifier : public IClassifier<I, C> {
     public:
       virtual ~INaiveClassifier() { }
       virtual C featureClassification(F feature) { return C(); };
       virtual C featureClassificationWeighted(F feature) { return C(); };
       virtual double featureClassificationProbability(F feature, C category) { return 0; };
       virtual double featureClassificationWeightedProbability(F feature, C category) { return 0; };
  };

}}}
#endif
