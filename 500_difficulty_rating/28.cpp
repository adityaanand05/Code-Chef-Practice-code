/*Counting Words
Harsh was recently gifted a book consisting of 
N
N pages. Each page contains exactly 
M
M words printed on it. As he was bored, he decided to count the number of words in the book.

Help Harsh find the total number of words in the book.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of two space-separated integers on a single line, 
N
N and 
M
M — the number of pages and the number of words on each page, respectively.
Output Format
For each test case, output on a new line, the total number of words in the book.

Constraints
1
≤
T
≤
100
1≤T≤100
1
≤
N
≤
100
1≤N≤100
1
≤
M
≤
100
1≤M≤100
Sample 1:
Input
Output
4
1 1
4 2
2 4
95 42
1
8
8
3990
Explanation:
Test case 
1
1: The book consists of only 
1
1 page, and each page has only 
1
1 word. Hence, the total number of words is 
1
1.

Test case 
2
2: The book consists of 
4
4 pages, and each page has 
2
2 words. Hence, the total number of words is 
2
+
2
+
2
+
2
=
8
2+2+2+2=8.

Test case 
3
3: The book consists of 
2
2 pages, and each page has 
4
4 words. Hence, the total number of words is 
4
+
4
=
8
4+4=8.

Test case 
4
4: The book consists of 
95
95 pages, and each page has 
42
42 words. Hence, the total number of words is 
3990
3990.*/

#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout <<x*y<<endl;
        
    }
    return 0;
}