#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int vectorSummition(vector<int> vectorToBeSummed){
    int resultOfSum = 0;
    for(auto iterator:vectorToBeSummed ){
        resultOfSum += iterator;
    }
    return resultOfSum;
}

int getAverage(vector<int> vectorToBeAveraged){
    int resultOfSum = vectorSummition(vectorToBeAveraged);
    int numberOfElementsInVector = vectorToBeAveraged.size();
    int resultOfAverage = resultOfSum/numberOfElementsInVector;
    return resultOfAverage;
}

int main(){
    vector<int> sumVector = {1,2,3,4,5,6,7,8,9,10};
    cout << vectorSummition(sumVector) << "\n";

    






    return 0;
}