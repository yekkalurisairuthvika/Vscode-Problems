#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[] = "The five boxing wizards jump quickly";
    int temp = 0;
    int n = strlen(a);
    int alpha[26];
    for(int i=0;i<n;i++){
        if(a[i] >= 65 && a[i]<=90)
            alpha[a[i]-97] = 1;
    }
    for(int i=0;i<26;i++){
        if(alpha[i] == 0){
            temp = 1;
            break;
        }
    }
    if(temp == 0){
        cout<<"Pangram"<<endl;
    }
    else{
        cout<<"Not"<<endl;
    }
}