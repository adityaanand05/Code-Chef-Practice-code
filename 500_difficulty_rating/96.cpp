/*First and Last Digit
Given an integer N . Write a program to obtain the sum of the first and last digits of this number.

Input Format
The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains an integer N.

Output Format
For each test case, display the sum of first and last digits of N in a new line.

Constraints
1
≤
T
≤
1000
1≤T≤1000
1
≤
N
≤
1000000
1≤N≤1000000
Sample 1:
Input
Output
3 
1234
124894
242323
5
5
5*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;

        int ld = x % 10;
        int fd = x;
        while (fd >= 10) {
            fd /= 10;

        }
        cout << fd + ld << endl;
    }
}