#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    int marks;

public:
    Student(string name = "", int rollNumber = 0, int marks = 0) {
        setName(name);
        setRollNumber(rollNumber);
        setMarks(marks);
    }

    void setName(string name) {
        this->name = name;
    }

    void setRollNumber(int rollNumber) {
        if (rollNumber <= 0) {
            cout << "Roll No must be greater than zero" << endl;
            return;
        }
        this->rollNumber = rollNumber;
    }

    void setMarks(int marks) {
        if (marks < 0 || marks > 100) {
            cout << "Marks should be between 0 - 100 range" << endl;
            return;
        }
        this->marks = marks;
    }

    string getName() const { 
        return name; 
    }
    
    int getRollNumber() const { 
        return rollNumber; 
    }
    
    int getMarks() const { 
        return marks; 
    }

    char calculateGrade() const {
        if (marks >= 90) return 'A';
        else if (marks >= 75) return 'B';
        else if (marks >= 60) return 'C';
        else if (marks >= 40) return 'D';
        else return 'F';
    }

    void displayDetails() const {
        if(marks < 100.0f && marks >= 0){
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        }else{
            cout << "Marks should be in range of 0 - 100 for student -> " << name << endl;
        }
    }
};

int main() {
    Student student1("A", 101, 95);
    Student student2("B", 102, 82);
    Student student3("C", 103, 45);
    Student student4("D", -1, 110);  

    student1.displayDetails();
    student2.displayDetails();
    student3.displayDetails();
    student4.displayDetails();

    return 0;
}
