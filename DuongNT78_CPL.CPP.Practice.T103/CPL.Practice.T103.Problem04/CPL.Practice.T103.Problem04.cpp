#include <iostream>
#include <cmath>
#include<string>

using namespace std;

class Employee {
public:
     string name, employeeID, projectName;
     int age;
     virtual void printlnformation() {
         cout << "Say Hi";
     };
     virtual void doWork() {
        cout << "Hello world.";
    }
};
class Tester : public Employee {
public:    
     void doWork() {
        name = "Mr.Quang";
        projectName = "GameBanCa";
        cout << "Tester: " << name << " is testing software in project " << projectName;
        cout << endl;
    };
};
class Developer : public Employee {
public:
    void doWork() {
        name = "Mr.Thanh";
        projectName = "GameBanCa";
        cout << "Developer: " << name << " is developing software in project " << projectName;  
        cout << endl;
     };
};
class ProjectManager : public Employee {
public:
    void doWork() {
        name = "Mr.Hoang";
        projectName = "GameBanCa";
        cout << "Project Manager: " << name << " is managing project " << projectName;
        cout << endl;
     };
};


int main()
{
    Tester T1;
    T1.doWork();
    Developer D1;
    D1.doWork();
    ProjectManager P1;
    P1.doWork();
   
    cout << "\n\n\n";
    return 0;
}


