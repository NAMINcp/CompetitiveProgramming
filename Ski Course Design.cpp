/*
ID: NAMIN
TASK: skidesign
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <math.h>
#define ll long long

using namespace std;


void setIO(string s) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}



int main(){

    setIO("skidesign");
    int n;
    int tab[1000];
    cin >> n;
    for(int i =0;i<n;i++){
        cin >> tab[i];
    }
    ll ans = 1000*1000*1000;
    for(int i =0;i<=83;i++){
        int en = i+17;
        ll sum = 0;
        for(int j =0;j<n;j++){
            if(tab[j] > en) sum += (tab[j]-en)*(tab[j]-en);
            if(tab[j] < i) sum += (i-tab[j])*(i-tab[j]);
        }
        ans = min(ans,sum);
    }

    cout << ans << endl;

    return 0;
}
