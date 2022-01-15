#include <iostream>
#include <cstring>
using namespace std;
void permutation(string input,int i,int e){
    if(i==e){
        cout<<input<<endl;
        return;
    }

    for(int k=i;k<input.length();k++){
        swap(input[i],input[k]);
        permutation(input,i+1,e);
        swap(input[i],input[k]);

    }
    return;
}
int main()
{
    string input="ABCD";
    permutation(input,0,input.length());
    return 0;
}
