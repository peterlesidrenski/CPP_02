#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int number_in_faculty;
    double avg_grade;
};

int main() {
    int N;
    cout << "Enter number of students: ";
    cin >> N;

    Student students[N];

    for (int i = 0; i < N; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Faculty number: ";
        cin >> students[i].number_in_faculty;
        cout << "Average grade: ";
        cin >> students[i].avg_grade;

    }
    cout << "\nInformation about all students:\n";
    for (int i = 0; i < N; i++) {
        cout << "Name: " << students[i].name
             << ", Faculty number: " << students[i].number_in_faculty
             << ", Average grade: " << students[i].avg_grade << endl;
    }

    int maxIndex = 0;
    for (int i = 1; i < N; i++) {
        if (students[i].avg_grade > students[maxIndex].avg_grade) {
            maxIndex = i;
        }
    }

    cout << "\nStudent with highest average grade:\n";
    cout << "Name: " << students[maxIndex].name
         << ", Faculty number: " << students[maxIndex].number_in_faculty
         << ", Average grade: " << students[maxIndex].avg_grade << endl;

    return 0;
}
