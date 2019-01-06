#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    int n;

    cin >> n;
    int in;
    for(int i=0; i<n;++i){
        cin >> in;
        v.push_back(in);
    } 

    sort(v.begin(), v.end());

    for(int i =0;i<v.size();++i){
        cout << v[i] << " ";
    }

    cout << endl;
    return 0;
}
