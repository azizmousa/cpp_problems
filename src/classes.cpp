#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    private:
        int age, standard;
        string firstName, lasName;
    public:
        void set_age(int age){
            this->age = age;
        }
        void set_first_name(string fName){
            this->firstName = fName;
        }
        void set_last_name(string lName){
            this->lasName = lName;
        }
        void set_standard(int standard){
            this->standard = standard;
        }

        int get_age(){return this->age;}
        string get_first_name(){return this->firstName;}
        string get_last_name(){return this->lasName;}
        int get_standard(){return this->standard;}
        string to_string(){
            stringstream sAge, sStandard;
            sAge << this->age;
            sStandard << this->standard;
            return sAge.str() + "," + this->firstName + "," + this->lasName + "," 
            + sStandard.str();
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}