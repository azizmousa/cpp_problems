#include <iostream>
#include <set>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, choice, temp;
    set<int> mySet;
    cin >> n;
    for(int i = 0; i< n;++i){
        cin >> choice >> temp;
        switch(choice){
            case 1:
                mySet.insert(temp);
                break;
            case 2:
                mySet.erase(temp);
                break;
            case 3:
                set<int>::iterator find = mySet.find(temp);
                if(find == mySet.end())
                    cout << "No" <<endl;
                else
                    cout << "Yes" <<endl;
                break;
        }
    }
    return 0;
}
