
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
  string s= "abcabc";
  string str = s+s;
    str.pop_back();
    str = str.substr(1);

    cout<<str;
    return 0;
}

