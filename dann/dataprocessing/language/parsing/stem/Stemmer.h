#ifndef __STEMMER_H_                                                                                                                                                                                                                                                                                                        
#define __STEMMER_H_                                                                                                                                                                                                                                                                                                        
          
#include <string>
                                                                                                                                                                                                                                                                                                                  
namespace dann {                                                                                                                                                                                                                                                                                                            
namespace dataprocessing {                                                                                                                                                                                                                                                                                                  
namespace language {                                                                                                                                                                                                                                                                                                        
namespace parsing {                                                                                                                                                                                                                                                                                                         
namespace stem {                                                                                                                                                                                                                                                                                                           
   class IStemmer {
      public:
        virtual ~IStemmer() { }
        virtual std::string stemWord(std::string word) = 0;
   };
}}}}}
#endif  
