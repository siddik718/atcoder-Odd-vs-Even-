#include<bits/stdc++.h>
using namespace std;
bool is_divisible(string s,int n){
    int sum = 0;
for(int i = 0;i<s.size();i++){
    int x = s[i] - 48;
    sum = sum*10+x;
    sum = sum%n;
}
if(sum == 0)
    return true;
return false;
}
int main(){
int t;
cin >> t;
string s;
while(t--){
    cin >> s;
  if(is_divisible(s,4))
        cout << "Even\n";
  else if(is_divisible(s,2) && !(is_divisible(s,4)))
    cout << "Same\n";
  else if(!(is_divisible(s,2)))
    cout << "Odd\n";
}

return 0;
}
