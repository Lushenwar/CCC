#include<bits/stdc++.h>
using namespace std;
int aa[110],p[110];
string f;
int n,t,d = 0;
int main(){
    cin>>t>>n;
    for(int i = 1;i<=t;i++){
        cin>>f;
        for(int j = 'a';j<='z';j++){
            for(int k = 0;k<n;k++){
                if(f[k]==j){
                    aa[j]++;
                }
            }
        }

        for(int i = 'a';i<='z';i++){
            if(aa[i]>1){
                for(int k = 0;k<n;k++){
                    if(f[k]==i){
                        p[k]=2;
                    }
                }
            }
        }
        for(int k = 0;k<n;k++){
            if(p[k]==p[k+1]&&k!=n-1){
                d++;
            }
            p[k] = 0;
        }
        if(d>=1){
            cout<<"F"<<endl;
        }
        else{
            cout<<"T"<<endl;
        }
        d = 0;
        for(int i = 'a';i<='z';i++){
            aa[i] = 0;
        }
    }
    return 0;
}
