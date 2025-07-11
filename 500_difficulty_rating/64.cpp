/*Interior Design
Chef decided to redecorate his house, and now needs to decide between two different styles of interior design.

For the first style, tiling the floor will cost 
X
1
X 
1
​
  rupees and painting the walls will cost 
Y
1
Y 
1
​
  rupees.

For the second style, tiling the floor will cost 
X
2
X 
2
​
  rupees and painting the walls will cost 
Y
2
Y 
2
​
  rupees.

Chef will choose whichever style has the lower total cost. How much will Chef pay for his interior design?

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of a single line of input, containing 
4
4 space-separated integers 
X
1
,
Y
1
,
X
2
,
Y
2
X 
1
​
 ,Y 
1
​
 ,X 
2
​
 ,Y 
2
​
  as described in the statement.
Output Format
For each test case, output on a new line the amount Chef will pay for interior design.

Constraints
1
≤
T
≤
100
1≤T≤100
1
≤
X
1
,
Y
1
,
X
2
,
Y
2
≤
100
1≤X 
1
​
 ,Y 
1
​
 ,X 
2
​
 ,Y 
2
​
 ≤100
Sample 1:
Input
Output
4
10 20 9 25
10 20 9 20
10 20 20 10
100 43 85 61
30
29
30
143
Explanation:
Test case 
1
1: The first style costs 
10
+
20
=
30
10+20=30 rupees, and the second costs 
9
+
25
=
34
9+25=34 rupees. The first is cheaper, so Chef will pay 
30
30 rupees.

Test case 
2
2: The first style costs 
10
+
20
=
30
10+20=30 rupees, and the second costs 
9
+
20
=
29
9+20=29 rupees. The second is cheaper, so Chef will pay 
29
29 rupees.

Test case 
3
3: The first style costs 
10
+
20
=
30
10+20=30 rupees, and the second costs 
20
+
10
=
30
20+10=30 rupees. Both styles cost the same, so Chef is always going to pay 
30
30 rupees.

Test case 
4
4: The first style costs 
100
+
43
=
143
100+43=143 rupees, and the second costs 
85
+
61
=
146
85+61=146 rupees. The first is cheaper, so Chef will pay 
143
143 rupees.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        if(x+y<a+b){
            cout << x+y <<endl;
        }else{
            
            cout << a+b <<endl;
        }
        
    }
}