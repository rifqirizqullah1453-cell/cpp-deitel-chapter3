// fig03_02.cpp
// Solving the class-average problem using sentinel-controlled iteration.
// The number of students is unknown; the user types -1 (the sentinel) to stop.
#include <iomanip> // parameterized stream manipulators
#include <iostream>
using namespace std;

int main() {
    // initialization phase
    double total{0.0}; // initialize sum of grades (double keeps decimals later)
    int gradeCounter{0}; // initialize # of grades entered so far

    // processing phase
    // prompt for input and read first grade from user (priming read)
    cout << "Enter grade or -1 to quit: ";
    int grade;
    cin >> grade;

    // loop until the sentinel value -1 is read (or input breaks)
    while (cin && grade != -1) {
        total += grade; // add grade to total
        ++gradeCounter; // increment number of grades

        // prompt for input and read next grade from user
        cout << "Enter grade or -1 to quit: ";
        cin >> grade;
    }

    // non-numeric input (e.g. "abc" or "90,") is an error, not a clean stop
    if (!cin && !cin.eof()) {
        cerr << "\nInvalid input, expected an integer.\n";
        return 1;
    }

    // termination phase
    // if user entered at least one grade
    if (gradeCounter != 0) { // avoid division by zero
        // calculate average of grades
        double average{total / gradeCounter};

        // display total and average (with two digits of precision)
        cout << fixed << setprecision(2);
        cout << "\nTotal of the " << gradeCounter << " grades entered is " << total << "\n";
        cout << "Class average is " << average << "\n";
    }
    else { // no grades were entered, so output appropriate message
        cout << "\nNo grades were entered\n";
    }
}
