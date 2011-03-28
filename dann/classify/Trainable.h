#ifndef __TRAINABLE_H_
#define __TRAINABLE_H_
namespace dann {
namespace classify {
  template <class I, class C> 
  class ITrainable {
     public:
       virtual ~ITrainable() { }
       virtual void train(I item, C category) = 0;
  };

}}
#endif
