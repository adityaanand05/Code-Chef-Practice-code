/*ATM
Pooja would like to withdraw X US Dollar from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). For each successful withdrawal the bank charges 0.50 US Dollar.

Calculate Pooja's account balance after an attempted transaction.

Input Format
Each input contains 2 numbers 
X
X and 
Y
Y.
X
X is the amount of cash which Pooja wishes to withdraw.
Y
Y is Pooja's initial account balance.

Output Format
Output the account balance after the attempted transaction, given as a number with two digits of precision. If there is not enough money in the account to complete the transaction, output the current bank balance.

Constraints
0
<
X
≤
2000
0<X≤2000 - the amount of cash which Pooja wishes to withdraw.
0
≤
Y
≤
2000
0≤Y≤2000 with two digits of precision - Pooja's initial account balance.
Sample 1:
Input
Output
30 120.00
89.50
Explanation:
Example - Successful Transaction

Sample 2:
Input
Output
42 120.00
120.00
Explanation:
Example - Incorrect Withdrawal Amount (not multiple of 5)

Sample 3:
Input
Output
300 120.00
120.00
Explanation:
Example - Insufficient Funds*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x;
    double y;
    cin >> x >> y;

    cout << fixed << setprecision(2); // Added precision formatting

    if (x % 5 != 0 || x + 0.50 > y) { // Corrected the condition
        cout << y << endl;
    } else {
        cout << y - x - 0.50 << endl;
    }

    return 0;
}