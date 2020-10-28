// Problem's link: https://codeforces.com/contest/1433/problem/B

#include<bits/stdc++.h>
using namespace std;


int main() {

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n, cnt(0); cin >> n;
        vector<int> v;
        int arr[2] = {};
        for (int j = 0; j < n; j++) {
            int a; cin >> a;
            arr[a]++;
            v.push_back(a);
        }
        int firstIndexOfOne = 0, lastIndexOfOne = 0;
        for (int j = 0; j < n; j++){
            if (v[j] == 1) {
                firstIndexOfOne = j;
                break;
            }
        }
        for (int j = n - 1; j >= 0; j--){
            if (v[j] == 1){
                lastIndexOfOne = j;
                break;
            }
        }
        for (int j = firstIndexOfOne; j <= lastIndexOfOne; j++) {
            if (v[j] == 0) cnt++;
        }
        cout << cnt << endl;
    }
}
