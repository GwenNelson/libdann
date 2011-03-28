#ifndef __CLASSIFICATION_PROBABILITIES_H_
#define __CLASSIFICATION_PROBABILITIES_H_
#include <map>

namespace dann {
namespace classify {
namespace naive {

  template <class C> 
  class ClassificationProbabilities {
     int probabilitySum;
     std::map<C, int> categoryProbabilityMap;
     public:
       std::map<C, int> getCategoryProbabilityMap();
       void incrementCategory(C category);
       void incrementCategory(C category, int value);
       int getProbabilitySum();
       int getCategoryProbability(C category);
  };

}}}
#endif
