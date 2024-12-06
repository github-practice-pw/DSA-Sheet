/*
 * Print X, N number of times
 * 
 * Given two integers X and N, print the value X on the screen N times. 
 * Move to the next line after printing, even if N = 0.
 */
#include<iostream>

using namespace std;

int main() {
    int X = 7;
    int N = 5;

    if (N == 0) {
        cout << endl;
        return;
    }
    
    for(int i = 0; i < N; i++) {
        cout << X;

        if (i < N -1) {
            cout << " ";
        }
    }
    
    cout << endl;
}