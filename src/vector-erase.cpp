#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, cur, q1, q2, q3;
    vector<int> vec;
    cin >> n;
    for(int i =0;i<n;++i){
        cin >> cur;
        vec.push_back(cur);
    }

    cin >> q1 >> q2 >> q3;

    vec.erase(vec.begin()+q1-1);
    vec.erase(vec.begin()+q2-1, vec.begin() + q3-1);

    cout << vec.size()<<endl;

    for(size_t i = 0; i < vec.size();++i){
        cout << vec[i] << " ";
    }

    cout << endl;

    return 0;
}
