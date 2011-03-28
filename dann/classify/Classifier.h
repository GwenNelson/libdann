#ifndef __CLASSIFIER_H_
#define __CLASSIFIER_H_
#include <map>
#include <set>

namespace dann {
namespace classify {
  template <class I, class C> 
  class IClassifier {
     public:
       virtual ~IClassifier() { }
       virtual C classification(I item) = 0;
       virtual std::map<C,double> getCategoryProbabilities(I item) = 0;
       virtual double classificationProbability(I item, C category) = 0;
       virtual std::set<C> getCategories() = 0;
  };

}}
#endif
