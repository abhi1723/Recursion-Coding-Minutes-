#include <iostream>

using namespace std;
 void printMatrix(int A[][10],int m,int n){
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<A[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
 }

 bool isValidEntry(int A[][10],int i,int j,int k){
    int rowLowerGrid = (i/3)*3;
    int rowHigherGrid = rowLowerGrid+2;
    int colLowerGrid = (j/3)*3;
    int colHigherGrid = colLowerGrid+2;
    for(int p= rowLowerGrid;p<=rowHigherGrid;p++){
        for(int q=colLowerGrid;q<=colHigherGrid;q++){
            if(A[p][q]==k) {
                return false;
            }

        }
    }
    for(int p=0;p<9;p++){
            if(A[i][p]==k ) return false;

    }
    for(int p=0;p<9;p++){
            if(A[p][j]==k) return false;

    }
    return true;
 }
 bool soduku(int A[][10],int i,int j){
    if(i==9){
        printMatrix(A,9,9);
        return true;
    }
    if(j>=9 && i<9){
        return soduku(A,i+1,0);
    }
    if(A[i][j]==0){
        for(int k=1;k<=9;k++)
            {
                if(isValidEntry(A,i,j,k)){
                    A[i][j]=k;
                    bool res = soduku(A,i,j+1);
                    if(res) return true;
                }
                A[i][j]=0;
            }
            return false;
    } else{
        return soduku(A,i,j+1);
    }
 }
int main()
{
    int A[10][10] = {
                    {
                        5,3,0,0,7,0,0,0,0
                    },
                    {
                        6,0,0,1,9,5,0,0,0
                    },
                    {
                        0,9,8,0,0,0,0,6,0
                    },
                    {
                        8,0,0,0,6,0,0,0,3
                    },
                    {
                        4,0,0,8,0,3,0,0,1
                    },
                    {
                        7,0,0,0,2,0,0,0,6
                    },
                    {
                        0,6,0,0,0,0,2,8,0
                    },
                    {
                        0,0,0,4,1,9,0,0,5
                    },
                    {
                        0,0,0,0,8,0,0,7,9
                    }
    };
    printMatrix(A,9,9);
    if (!soduku(A,0,0)){
        cout<<"No Solution: "<<endl;
    };
    return 0;
}
