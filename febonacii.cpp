#include <iostream>
#include <conio.h>

using namespace std;

int febonacii (int a,int b,int n){
    if(n==1) return a;
    int c=a+b;
    a=b;
    b=c;
    return febonacii(a,b,n-1);
}

int main(){
    int a=0,b=1,n;
    cout<<"Input a number"<<endl;
    cin>>n;
    cout<< febonacii(a,b,n);
    return 0;
}