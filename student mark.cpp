#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int PRN;
    float marks[5]; // Assuming there are 5 subjects

public:
    // Constructor to initialize student details
    Student(string n, int roll) : name(n), PRN(roll) {}

    // Function to input marks for each subject
    void inputMarks() {
        cout << "Enter marks for 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    // Function to calculate and display the percentage
    void calculatePercentage() {
        float totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i];
        }

        float percentage = (totalMarks / (5 * 100)) * 100;

        cout << "Name: " << name << endl;
        cout << "Roll Number: " << PRN << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    string name;
    int PRN;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter student roll number: ";
    cin >> PRN;

    Student student(name, PRN); // Create a student object
    student.inputMarks(); // Input marks for subjects
    student.calculatePercentage(); // Calculate and display percentage

    return 0;
}
