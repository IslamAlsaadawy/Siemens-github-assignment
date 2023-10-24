#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int getSum(vector<int> vectorToBeSummed){
    int resultOfSum = 0;
    for(auto iterator:vectorToBeSummed ){
        resultOfSum += iterator;
    }
    return resultOfSum;
}

int getMin(vector<int> vectorToGetMinOf){
    int minimum = 1000000;
    for(auto iterator:vectorToGetMinOf){
        minimum = min(minimum,iterator);
    }  
    return minimum;
}



int getAverage(vector<int> vectorToBeAveraged){
    int resultOfSum = getSum(vectorToBeAveraged);
    int numberOfElementsInVector = vectorToBeAveraged.size();
    int resultOfAverage = resultOfSum/numberOfElementsInVector;
    return resultOfAverage;
}

int main(){
    vector<int> sumVector = {1,2,3,4,5,6,7,8,9,10};
    cout << getSum(sumVector) << "\n";

    vector<int> averageVector = {1,2,3,4,5,6,7,8,9,10};
    cout << getAverage(averageVector) << "\n";

    vector<int> minVetor = {1,2,3,4,5,6,7,8,9,10};
    cout << getMin(minVetor) << "\n";


    return 0;
}