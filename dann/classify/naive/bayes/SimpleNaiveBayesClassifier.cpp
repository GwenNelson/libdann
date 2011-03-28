#include <map>
#include <utility>
#include "SimpleNaiveBayesClassifier.h"

using namespace dann::classify::naive::bayes;

template <class I, class F, class C>
SimpleNaiveBayesClassifier<I, F, C>::SimpleNaiveBayesClassifier(IFeatureExtractor<F, I> &extractor) {
}

template <class I, class F, class C>
double SimpleNaiveBayesClassifier<I, F, C>::getCategoryThreshold(C category) {
   if (this->categoryThresholds.find(category) == this->categoryThresholds.end()) {
      return 0.0;
   }
   double threshold = this.categoryThresholds[category];
   return threshold;
}

template <class I, class F, class C>
void SimpleNaiveBayesClassifier<I, F, C>::setCategoryThreshold(C category, double threshold) {
     this->categoryThresholds[category] = threshold;
}

template<class I, class F, class C>
C SimpleNaiveBayesClassifier<I, F, C>::classification(I item, bool useThreshold) {
   std::map<C, double> categoryProbabilities = std::map<C, double>();
   C topCategory = NULL;
   std::set<C> categories = this->getCategories();
   double currentProbability;
   double topProbability = 0.0;
   for (typename std::set<C>::iterator it = categories.begin(); it != categories.end(); ++it) {
       currentProbability = this->classificationProbability(item, *it);
       categoryProbabilities[*it] = currentProbability;
       if(topProbability < currentProbability) {
          topCategory = *it;
          topProbability = currentProbability;
       }
   }
   if(useThreshold) {
     for (typename std::map<C, double>::iterator it = categoryProbabilities.begin(); it != categoryProbabilities.end(); ++it) {
         if (((*it).first != topCategory) and (((*it).last * this.categoryThresholds[topCategory]) > topProbability)) {
            return NULL;
         }
     }
   }
   return topCategory;

}

template<class I, class F, class C>
C SimpleNaiveBayesClassifier<I, F, C>::classification(I item) {
   return this->classification(item,false);
}

template<class I, class F, class C>
void SimpleNaiveBayesClassifier<I, F, C>::train(I item, C category) {
     // TODO - implement
}

template<class I, class F, class C>
double SimpleNaiveBayesClassifier<I, F, C>::classificationProbability(I item, C category) {
   double probability = ((double)this->getOverallProbability(category)) / ((double)this->getOverallProbabilitySum());
   std::set<F> features = this->getExtractor().getFeatures(item);
   for (typename std::set<F>::iterator it = features.begin(); it != features.end(); it++) {
       probability = probability * this->featureClassificationWeightedProbability((*it),category);
   }
   return probability;
}

template<class I, class F, class C>
std::set<C> SimpleNaiveBayesClassifier<I, F, C>::getCategories() {
   return std::set<C>();
}

template<class I, class F, class C>
std::map<C, double> SimpleNaiveBayesClassifier<I, F, C>::getCategoryProbabilities(I item) {
   return std::map<C, double>();
};


