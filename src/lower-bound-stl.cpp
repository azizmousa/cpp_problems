#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(int argc, char const *argv[])
{
    int n, q, in_tmp;
    vector<int> vect;
    cin >> n;
    for(int i = 0;i<n;++i){
        cin >> in_tmp;
        vect.push_back(in_tmp);
    }
    cin >> q;
    vector<int>::iterator low;
    for(int i =0; i<q;++i){
        cin >> in_tmp;
        low = lower_bound(vect.begin(), vect.end(), in_tmp);
        if(vect[low - vect.begin()] == in_tmp)
            cout<< "Yes " <<low - vect.begin() + 1<<endl;
        else
            cout<< "No " <<low - vect.begin() + 1<<endl;
    }
    return 0;
}
