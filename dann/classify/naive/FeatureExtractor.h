#ifndef __FEATURE_EXTRACTOR_H_
#define __FEATURE_EXTRACTOR_H_
#include <set>

namespace dann {
namespace classify {
namespace naive {

  template <class F, class I> 
  class IFeatureExtractor {
     public:
       virtual ~IFeatureExtractor() { }
       virtual std::set<F> getFeatures(I item) = 0;
  };

}}}
#endif
