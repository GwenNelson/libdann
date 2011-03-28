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
       virtual C classification(I item) { return C(); };
       virtual std::map<C,double> getCategoryProbabilities(I item) { return std::map<C,double>(); };
       virtual double classificationProbability(I item, C category) { return 0; };
       virtual std::set<C> getCategories() { return std::set<C>(); };
  };

}}
#endif
