// Considering spaces as a special character .
#include<iostream>
using namespace std;

int main() {
    string s;
    
    getline(cin,s);
    //cin>>s;
    int c = 0;
    //char ch;
    string d = "";
    string sc = "";
    for(char ch : s){
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
            continue;
        }
        //return false;
        else{
            c++;
        }
        
        if (isdigit(ch)) { //to find if there is digit in string
            d += ch;        
        } 
        else if (!isalpha(ch)) {   //to find if the string does not contain alpha but does special chars
            sc += ch;    
        }
    }


    cout << "Digits: " << d << endl;
    cout << "Special Characters: " << sc << endl;
    
    //c++;
    cout<<c<<endl;
    //return false;
}