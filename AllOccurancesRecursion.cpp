#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;

vector<int> allOccurances(int k, vector<int> v,int capacity,int currentIndex){
    vector<int> result,defaultAns={-1} ;
    if(capacity<=currentIndex) return defaultAns;
    if(v.at(currentIndex)==k){
        result.push_back(currentIndex);
    }
    vector<int> subProblemResult = allOccurances(k,v,capacity,currentIndex+1);
    std::vector<int> finalResult=result;
    if(subProblemResult.size()>0 && subProblemResult.at(0)!=-1)
        finalResult.insert(finalResult.end(), subProblemResult.begin(), subProblemResult.end());
    return finalResult;
}
int main()
{
    vector<int> v = {1,2,5,3,1,2,3,8,6,3,6,7,9};
    int k = 3;
    vector<int> output = allOccurances(k,v,v.size(),0);
    for(int i=0;i<output.size();i++){
        cout<< output[i]<< " ";
    }
    return 0;
}
