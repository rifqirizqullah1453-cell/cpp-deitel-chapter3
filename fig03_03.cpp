#include <iostream>
using namespace std;

int main() {
    int passes{0};
    int failures{0};
    int studentCounter{1};

    while (studentCounter <= 10) {
        cout << "Enter result (1 = pass, 2 = fail): ";
        int result;
        cin >> result;

        if (!cin) { 
            cerr << "\nInvalid input, expected 1 or 2.\n";
            return 1;
        }

        if (result == 1 || result == 2) { 
            if (result == 1) {
                passes = passes + 1;
            }
            else {
                failures = failures + 1;
            }

            studentCounter = studentCounter + 1;
        }
        else { 
            cout << "Invalid result, please enter 1 or 2.\n";
        }
    }

    cout << "\nPassed: " << passes << "\nFailed: " << failures << "\n";

    if (passes > 8) {
        cout << "Bonus to instructor!\n";
    }
}
