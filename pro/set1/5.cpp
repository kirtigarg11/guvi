#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int x,a,b;
    cin>>x>>a>>b;
    if((x/2)%(a+b)==0 && x%2==0)
        cout<<"YES";
    else if(a==b && (x/2)%a==0 && x%2==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}