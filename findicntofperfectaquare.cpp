#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c = 0;
    for(int i=0;i<n;i++){
        int r = sqrt(a[i]);
        if(r*r == a[i]){
            c++;

        }
        continue;
    }
    cout<<c<<endl;
}