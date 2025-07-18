/*Codechef Airlines
Chef has opened a new airline. Chef has 
10
10 airplanes where each airplane has a capacity of 
X
X passengers.
On the first day itself, 
Y
Y people are willing to book a seat in any one of Chef's airplanes.

Given that Chef charges 
Z
Z rupees for each ticket, find the maximum amount he can earn on the first day.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of three space-separated integers 
X
,
Y
,
X,Y, and 
Z
Z — the capacity of each airplane, the number of people willing to book a seat in any one of Chef's airplanes on the first day, and the cost of each seat respectively.
Output Format
For each test case, output on a new line, the maximum amount Chef can earn on the first day.

Constraints
1
≤
T
≤
1000
1≤T≤1000
1
≤
X
,
Y
,
Z
≤
100
1≤X,Y,Z≤100
Sample 1:
Input
Output
4
2 15 10
1 10 1
5 60 100
1 11 7
150
10
5000
70
Explanation:
Test case 
1
1: Chef has 
10
10 airplanes and each airplane has a capacity of 
2
2 passengers. Thus, there are 
20
20 seats available in total.
There are 
15
15 people who want to book a seat. Since we have enough seats for everyone, all 
15
15 people can book their seats and pay 
10
10 rupees each. The total money Chef earns is 
15
⋅
10
=
150
15⋅10=150.

Test case 
2
2: Chef has 
10
10 airplanes and each airplane has a capacity of 
1
1 passenger. Thus, there are 
10
10 seats available in total.
There are 
10
10 people who want to book a seat. Since we have enough seats for everyone, all 
10
10 people can book their seats and pay 
1
1 rupee each. The total money Chef earns is 
10
⋅
1
=
10
10⋅1=10.

Test case 
3
3: Chef has 
10
10 airplanes and each airplane has a capacity of 
5
5 passengers. Thus, there are 
50
50 seats available in total.
There are 
60
60 people who want to book a seat. Since we have only 
50
50 seats, only 
50
50 people can book their seats and pay 
100
100 rupees each. The total money Chef earns is 
50
⋅
100
=
5000
50⋅100=5000.

Test case 
4
4: Chef has 
10
10 airplanes and each airplane has a capacity of 
1
1 passenger. Thus, there are 
10
10 seats available in total.
There are 
11
11 people who want to book a seat. Since we have only 
10
10 seats, only 
10
10 people can book their seats and pay 
7
7 rupees each. The total money Chef earns is 
10
⋅
7
=
70
10⋅7=70.*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        if (x*10>=y) {
            cout << y*z << endl;
        } else {

            cout << (x*10)*z << endl;
        }

    }
}