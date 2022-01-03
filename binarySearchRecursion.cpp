#include <iostream>
#include <vector>
using namespace std;
int binarySearchUsingRecursion(vector<int> &A,int s,int e,int num){
    if(A[s]==num) return s;
    if(s>=e) return -1;
    int mid = (s+e)/2;
    int L=-1,R=-1;
    L = binarySearchUsingRecursion(A,s,mid,num);
    if(L!=-1){
        return L;
    }
    R = binarySearchUsingRecursion(A,mid+1,e,num);
    return R;
}
int main()
{
    vector<int> A= {1,3,5,7,9};
    int num=3;
    cout << binarySearchUsingRecursion(A,0,A.size()-1,num);
    return 0;
}
