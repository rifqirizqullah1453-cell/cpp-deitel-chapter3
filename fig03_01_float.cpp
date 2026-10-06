// Variant of Fig. 3.1: decimal average and input validation.
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int total{0};

    for (int gradeCounter{1}; gradeCounter <= 10; ++gradeCounter) {
        cout << "Enter grade: ";
        int grade;
        if (!(cin >> grade)) { // non-numeric input or EOF
            cerr << "Invalid input, expected an integer.\n";
            return 1;
        }
        total += grade;
    }

    // cast one operand to double so the division keeps the fraction
    double average{static_cast<double>(total) / 10};

    cout << "\nTotal of all 10 grades is " << total << "\n";
    cout << fixed << setprecision(2) << "Class average is " << average << "\n";
}
