#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class Student {
public:
    string name;
    int marks;

    Student(string n, int m) {
        name = n;
        marks = m;
    }

    void display() {
        cout << "Name: " << name << " | Marks: " << marks << endl;
    }
};

int main() {
    vector<Student> students;

    students.push_back(Student("Rahul", 85));
    students.push_back(Student("Priya", 92));
    students.push_back(Student("Aman", 78));

    ofstream file("students.txt");

    for (int i = 0; i < students.size(); i++) {
        file << students[i].name << " " << students[i].marks << endl;
    }

    file.close();

    cout << "Student Records\n";
    cout << "----------------\n";

    for (int i = 0; i < students.size(); i++) {
        students[i].display();
    }

    cout << "\nData saved successfully in students.txt";

    return 0;
}
