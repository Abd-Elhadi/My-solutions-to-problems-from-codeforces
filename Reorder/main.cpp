//problem's link: https://codeforces.com/contest/1436/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m; cin >> t;
    unsigned long long sum(0);
    while(t--){
        cin >> n >> m;
        for (int i = 0; i < n; i++){
            int a; cin >> a;
            sum += a;
        }
        if (sum == m) cout << "YES" << endl;
        else cout << "NO" << endl;
        sum = 0;
    }
}
