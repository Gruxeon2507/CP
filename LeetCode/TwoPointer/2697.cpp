#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int l=0;
        int r=s.size()-1;
        while (l<=r){
            if(s[l]!=s[r]){
               if(s[r]<s[l]){
                   s[l]=s[r];
               }else{
                   s[r]=s[l];
               }
            }
            l++;
            r--;
        }
        return s;
    }
};