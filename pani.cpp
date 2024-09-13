#include <iostream>
#include <cstring> // For strlen()
using namespace std;

int main(){
    char a[] = "The five boxing wizards jump quickly";
    int temp = 0;
    int n = strlen(a);  // Corrected size calculation
    int alpha[26] = {0}; // Initialize the array to 0

    // Mark the presence of each letter
    for(int i = 0; i < n; i++){
        if(a[i] >= 'A' && a[i] <= 'Z')
            alpha[a[i] - 'A'] = 1;  // Capital letters
        else if(a[i] >= 'a' && a[i] <= 'z')
            alpha[a[i] - 'a'] = 1;  // Small letters
    }

    // Check if all letters are present
    for(int i = 0; i < 26; i++){
        if(alpha[i] == 0){
            temp = 1;
            break;
        }
    }

    if(temp == 0){
        cout << "Pangram" << endl;
    }
    else{
        cout << "Not" << endl;
    }

    return 0;
}
