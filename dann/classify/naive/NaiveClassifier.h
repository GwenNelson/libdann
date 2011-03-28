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
       virtual C featureClassification(F feature);
       virtual C featureClassificationWeighted(F feature);
       virtual double featureClassificationProbability(F feature, C category);
       virtual double featureClassificationWeightedProbability(F feature, C category);
  };

}}}
#endif
