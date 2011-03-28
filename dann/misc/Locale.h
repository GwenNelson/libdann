#ifndef __LOCALE_H_
#define __LOCALE_H_

#include <string>
#include <locale>

namespace dann {
namespace misc {
  class Locale {
     std::locale native_locale;
     public:
       Locale(std::string language);
       Locale(std::string language, std::string country);
       Locale(std::string language, std::string country, std::string variant);
       // TODO: flesh this out if actually required
  };

}}
#endif
