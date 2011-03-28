#include <stdio.h>
#include <string>
#include "dann/classify/naive/bayes/StemmingLanguageNaiveBayesClassifier.h"

using namespace dann::classify::naive::bayes;

int main(int argc, char** argv) {
    ITrainableLanguageNaiveBayesClassifier<int> classifier = StemmingLanguageNaiveBayesClassifier<int>();

    classifier.train(std::string("Money is the root of all evil!"), 1);
    classifier.train(std::string("Money destroys the soul"), 1);
    classifier.train(std::string("Money kills!"), 1);
    classifier.train(std::string("The quick brown fox."), 1);
    classifier.train(std::string("Money should be here once"), 2);
    classifier.train(std::string("some nonsense to take up space"), 2);
    classifier.train(std::string("Even more nonsense cause we can"), 2);
    classifier.train(std::string("nonsense was the root of all good"), 2);
    classifier.train(std::string("just a filler to waste space"), 2); 
    
    assert(classifier.featureClassification(std::string("Money")) == 1);
    assert(classifier.featureClassification(std::string("Fox")) == 1);
    assert(classifier.featureClassification(std::string("Nonsense")) == 2);
    assert(classifier.featureClassification(std::string("Waste")) == 2);
    assert(classifier.featureClassification(std::string("Evil")) == 1);
    assert(classifier.featureClassification(std::string("Good")) == 2);
    assert(classifier.classification(std::string("Money was here once")) == 2);
    assert(classifier.classification(std::string("Money destroys the quick brown fox!")) == 1);
    assert(classifier.classification(std::string("kills the soul")) == 1);
    assert(classifier.classification(std::string("nonsense is the root of good")) == 2);
    return 0;
}
