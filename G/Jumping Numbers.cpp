// Given a positive number X. Find all Jumping Numbers smaller than or equal to X. 
// Jumping Number: A number is called Jumping Number if all adjacent digits in it differ by only 1. All single digit numbers are considered as Jumping Numbers. For example 7, 8987 and 4343456 are Jumping numbers but 796 and 89098 are not.

// Input:
// The first line of the input contains T denoting the number of testcases. Each testcase contain a positive number X.

// Output:
// Output all the jumping numbers less than X in sorted order. Jump to example for better understanding.

// Constraints:
// 1 <= T <= 100
// 1 <= N <= 109

// Example:
// Input:
// 2
// 10
// 50
// Output:
// 0 1 2 3 4 5 6 7 8 9 10
// 0 1 2 3 4 5 6 7 8 9 10 12 21 23 32 34 43 45

// CODE:-
#include <bits/stdc++.h> 
using namespace std; 
  
void bfs(int x, int num) 
{ 
  queue<int> q;
  q.push(num);
  
  while(!q.empty()){
  num=q.front();
  q.pop();
  
 if(num<=x)
 {
  cout<<num<<" ";
  int last_dig=num%10;
  if(last_dig==0)
     q.push((num * 10) + (last_dig + 1));
  else if (last_dig == 9) 
     q.push((num * 10) + (last_dig - 1)); 
  else { 
     q.push((num * 10) + (last_dig - 1)); 
     q.push((num * 10) + (last_dig + 1)); 
       } 
      }
    }
  }
  void printJumping(int x)
  {
  cout<<0<<" ";
  for(i=1; i<=9 && i<=x; i++)
     bfs(x,i);
  }
  
  int main()
  {
  int x=40;
  printJumping=40;
  return 0;
  }
