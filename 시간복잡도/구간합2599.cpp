#include <iostream>

using namespace std;
/*
연속된 수  그 사이값 합*/


int main(){
  int n,k;
  int tmp;
  int psum[100001]={0,};
  int max =-100000004

  cin>> n >>k;
  for(int i=1;i<=n;i++){
    cin <<tmp;
    psum[i] = psum[i-1] + tmp;
  }

  for(int i=k;i<=n;i++){
    if(max < psum[i] + psum[i-k] ) max = psum[i] + psum[i-k]
    
  }
   
}
   
 
