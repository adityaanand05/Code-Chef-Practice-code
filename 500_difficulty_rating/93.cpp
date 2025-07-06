/*Sum of Digits
You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input Format
The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

Output Format
For each test case, calculate the sum of digits of N, and display it in a new line.

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
12345
31203
2123
15
9
8*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,sum=0;
        cin>>x;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        cout << sum << endl;
    }
}