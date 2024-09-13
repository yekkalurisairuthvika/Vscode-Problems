//print coprime triplet of range
#include <iostream>
using namespace std;


int gcd(a,b){
    while(b){
        a = b;
        b = a%b;
        //a,b = b,a%b;
    return b;
    }
}

int coprime(a,b){
    return gcd(a,b)==1;
}

int triple(n){

    for(int i=5;i<n+1;i++){
        for(int j=4;j<=i;j++){
            for(int k = 3;k<=j;k++){
                if(k*k + j*j == i*i arecoprime(i,j) and arecoprime(j,k) and arecoprime(i,k));
                    arecoprime(i,k);
                    print(i,j,k);
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    
}