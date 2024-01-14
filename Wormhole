/*
ID: NAMIN
TASK: wormhole
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

void setIO(string s) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}

int x[13],y[13],n;
int partner[13];
int next_[13];

bool cycle(){
    for(int i =1;i<=n;i++){
        int pos = i;
        for(int j =0;j<n;j++){
            pos = next_[partner[pos]];
        }
        if(pos != 0)
            return true;
    }
    return false;
}

int solve(){
    int i,total = 0;
    for(i =1;i<=n;i++)
        if(partner[i] == 0) break;

    if(i > n){
        if(cycle())
            return 1;
        else
            return 0;
    }

    for(int j =i+1;j<=n;j++){
        if(partner[j] == 0){
            partner[j] = i;
            partner[i] = j;
            total += solve();
            partner[j] = partner[i] = 0;
        }
    }
    return total;
}

int main(){

    setIO("wormhole");

    cin >> n;
    for(int i =1;i<=n;i++){
        cin >> x[i] >> y[i];
    }

    for(int i = 1;i<=n;i++){
        for(int j =1;j<=n;j++){
            if(y[i] == y[j] && x[j] > x[i])
                if(next_[i] == 0 || x[j]-x[i] < x[next_[i]]-x[i])
                   next_[i] = j;
        }
    }

    cout << solve() << endl;

    return 0;
}
