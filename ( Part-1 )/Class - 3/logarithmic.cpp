#include<bits/stdc++.h>
using namespace std;

int main() {

 cout<<floor(log10(123)) + 1<<endl; // count the number using logarithm
 // log10 (71)
 cout<<log2(71)/log2(5)<<endl<<endl;


  // Logarithm to the base 2
  cout << log2(32) << endl;   // 5

  // Logarithm to the base 10
  cout << log10(1030) << endl;   // 3.01284

  // Natural logarithm
  cout << log(2.71828) << endl;   // 0.999999

  // Logarithm in any base (log3(81) = 4)
  cout << log(81) / log(3) << endl;   // 4
  cout << log2(81) / log2(3) << endl;   // 4, same as above

  // Number of digits in a number
  cout << floor(log10(3241)) + 1 << endl;   // 4

  // Number of digits in n! (n factorial)
  // ans = floor(log10(n!)) + 1
  //     = floor(log10(1 * 2 * 3 * ... * n)) + 1
  //     = floor(log10(1) + log10(2) + log10(3) + ... + log10(n)) + 1
  int n = 10;
  double ans = 0;

/*
  for(int i=1;i<=n;i++) {
   ans *=i;
  }
  //Time Complexity O(n!) --
  cout<<"The Factorial: "<<ans<<endl;
  cout<<floor(log10(ans)) + 1 <<endl; 
*/

  // Making it simple
  
  for (int i = 1; i <= n; i++) {
      ans += log10(i);
  }
  //Count the total digit of n! 
  cout << floor(ans) + 1 << endl;   // 7 (10! = 3628800) -- (5! = 120)

  return 0;
}