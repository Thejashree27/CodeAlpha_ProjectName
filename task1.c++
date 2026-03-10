#include <iostream>
using namespace std;

int main()
{
    int n;                     // number of courses
    float grade, credit;      // grade and credit hours
    float totalCredits = 0;   
    float totalGradePoints = 0;

    cout << "Enter number of courses: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cout << "\nCourse " << i << endl;

        cout << "Enter grade point: ";
        cin >> grade;

        cout << "Enter credit hours: ";
        cin >> credit;

        totalCredits = totalCredits + credit;
        totalGradePoints = totalGradePoints + (grade * credit);
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\nTotal Credits = " << totalCredits << endl;
    cout << "Total Grade Points = " << totalGradePoints << endl;
    cout << "Final CGPA = " << cgpa << endl;

    return 0;
}