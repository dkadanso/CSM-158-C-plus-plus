#include <iostream>

using namespace std;

int main()
{
    double score;
    int NumStudents;
    char grade0 = 'A';
    char grade1 = 'B';
    char grade2 = 'C';
    char grade3 = 'D';
    char grade4 = 'F';
    char grade;

    cout << "Enter number of Students" << endl;
    cin >> NumStudents;

    for (int i = 0; i <= NumStudents-1; ++i)
    {
        cout << "Enter score for student " << i + 1 << ":" << endl;
        cin >> score;

        if (score >= 70)
            grade = grade0;
        else if (score >= 60)
            grade = grade1;
        else if (score >= 50)
            grade = grade2;
        else if (score >= 40)
            grade = grade3;
        else
            grade = grade4;

        cout << "Grade for student " << i + 1 << " is: " << grade << endl;
    }

    return 0;
}
