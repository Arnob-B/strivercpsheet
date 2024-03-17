#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  int counter=0;
  for(int i=0;i<n;i++){
    if(i%2==0) {
      //cout<<"log"<<m<<endl;
      for(int j=0;j<m;j++){
        cout<<"#";
      }
      cout<<endl;
    }
    else{
      if((counter++)%2==0) {
        for(int j=0;j<m;j++){
          if( j==m-1) cout<<"#";
          else cout<<".";
        }
        cout<<endl;
      }
      else{
        for(int j=0;j<m;j++){
          if( j==0) cout<<"#";
          else cout<<".";
        }
        cout<<endl;
      }
    }
  }
}
