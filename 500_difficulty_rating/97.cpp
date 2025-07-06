/*Enormous Input Test
You are given 
N
N integers. Find the count of numbers divisible by 
K
K.

Input Format
The input begins with two positive integers 
N
N, 
K
K. The next 
N
N lines contains one positive integer each denoted by 
A
i
A 
i
​
 .

Output Format
Output a single number denoting how many integers are divisible by 
K
K.

Constraints
1
≤
N
,
K
≤
10
7
1≤N,K≤10 
7
 
1
≤
A
i
≤
10
9
1≤A 
i
​
 ≤10 
9
 
Sample 1:
Input
Output
7 3
1
51
966369
7
9
999996
11
4
Explanation:
The integers divisible by 
3
3 are 
51
,
966369
,
9
,
51,966369,9, and 
999996
999996. Thus, there are 
4
4 integers in total.*/

// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n,k;
    cin >> n >> k;

    int count=0;
    for (int i=0;i<=n-1;i++)
    {
        int a;
        cin >> a;
        if (a%k==0)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
