#include <iostream>
#include <string>

using namespace std;

struct Student{
    int age, standard;
    string first_name, last_name;
};

int main(int argc, char const *argv[])
{
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}
