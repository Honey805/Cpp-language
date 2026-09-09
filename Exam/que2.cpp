#include <iostream>
using namespace std;

class employee
{
private:
    string name;
    int salary;
    string designation;

public:
    void setname(string n)
    {
        name = n;
    }

    void setsalary(int s)
    {
        salary = s;
    }

    void setdesignation(string d)
    {
        designation = d;
    }

    string getname()
    {
        return name;
    }

    int getsalary()
    {
        return salary;
    }

    string getdesignation()
    {
        return designation;
    }
};

int main()
{
    employee e;

    string name, designation;
    int salary;

    cout << "enter name: ";
    cin >> name;

    cout << "enter salary: ";
    cin >> salary;

    cout << "enter designation: ";
    cin >> designation;

    e.setname(name);
    e.setsalary(salary);
    e.setdesignation(designation);

    cout << "\nemployee details" << endl;
    cout << "name: " << e.getname() << endl;
    cout << "salary: " << e.getsalary() << endl;
    cout << "designation: " << e.getdesignation() << endl;
}