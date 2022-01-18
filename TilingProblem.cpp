#include <iostream>

using namespace std;
int tiling(int n,int m){
    if(n<m) return 1;
    return tiling(n-1,m)+tiling(n-m,m);
}
int main()
{
    int n=4,m=3;
    cout <<tiling(n,m);
    return 0;
}
