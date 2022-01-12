#include <iostream>
#include <vector>
using namespace std;

void mergeArray(vector<int> &A,int s,int e){
    cout<<"Inside mergeArray()"<<endl;
    int mid= (s+e)/2;
    int i=s;
    int j=mid+1;
    int ind=0;
    vector<int> k ;
    cout<<"Value of start : "<<s<<endl;
    cout<<"Value of end : "<<e<<endl;

    while(i<=mid && j<=e){
        cout<<"Inside while loop "<<endl;
        cout<<"Value of i : "<<i<<endl;
        cout<<"Value of j : "<<j<<endl;
        cout<<"Value of A[i] : "<<A[i]<<endl;
        cout<<"Value of A[j] : "<<A[j]<<endl;

        if(A[i]<A[j]){
            cout<< "inside fist conditional inside while loop "<<endl;
            k.push_back(A[i]);
            i++;
        } else{
            cout<< "inside second conditional inside while loop "<<endl;
            k.push_back(A[j]);
            j++;
        }
    }
    cout<<"Beneath while loop "<<endl;
    for(int m=i;m<=mid;m++){
        k.push_back(A[m]);
    }
    for(int n=j;n<=e;n++){
        k.push_back(A[n]);
    }
    cout<<"Beneath the two for loops "<<endl;
    int indicator=0;
    for(int p=s;p<=e;p++){
        A[p]=k[indicator++];
    }
    return;
}
void mergeSort(vector<int> &arr, int s, int e){
    if(s>=e) return;
    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    mergeArray(arr,s,e);
}
int main()
{
    vector<int> arr = {7,3,13,2,1,15,8};
    int arrSize = arr.size()-1;
    mergeSort(arr,0,arrSize);
    cout<<"After merge sort function call "<<endl;
    for(int p=0;p<=arrSize;p++){
        cout<<arr.at(p)<< endl;
    }

    /*for(int i : arr){
        cout<<arr.at(i)<< endl;
    }*/
    return 0;
}
