/*
ID: NAMIN
TASK: barn1
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int& a,int& b){
    return a > b;
}

int main() {

    ofstream fout("barn1.out");
    ifstream fin("barn1.in");

    int m,s,c;
    fin >> m >> s >> c;

    int tab[c] = {0};
    int d = 0;
    int last;
    int first;

    int t[c];

    for(int i =0;i<c;i++){
        fin >> t[i];
    }

    sort(t,t+c);
    for(int i =0;i<c;i++){
        if(i != 0)
            tab[i] = t[i]-last-1;
        last = t[i];

        if(i == 0)
            d += t[i]-1;
        else if(i == c-1)
            d += s-last;
    }

    sort(tab,tab+c,comp);
    int p = 0;

    for(int i =1;i<=m-1 && i <= c;i++){
        p += tab[i-1];
    }

    fout << s-(p+d) << endl;

    return 0;
}
