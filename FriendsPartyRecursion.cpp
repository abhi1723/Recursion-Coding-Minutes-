#include <iostream>

using namespace std;
int helper(int n){
    if(n==2) return 2;
    if(n==1) return 1;
    if(n==0) return 1;
    if(n<1) return 0;
    return helper(n-1)+(n-2)*helper(n-2);
}
int main()
{
    int n=3;
    cout<<helper(n);
    return 0;
}
