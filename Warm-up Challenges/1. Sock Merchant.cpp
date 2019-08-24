#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  int ar[n], flag[n] = {0};
  for(int i = 0; i < n; i++) cin >> ar[i];

  int pairs = 0;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        if(j == i) break;
        if(ar[i] == ar[j] && flag[i] == 0 && flag[j] == 0){
            flag[i] = 1;
            flag[j] = 1;
            pairs++;
        }
    }
  }

  cout << pairs;

  return 0;
}
