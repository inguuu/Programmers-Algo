#include <iostream>
/*

A N M B <100000
8 3
1 2 3 4 5 6 7 8
1 4
1 5 
3 5

연속된 값이니 다 더해버리기
그리고 빼버리기
*/
/*
using namespace std;

int main() {
 int n, m;
 int num[1000004] ={0,};
 int psum[1000004];
 cin >> n >> m;

 int a,b;

 for(int i=1;i<=n;i++){
   cin >> num[i];
   psum[i] = psum[i-1] +num[i];
 }

  for(int i=0; i<m;i++){
    cin >> a;
    cin >> b;     
    cout<< psum[b] - psum[a-1];
    
  }

  
}
*/