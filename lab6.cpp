//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab6.cpp
/// @brief Lab 6
///
/// @author Ryan Ulep [rulep001@ucr.edu]
/// @date May 5, 2015
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int grade;
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    int F = 0;

    // Get grades
    cout << "Enter one or more grades, or -1 to stop:" << endl;

    // Launch loop
    while (true) {
        cin >> grade;
        if (grade == -1) {
            break;
        }
        // Tally letter grades
        if (grade >= 90) {
            ++A;
        }
        else if (grade >= 80) {
            ++B;
        }
        else if (grade >= 70) {
            ++C;
        }
        else if (grade >= 60) {
            ++D;
        }
        else if (grade >= 0) {
            ++F;
        }
    }

    // Results
    cout << endl << "The grades breakdown is:" << endl;
    cout << "As: " << A << endl;
    cout << "Bs: " << B << endl;
    cout << "Cs: " << C << endl;
    cout << "Ds: " << D << endl;
    cout << "Fs: " << F << endl;

    return 0;
}
