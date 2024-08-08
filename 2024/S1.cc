#include<bits/stdc++.h>
using namespace std;
int a[1000010];
int n,sum = 0;
int main(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>a[i];
    }
    for(int i = 1;i<=n/2;i++){
        if(a[i]==a[i+n/2]){
            sum+=2;
        }
    }
    cout<<sum;
    return 0;
}
