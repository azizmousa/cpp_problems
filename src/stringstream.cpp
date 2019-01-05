#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	int num;
    char ch;
    vector<int> ret;
    stringstream sstream(str);
    while(!sstream.eof()){
        sstream >> num;
        ret.push_back(num);
        if(sstream.peek()==',')
            sstream >> ch;
    }
    return ret;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}