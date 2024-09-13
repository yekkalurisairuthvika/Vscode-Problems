#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int k;
    cin>>k;
    //string c;
    for(int i=0;i<s.size();i++){
        
        if(s[i] == ' '){
            continue;
        }
        else {
            if(islower(s[i])) {
                s[i] = (s[i] - 'a' + k) % 26 + 'a';  // Shift within 'a' to 'z'
            }
            else if(isupper(s[i])) {
                s[i] = (s[i] - 'A' + k) % 26 + 'A';  // Shift within 'A' to 'Z'
            }
        }/*
        else{
            s[i] = s[i] + 1 ;
        }
        */
        
    }
    cout<<s<<endl;
}