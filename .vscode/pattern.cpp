#include<iostream>
using namespace std;

int main(){

    int n = 5;
    for(int line = 1; line <= n; line++) {
        for(int space = n - line; space > 0; space--) { // Fixed loop variable name and added braces
            cout << " ";
        }
        int no_of_chars = 2 * (2 * n - line) - 1;
        for(int j = 0; j < no_of_chars; j++) {
            cout << (char)('A' + j);
        }
        cout << "\n";
    }
    return 0;
}
