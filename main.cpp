#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#include <string>
#define ll long long
using namespace std;

void solve() {
    string s;
    cin >> s;
    int ans=0;
    for(int i=0;i<s.size();){
        unordered_map<char,int> m;
        ans++;
        while(m.size()<=3&&i<s.size()){
            m[s[i]]++;
            i++;
        };
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

