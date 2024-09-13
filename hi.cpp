#include<iostream>
using namespace std;

int main() {
    char name[20];
    cout<<"Enter char "<<endl;
    cin>>name;
    cout<<"name is: "<<endl;
    cout<<name<<endl;
    int cnt = 0;
    for(int i=0;name[i] != '\0';i++){
        cnt++;
    }
    cout<<cnt<<endl;

    
}