#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
        virtual void getdata(){}
        virtual void putdata(){}
    protected:
        string name;
        int age, sum=0;
};
class Professor : public Person
{
    public:
        Professor():id {current_id++}
        { }
        void getdata()
        {
            std::cin >> name >> age >> publications;
        }
        void putdata()
        {
            std::cout << name << " " << age << " " << publications << " " <<                  id << std::endl;
        }
    private:
        int publications;
        int id; 
        static int current_id;
    
};
class Student : public Person
{
    public:
        Student():marks(6),id {current_id++}
        {}
        void getdata()
        {
            std::cin >> name >> age;
            std::cin >>marks[0]>>marks[1]>>marks[2] >> marks[3] >> marks[4]>>marks[5]; 
        }
        void putdata()
        {
            int sum = 0;
            for (std::vector<int>::iterator it = marks.begin(); it != marks.end(); ++it)
            {
                sum = sum + *it;
            }
            std::cout << name << " " << age << " " << sum << " " << id <<                 std::endl;
        }
    private:
        std::vector <int> marks;
        int id;
        static int current_id;
};

int Professor::current_id {1};

int Student::current_id {1};


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
