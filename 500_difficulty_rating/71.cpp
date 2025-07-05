/*The Gift
Om has 
X
X rupees. He wants to gift a laptop worth 
N
N rupees to his girlfriend.

We know that Om is the technical secretary of IIIT-A and has access to the Gymkhana funds of IIIT-A. Currently there are 
M
M rupees in the fund and Om can use the fund as much as he wants.

Find whether Om can gift his girlfriend a new laptop.

Input Format
The first and only line of input contains three space-separated integers 
X
X, 
N
N, and 
M
M — the amount Om has, the price of the laptop, and the amount present in the Gymkhana fund respectively.
Output Format
For each input, output YES if Om can buy the laptop and NO otherwise.

You may print each character in uppercase or lowercase. For example YES, Yes, yes, and yES are all considered the same.

Constraints
1
≤
X
,
N
,
M
≤
10
3
1≤X,N,M≤10 
3
 
Sample 1:
Input
Output
5 10 15
YES
Explanation:
Om uses 
5
5 rupees from Gymkhana fund. So, the amount he has is 
5
+
5
=
10
5+5=10 rupees. He can buy the laptop with cost 
10
10 rupees.

Sample 2:
Input
Output
4 50 7
NO
Explanation:
Even if Om uses the whole Gymkhana fund, he won't be able to buy the laptop.*/

#include <iostream>
using namespace std;

int main() {
    int x, n, m;
    cin >> x >> n >> m;
    if (x + m >= n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}