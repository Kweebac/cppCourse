#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
    vector <int> vec {};
    char choice {};
    bool done {true};
    cout << fixed << setprecision(2);

    do {
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 'p':
            case 'P':
                if (vec.size() != 0) {
                cout << "[ ";
                for (auto i : vec) {
                    cout << i << " ";
                }
                cout << "]";
                }
                else {
                    cout << "[] - the list is empty" << endl;
                }
                break;
            case 'a':
            case 'A': {
                int add_num {};
                cout << "Enter an integer to add: ";
                cin >> add_num;
                vec.push_back(add_num);
                cout << add_num << " added" << endl;
                break; 
            }
            case 'm':
            case 'M': {
                if (vec.size() != 0) {
                double result {};
                for (auto i : vec) {
                    result += i;
                }
                cout << "The mean is " << result / vec.size() << endl;
                }
                else {
                    cout << "Unable to calculate the mean - no data" << endl;
                }
                break;
            }
            case 's':
            case 'S': {
                if (vec.size() != 0) {
                    cout << "The smallest number is " << *min_element(vec.begin(), vec.end()) << endl;
                }
                else {
                    cout << "Unable to determine the smallest number - list is empty" << endl;
                }
                break;
            }
            case 'l':
            case 'L':
                if (vec.size() != 0) {
                    cout << "The largest number is " << *max_element(vec.begin(), vec.end()) << endl;
                }
                else {
                    cout << "Unable to determine the largest number - list is empty" << endl;
                }
                break;
            case 'q':
            case 'Q':
                cout << "Goodbye" << endl;
                done = false;
                break;
            default:
                cout << "Unknown selection, please try again" << endl;
        }
    } while (done == true);
    return 0;   
}