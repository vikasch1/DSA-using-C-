#include <iostream>
using namespace std;

int main() {
int n;
  cin>>n;
  int col=(2*n)-1;
  for(int i=0;i<n;i++){
    int k=0;
    for(int j=0;j<col;j++){
      if(j<n-i-1){
        cout<<" ";
      }else if(k<2*i+1){
        cout<<"*";
        k++;
        
      }else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
  
return 0;
}