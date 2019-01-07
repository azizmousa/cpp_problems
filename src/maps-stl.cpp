#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, choice;
    map<string, int> myMap;
    cin >> n;
    for(int i = 0; i< n;++i){
        cin >> choice;
        string name = "";
        switch(choice){
            case 1:{
                int mark;
                cin >> name >> mark;
                map<string, int>::iterator find = myMap.find(name);
                if(find == myMap.end())
                    myMap.insert(make_pair(name, mark));
                else
                    myMap[name] += mark;
                
                break;
            }
            case 2:
                cin >> name;
                myMap.erase(name);
                break;
            case 3:
                cin >> name;
                map<string, int>::iterator find = myMap.find(name);
                if(find == myMap.end())
                    cout << 0 <<endl;
                else
                    cout << find->second <<endl;
                break;
        }
    }
    return 0;
}
