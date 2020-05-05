#include <bits/stdc++.h> 
#define rfo(i, n) for(int i=(n); i >= 0; --i)
using namespace std;const int mx=17;const int arr[7]={137,1315,73,136,255,1384,16385};string gen(int x){if(x==0)return"0";if(x==2)return"2";rfo(i,mx){if(x==(1<<i)){return"2("+gen(i)+")";}}
string s="";rfo(i,mx){if(x&(1<<i)){if(!s.empty()){s+="+";}
s+=gen(1<<i);}}
return s;}
int main(){for(auto a:arr)cout<<a<<"="<<gen(a)<<"\n";return 0;}