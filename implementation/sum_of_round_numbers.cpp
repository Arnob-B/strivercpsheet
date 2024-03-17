#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i =0;i<t;i++){
    int n;cin>>n;
    int tenses = 1;
    vector<int> nums;
    while(n!=0){
      if((n%10)!=0){
        nums.push_back((n%10)*tenses);
      }
      tenses*=10;
      n/=10;
    }
    cout<<nums.size()<<endl;
    for(int j =0;j<nums.size();j++){
      cout<<nums[j]<<" ";
    }
    cout<<endl;
  }
}
