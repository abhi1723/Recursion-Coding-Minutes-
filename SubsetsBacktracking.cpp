#include <iostream>
#include <vector>
using namespace std;

void subsets(char *input,char *output,int i,int j, int n){
   if(input[i]=='\0'){
        output[j]='\0';
        cout<<output<<endl;
        return;
   }
   output[j]=input[i];

   subsets(input,output,i+1,j+1,n);
   subsets(input,output,i+1,j,n);
}
int main()
{
    char input[] = {'A','B','C','\0'};
    char output[sizeof(input)];
    subsets(input,output,0,0,sizeof(input));
    return 0;
}
