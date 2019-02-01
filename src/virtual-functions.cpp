#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    protected:
        string name;
        int age;
    public:
        virtual void getdata() =0;
        virtual void putdata() =0;

};
// void Person::getdata(){
//     cin >> this->name >> this->age;
// }

// void Person::putdata(){
//     cout << this->name << " " << this->age <<endl;
// }

class Professor : public Person{
    private:
        int publications, cur_id;
        static int serial;
    public:
        Professor();
        void getdata() override;
        void putdata() override;
        
};

int Professor::serial = 0;

Professor::Professor(){
    this->cur_id = ++Professor::serial;
}

void Professor::getdata(){
    cin >> this->name >> this-> age >> this->publications;
}

void Professor::putdata(){
    cout << this->name << " " 
    << this->age << " " 
    << this->publications << " " 
    << this->cur_id << endl;
}

class Student: public Person{
    private:
        int cur_id;
        int marks[6];
        static int serial;
    public:
        Student();
        void getdata() override;
        void putdata() override;
};
int Student::serial = 0;
Student::Student(){
    this->cur_id = ++Student::serial;
}

void Student::getdata(){
    cin >> this->name >> this->age;
    for(int i =0; i<6;++i)
        cin >> this->marks[i];
}

void Student::putdata(){
    int sum =0;
    for(int i =0; i<6;++i)
        sum += this->marks[i];
    cout << this->name << " " 
    << this->age << " " 
    << sum << " " 
    << this->cur_id << endl;
}

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
