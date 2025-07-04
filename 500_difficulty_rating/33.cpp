/*Second Max of Three Numbers
Problem Statement
Write a program that accepts sets of three numbers, and prints the second-maximum number among the three.

Input
First line contains the number of triples, N.
The next N lines which follow each have three space separated integers.
Output
For each of the N triples, output one new line which contains the second-maximum integer among the three.

Constraints
1 ≤ N ≤ 6
1 ≤ every integer ≤ 10000
The three integers in a single triplet are all distinct. That is, no two of them are equal.
Sample 1:
Input
Output
3
1 2 3
10 15 5
100 999 500
2
10
500*/

#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int min_val = a;
        if (b < min_val) min_val = b;
        if (c < min_val) min_val = c;
        
        int max_val = a;
        if (b > max_val) max_val = b;
        if (c > max_val) max_val = c;
        
        cout << (a + b + c - min_val - max_val) << endl;
    }
    return 0;
}