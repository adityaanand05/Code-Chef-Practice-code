/*Lucky Seven
Chef considers the number 
7
7 lucky. As a result, he believes that the 
7
7-th letter he sees on a day is his lucky letter of the day.

You are given a string 
S
S of length 
10
10, denoting the first 
10
10 letters Chef saw today.
What is Chef's lucky letter?

Input Format
The only line of input contains a string 
S
S, of length 
10
10.
Output Format
Print a single character: Chef's lucky letter .
Constraints
S
S has a length of 
10
10
S
S contains only lowercase Latin letters (i.e, the characters 'a' to 'z')
Sample 1:
Input
Output
proceeding
d
Explanation:
The 
7
7-th character of 
"proceeding"
"proceeding" is 'd', and hence that is Chef's lucky letter.

Sample 2:
Input
Output
outofsight
i
Explanation:
The 
7
7-th character of 
"outofsight"
"outofsight" is 'i', and hence that is Chef's lucky letter.*/


#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
    char s[10];
    
    cin>>s;
    
    cout<<s[6];
    
}