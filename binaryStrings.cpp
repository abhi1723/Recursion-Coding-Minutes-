#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
string binaryStrings(int n){
    if(n==0) return "";
    int digit= n & 1;
    string digitInString = to_string(digit);
    string subProblemResult = binaryStrings(n>>1);
    if(subProblemResult=="NO") return "NO";
    int len = subProblemResult.length();
    if(len>0){
    if(digit==1 && subProblemResult[len-1]=='1'){
        return "NO";
    }
    }
    return subProblemResult+digitInString ;
}
int main()
{
    int n=8;
    //vector<string> result;
    for(int i=0;i<n;i++){
        string res = binaryStrings(i);
        if(res!="NO")
        cout<<res<<endl;
        //if(res!="NO")
      //      result.push_back(res);
    }
   /* for(int i=0;i<n;i++){
        cout<<result.at(i)<<endl;
    }
*/

    return 0;
}
