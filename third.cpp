#include<iostream>
#include<string.h>
#include<ctime>
using namespace std;

class student
{
    string name;
    int age;
    string address;
    string course;
    student()
    {
        cout>>"Enter the Student name:";
        cin>>name;
        cin>>age;
        cin>>address;
        cin>>course;

    }
    void time()
    {
        time_t t;
        struct tm*t;
        time (&t);
        cout<<asctime(t);
    }
    void display()
    {

        cout<<name<<age<<course<<address;
    }
};
class tour
{
    void plan()
    {
        string source;
        string destination;
        while (student)
        {
            cout<<source<<destination;
        }
    }
};
int main()
{
    student s1;
    s1.address("Harur");
    s1.age(24);
    s1.course("MCA");
    s1.name("jan");
    s1.display();
}
