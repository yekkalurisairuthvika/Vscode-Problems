#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int c = 0;
    for(int i=0;i<s.size();i++){
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')){
            if(s[i] == s[i+1]){
                c++;
            }
            else {
                
            }
        } 
    }
    cout<<c<<endl;
}