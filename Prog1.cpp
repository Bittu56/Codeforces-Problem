
/*
An array is beautiful if both of the following two conditions meet:

there are at least l1 and at most r1 elements in the array equal to its minimum;
there are at least l2 and at most r2 elements in the array equal to its maximum.
For example, the array [2,3,2,4,4,3,2] has 3 elements equal to its minimum (1-st, 3-rd and 7-th) and 2 elements equal to its maximum (4-th and 5-th).

Another example: the array [42,42,42] has 3 elements equal to its minimum and 3 elements equal to its maximum.

Your task is to calculate the minimum possible number of elements in a beautiful array.

Input
The first line contains one integer t (1≤t≤5000) — the number of test cases.

Each test case consists of one line containing four integers l1, r1, l2 and r2 (1≤l1≤r1≤50; 1≤l2≤r2≤50).

Output
For each test case, print one integer — the minimum possible number of elements in a beautiful array.
*/


#include<iostream>
using namespace std;
#include<vector>
#include<functional>
#include<algorithm>
#include<thread>
#include<mutex>

#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  for (int i = 0; i < t; i++){
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if (max(l1, l2) <= min(r1, r2)){
      cout << max(l1, l2) << endl;
    } else {
      cout << l1 + l2 << endl;
    }
  }
}

