#ifndef __FEATURE_CLASSIFICATION_TREE_H_
#define __FEATURE_CLASSIFICATION_TREE_H_
#include "dann/classify/naive/ClassificationProbabilities.h"
#include <map>

// TODO - map the java Hashmap methods to std::map

namespace dann {
namespace classify {
namespace naive {

  template <class F, class C> 
  class FeatureClassificationTree {
     std::map<F, ClassificationProbabilities<C> > _hashmap; // need to map this to java-ish methods
  };

}}}
#endif
