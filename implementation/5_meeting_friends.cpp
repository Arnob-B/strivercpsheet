#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> arr;
  for(int i=0;i<3;i++){
    int temp;
    cin>>temp;
    arr.push_back(temp);
  }
  sort(arr.begin(),arr.end());
  cout<<(arr[1]-arr[0])+(arr[2]-arr[1]);
}
