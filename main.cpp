#include <iostream>
#include <vector>

using namespace std;

int vectorSummition(vector<int> vectorToBeSummed){
    int resultOfSum = 0;
    for(auto iterator:vectorToBeSummed ){
        resultOfSum += iterator;
    }
    return resultOfSum;
}

int main(){
    vector<int> testVector = {1,2,3,4,5,6,7,8,9,10};
    cout << vectorSummition(testVector);




    return 0;
}