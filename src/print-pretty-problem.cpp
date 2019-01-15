#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    double a, b, c;
    cin>> t;
    for (int i= 0; i<t;++i){
        cin >> a >> b >> c;
        cout << setbase(16) << setiosflags(ios::showbase) << (long)a << endl;
        cout <<left<<setfill('_')<<setw(15);
        cout <<fixed<<setprecision(2)<< resetiosflags(ios::showbase)<<setiosflags(ios::showpos) << b<<endl;
        cout <<scientific<<setiosflags(ios::uppercase)<< resetiosflags(ios::showpos) <<setprecision(9) << c<<endl;
    }
    return 0;
}
