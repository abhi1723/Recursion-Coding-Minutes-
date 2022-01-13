#include <iostream>

using namespace std;

void printMatrix(int A[][10],int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
bool checkValid(int A[][10],int i,int j,int n){
    int x=i;
    int y=j;
    for(int m=0;m<x;m++){
        if(A[m][j]==1) return false;
    }
    while(x>=0 and y>=0){
        if(A[x][y]==1) return false;
        x--;
        y--;
    }
    x=i;
    y=j;
    while(x>=0 and j<n){
        if(A[x][y]==1) return false;
        x--;
        y++;
    }
    return true;
}
bool nQueen(int A[][10],int i,int n){
    if(i>n){
        printMatrix(A,n);
        return true;
    }
    for(int j=0;j<=n;j++){
        if(checkValid(A,i,j,n)){
            A[i][j]=1;
            bool res = nQueen(A,i+1,n);
            if(res) return true;
            A[i][j]=0;
        }
    }
    return false;
}
int main()
{
    int A[10][10] = {0};
    int n=4;
    nQueen(A,0,n-1);
    return 0;
}
