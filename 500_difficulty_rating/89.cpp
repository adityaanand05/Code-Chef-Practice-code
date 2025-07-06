// /**/Maximum Submissions
// A participant can make 
// 1
// 1 submission every 
// 30
// 30 seconds. If a contest lasts for 
// X
// X minutes, what is the maximum number of submissions that the participant can make during it?

// It is also given that the participant cannot make any submission in the last 
// 5
// 5 seconds of the contest.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// Each test case consists of a single integer 
// X
// X, denoting the number of minutes.
// Output Format
// For each test case, output the maximum number of submissions a participant can make in 
// X
// X minutes.

// Constraints
// 1
// ≤
// T
// ≤
// 30
// 1≤T≤30
// 1
// ≤
// X
// ≤
// 30
// 1≤X≤30
// Sample 1:
// Input
// Output
// 4
// 1
// 2
// 3
// 4
// 2
// 4
// 6
// 8
// Explanation:
// Test case 
// 1
// 1: The contest lasts for 
// 1
// 1 minute, which is 
// 60
// 60 seconds. A participant can make 
// 2
// 2 submissions during this time — for example, in the 
// 5
// 5-th second and in the 
// 48
// 48-th second. Making 
// 3
// 3 or more submissions is impossible.

// Test case 
// 2
// 2: The contest lasts for 
// 2
// 2 minutes, which is 
// 120
// 120 seconds. A participant can make 
// 4
// 4 submissions during this time.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<2*x<<endl;
        
    }
}