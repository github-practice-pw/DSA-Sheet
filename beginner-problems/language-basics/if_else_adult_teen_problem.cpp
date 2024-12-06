/*
 * If-else [Adult-teen problem]
 * 
 * Given an integer age, print on the screen:

   Adult if age >= 18
   Teen if age < 18

   Do not change the case of any letter in "Adult" and "Teen" while printing the answer.
 *
 */
#include<iostream>

using namespace std;

int main() {
    int age;
    cin >> age;

    if (age >= 18) {
        cout << "Adult";
    } else {
        cout << "Teen";
    }
    return 0;
}