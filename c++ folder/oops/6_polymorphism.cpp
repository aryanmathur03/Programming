
#include <iostream>
using namespace std;

class School {
protected:
    int code;
    string name;
public:
    School(int c = 0, string n = "Unknown") : code(c), name(n) {}
    virtual void showData() {
        cout << "School Code: " << code << ", Name: " << name << endl;
    }
    virtual void editData(int c, string n) {
        cout << "You do not have permission to edit student data.\n";
    }
};

class Student : public School {
public:
    Student(int c, string n) : School(c, n) {}
    void showData() override {
        cout << "[Student] ";
        School::showData();
    }
    // No editData override: inherits base class (cannot edit)
};

class Teacher : public School {
public:
    Teacher(int c, string n) : School(c, n) {}
    void showData() override {
        cout << "[Teacher] ";
        School::showData();
    }
    void editData(int c, string n) override {
        code = c;
        name = n;
        cout << "Teacher edited school data.\n";
    }
};

class Principal : public School {
public:
    Principal(int c, string n) : School(c, n) {}
    void showData() override {
        cout << "[Principal] ";
        School::showData();
    }
};

int main() {
    Student s(101, "ABC School");
    Teacher t(101, "ABC School");
    Principal p(101, "ABC School");

    School *ptr;

    // Student can only view
    ptr = &s;
    ptr->showData();
    ptr->editData(102, "XYZ School"); // Not allowed

    // Teacher can view and edit
    ptr = &t;
    ptr->showData();
    ptr->editData(103, "PQR School");
    ptr->showData();

    // Principal can view and edit
    ptr = &p;
    ptr->showData();
    ptr->editData(104, "LMN. School");
    ptr->showData();


    return 0;
}