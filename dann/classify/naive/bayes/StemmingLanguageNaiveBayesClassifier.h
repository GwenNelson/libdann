#ifndef __STEMMING_LANGUAGE_NAIVE_BAYES_CLASSIFIER_H_
#define __STEMMING_LANGUAGE_NAIVE_BAYES_CLASSIFIER_H_

#include <string>
#include <set>

#include "dann/misc/Locale.h"
#include "dann/classify/naive/FeatureExtractor.h"
#include "dann/classify/naive/bayes/SimpleNaiveBayesClassifier.h"
#include "dann/classify/naive/bayes/TrainableLanguageNaiveBayesClassifier.h"
#include "dann/dataprocessing/language/parsing/WordParser.h"
#include "dann/dataprocessing/language/parsing/stem/StemmingWordParser.h"

using namespace dann::dataprocessing::language::parsing;

namespace dann {
namespace classify {
namespace naive {
namespace bayes {

  template <class C> 
  class StemmingLanguageNaiveBayesClassifier : public SimpleNaiveBayesClassifier<std::string, std::string, C>, public ITrainableLanguageNaiveBayesClassifier<C> {
     Locale _locale;
   
     class StemmingWordExtractor : IFeatureExtractor<std::string, std::string> {
        static IWordParser &PARSER;
        public:
          std::set<std::string> getFeatures(std::string item);
     }; 

     public:
       StemmingLanguageNaiveBayesClassifier();
       StemmingLanguageNaiveBayesClassifier(Locale ourLocale);
       double featureClassificationProbability(std::string feature, C category);
       double featureClassificationWeightedProbability(std::string feature, C category);
       Locale getLocale();
 
  };

}}}}
#endif
