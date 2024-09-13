#include<iostream>

using namespace std;
int main(){
    string s;
    cin>>s;
    char ch;
    cin>>ch;
    int c = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == ch){
            c++;
        }
    }
    cout<<c<<endl;

}