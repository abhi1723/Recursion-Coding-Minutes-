#include <iostream>
#include<vector>
using namespace std;
vector<int> increasingNumbers(int N){
    vector<int> v, defAns={1};
    if(N==1) return defAns;
    vector<int> subProblemResult= increasingNumbers(N-1);
    vector<int> finalResult = subProblemResult;
    finalResult.push_back(N);
    return finalResult;
}
int main()
{
    int N = 5;
    vector<int> output = increasingNumbers(N);
    for(int i=0;i<output.size();i++){
        cout<< output[i]<<endl;
    }

    return 0;
}
