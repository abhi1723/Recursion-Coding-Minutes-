#include <iostream>

using namespace std;
void printMatrix(int A[][10],int m,int n){
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int gridWays(int A[][10],int i,int j,int m,int n){
    int ways =0;
    A[i][j]=1;
    if(i==m and j==n){
     printMatrix(A,m,n);
     A[i][j]=0;
     return 1;
    }
    else if(i==m and j<n){
        ways=gridWays(A,i,j+1,m,n);
    }
    else if(i<m and j==n){
        ways=gridWays(A,i+1,j,m,n);
    }
    else{
        int res1 = gridWays(A,i,j+1,m,n);
        int res2 = gridWays(A,i+1,j,m,n);
        ways = res1+res2;
    }
    A[i][j]=0;
    return ways;
}
int main()
{
    int A[10][10]={0};
    int m=2,n=2;
    cout<<gridWays(A,0,0,m,n)<<endl;
    return 0;
}
