/*Dominant Army
In the medieval age, there were 
3
3 kingdoms 
A
A, 
B
B, and 
C
C. The army of these kingdom had 
N
A
N 
A
​
 , 
N
B
N 
B
​
 , and 
N
C
N 
C
​
  soldiers respectively.

You are given that an army with 
X
X soldiers can defeat an army with 
Y
Y soldiers only if 
X
>
Y
X>Y.

An army is said to be dominant if it can defeat both the other armies combined. For example, kingdom 
C
C's army will be dominant only if 
N
C
>
N
A
+
N
B
N 
C
​
 >N 
A
​
 +N 
B
​
 .

Determine whether any of the armies is dominant or not.

Input Format
The first line contains a single integer 
T
T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains three integers 
N
A
N 
A
​
 , 
N
B
N 
B
​
 , and 
N
C
N 
C
​
  - the number of warriors in the armies of kingdoms 
A
A, 
B
B, and 
C
C respectively.
Output Format
For each test case, output YES if any of the armies is dominant. Otherwise, output NO.

You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

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
A
,
N
B
,
N
C
≤
100
1≤N 
A
​
 ,N 
B
​
 ,N 
C
​
 ≤100
Sample 1:
Input
Output
4
15 5 6
12 13 16
1 1 100
10 10 20
YES
NO
YES
NO
Explanation:
Test case 
1
1: The kingdom 
A
A's army is dominant since 
15
>
5
+
6
15>5+6.

Test case 
2
2: We can observe that none of the armies is dominant.

Test case 
3
3: The kingdom 
C
C's army is dominant since 
100
>
1
+
1
100>1+1.

Test case 
4
4: We can observe that none of the armies is dominant. Note that the kingdom 
C
C's army is not dominant since 
20
≤
10
+
10
20≤10+10.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x>z+y||y>x+z||z>x+y){
            cout << "YES" <<endl;
        }else{
            
            cout << "NO" <<endl;
        }
        
    }
}