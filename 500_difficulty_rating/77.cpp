/*Height of Rationals
In a recent breakthrough in mathematics, the proof utilized a concept called Height.

Consider a fraction 
a
b
b
a
​
 . Its Height is defined as the maximum of its numerator and denominator. So, for example, the Height of 
3
19
19
3
​
  would be 
19
19, and the Height of 
27
4
4
27
​
  would be 
27
27.

Given 
a
a and 
b
b, find the Height of 
a
b
b
a
​
 .

Input Format
The only line of input contains two integers, 
a
a and 
b
b.

Output Format
Output a single integer, which is the Height of 
a
b
b
a
​
 .

Constraints
1
≤
a
,
b
≤
100
1≤a,b≤100
a
a and 
b
b do not have any common factors.
Sample 1:
Input
Output
3 19
19
Explanation:
The maximum of 
{
3
,
19
}
{3,19} is 
19
19. Hence the Height of 
3
19
19
3
​
  is 
19
19.

Sample 2:
Input
Output
27 4
27
Explanation:
The maximum of 
{
27
,
4
}
{27,4} is 
27
27. Hence the Height of 
27
4
4
27
​
  is 
27
27.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x,y;
    cin>>x>>y;
    if(x>=y){
        cout << x <<endl;
    }else{
        
        cout << y <<endl;
    }
}

