#include<bits/stdc++.h>
using namespace std;
int main(){

  int n, i, j, k;
  cin>>n;
  int prime[n], m=0;
  prime[m++]=2; //prime initialize;

  bool vis[n+1]={}; //making false value to check;
  for(i=3; i<=n; i+=2){//checker;
    if(vis[i]==false){
      prime[m++]=i; //store prime
      for(j=i*i; j<=n; j+=i+i) vis[j]=true; //cut off not prime;
    }
  }
  for(i=0; i<m-1; i++) cout<<prime[i]<<' '; //printing prime;
  cout<<prime[m-1]<<endl;

    return 0;
}
