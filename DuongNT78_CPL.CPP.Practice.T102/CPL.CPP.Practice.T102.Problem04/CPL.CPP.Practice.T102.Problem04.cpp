
#include<iostream>
using namespace std;

class Employess {
private:
    struct Information {
        string account, name, department; // Creat a Abtract class whith 6 Employees
    };
    Information a1, a2, a3, a4, a5, a6; 
    void call() {
        a1.account = "VanNC";
        a1.department = "FA.GO";
        a1.name = "Van";
        a2.account = "TienAC";
        a2.department = "SG.C";
        a2.name = "Tien";
        a3.account = "HoaDC";
        a3.department = "FL.C";
        a3.name = "Hoa";
        a4.account = "BinhQW";
        a4.department = "BID.V";
        a4.name = "Binh";
        a5.account = "HuyenOP";
        a5.department = "MV.B";
        a5.name = "Huyen";
        a6.account = "HaiUC";
        a6.department = "AO.GO";
        a6.name = "Hai";
    }   // With Name, Account, Department.
public:  
    void ShowInformation() {
        call();
        cout << "Thong Tin Nhan Vien: \n";
        cout << "account" << "\t" << "depar" << "\t" << "name" << "\n";
        cout << a1.account << "\t" << a1.department << "\t" << a1.name << "\n";
        cout << a2.account << "\t" << a2.department << "\t" << a2.name << "\n";
        cout << a3.account << "\t" << a3.department << "\t" << a3.name << "\n";
        cout << a4.account << "\t" << a4.department << "\t" << a4.name << "\n";
        cout << a5.account << "\t" << a5.department << "\t" << a5.name << "\n";
        cout << a6.account << "\t" << a6.department << "\t" << a6.name << "\n";
    }; // Show Information of all 6 Employess
    void DisplayDalilyWork();
};

class Developer : public Employess { // This class inherits from Employess 
private:
    string projectName = "NewGame";
public:
    void ShowInformation();
    virtual void DisplayDalilyWork() { // Implement method for Developer.
        cout << "Coding in project: " + projectName;
    };
};

class Manager : public Employess { // This class inherits from Employess 
private:
    string CustomerName = "Mr.Ping";
public:
    void ShowInformation();
    virtual void DisplayDalilyWork() { // Implement method for Manager.
        cout << "Working with customer: " + CustomerName;
    };
};






int main()
{
    Employess Mot;
    Developer Hai;
    Manager Ba;
    Mot.ShowInformation(); // Show Information of all 6 Employess
    Hai.DisplayDalilyWork(); // Display Dalily Work of Developer
    Ba.DisplayDalilyWork(); // Display Dalily Work of Manager
    

    return 0;
}