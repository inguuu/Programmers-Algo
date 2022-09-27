#include <iostream>

using namespace std;


int main() {
  string str;
  cin >> str;
  int cnt[100000] ={0,};

  for(char a : str){
    cnt[a-'a']++;
  }
  for(int i = 0;i<26;i++){
    cout<< cnt[i];
  }
}