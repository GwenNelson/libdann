#ifndef __SIMPLE_NAIVE_BAYES_CLASSIFIER_H_
#define __SIMPLE_NAIVE_BAYES_CLASSIFIER_H_
#include "dann/classify/naive/SimpleNaiveClassifier.h"
#include "dann/classify/naive/bayes/TrainableNaiveBayesClassifier.h"
#include <map>
#include <set>

namespace dann {
namespace classify {
namespace naive {
namespace bayes {

  template <class I, class F, class C> 
  class SimpleNaiveBayesClassifier : public SimpleNaiveClassifier<I, F, C>, public ITrainableNaiveBayesClassifier<I, F, C> {
     std::map<C, double> categoryThresholds;
     public:
       SimpleNaiveBayesClassifier(IFeatureExtractor<F, I> &extractor);
       double getCategoryThreshold(C category);
       void   setCategoryThreshold(C category, double threshold);
       std::set<C> getCategories(); 
       virtual void train(I item, C category);
       C classification(I item, bool useThreshold);
       C classification(I item);
       std::map<C, double> getCategoryProbabilities(I item);
       double classificationProbability(I item, C category);
  };

}}}}
#endif
