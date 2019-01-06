#include <iostream>
#include <string>
using namespace std;

void swapFirstChar(string& a, string& b);

int main(int argc, char const *argv[])
{
    string a, b;
    cin >> a >>b;
    cout << a.length() << " " << b.size() << endl;
    cout << a+b <<endl;
    swapFirstChar(a, b);
    cout << a+" "+b <<endl;
    return 0;
}

void swapFirstChar(string& a, string& b){
    char s = a[0];
    a[0] = b[0];
    b[0] = s;
}
