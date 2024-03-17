#include<bits/stdc++.h>
using namespace std;
int main(){
  map<string,int> polygons = {
    {"Tetrahedron",4},
    {"Cube",6},
    {"Octahedron",8},
    {"Dodecahedron",12},
    {"Icosahedron",20},
  };
  int total_num= 0;
  int n;
  cin>>n;
  string temp;
  for(int i=0;i<n;i++){
    cin>>temp;
    total_num+=polygons[temp];
  }
  cout<<total_num;
}
