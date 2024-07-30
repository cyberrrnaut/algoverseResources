#include<bits/stdc++.h>
using namespace std;


void nNumberTriangle(int n) {


    int num = 1;
  

    for(int i=1;i<=n;i++){
    
    for(int j=0;j<i;j++){
        cout<<num<<" ";
        num+=1;
    }
    cout<<endl;
 

 }


}


int main(){
  
  int n;
  cin>>n;
nNumberTriangle(n);


return 0;


}