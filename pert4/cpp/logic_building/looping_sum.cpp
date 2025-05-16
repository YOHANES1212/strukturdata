#include<iostream>
using namespace std;

int findSum(int n)
{
   return n * (n + 1) / 2;
}

// Driver code
int main()
{
  int n = 5;
  cout << findSum(n);
  return 0;
} 