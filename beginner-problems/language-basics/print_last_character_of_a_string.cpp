/* 
 * Print last character of string
 *
 * Given a string s. Return the last character of the given string s.
 */
#include<iostream>
#include<string>

using namespace std;

int main() {
    string s = "iloveleetcode";
    cout <<  s[s.size() - 1];

    return 0;
}