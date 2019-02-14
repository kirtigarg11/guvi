#include <bits/stdc++.h> 
using namespace std;
int main() {
int a,b;
cin>>a>>b;
int arr[a];
for(int i=0;i<a;i++){
  cin>>arr[i];
}
int co=0,i=0;
while(co!=b){
  if(arr[i]%2!=0){
    co++;
  }
  i++;
}
i=i-1;
cout<<arr[i];
}