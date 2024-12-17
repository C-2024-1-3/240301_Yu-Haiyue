#include <iostream>
using namespace std;

class Student {
public: 
    int number;
    float score;

    Student(int num, float scr) : number(num), score(scr) {}

    static void max(Student* students, int count) {
        int maxNumber = students[0].number;
        float maxScore = students[0].score;

        for (int i = 1; i < count; ++i) {
            if (students[i].score > maxScore) {
                maxScore = students[i].score;
                maxNumber = students[i].number;
            }
        }

        cout << "最高成绩者的学号: " << maxNumber << endl;
    }
};

int main() {
    Student students[5] = {
        Student(12345, 87.0),
        Student(12346, 97.0),
        Student(12347, 93.0),
        Student(12348, 88.0),
        Student(12349, 92.0)
    };

    Student::max(students, 5);

    return 0;
}