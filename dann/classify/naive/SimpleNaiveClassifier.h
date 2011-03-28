#ifndef __SIMPLE_NAIVE_CLASSIFIER_H_
#define __SIMPLE_NAIVE_CLASSIFIER_H_
#include "dann/classify/naive/TrainableNaiveClassifier.h"
#include "dann/classify/naive/ClassificationProbabilities.h"
#include "dann/classify/naive/FeatureClassificationTree.h"
#include "dann/classify/naive/FeatureExtractor.h"

namespace dann {
namespace classify {
namespace naive {

  template <class I, class F, class C> 
  class SimpleNaiveClassifier : public ITrainableNaiveClassifier<I, F, C> {
     ClassificationProbabilities<C> overallCategoryProbability;
     FeatureClassificationTree<F, C> featureTree;
     IFeatureExtractor<F, I> &extractor;
     public:
       SimpleNaiveClassifier(IFeatureExtractor<F, I> &featureExtractor);
       virtual void train(I item, C category);
  };

}}}
#endif
