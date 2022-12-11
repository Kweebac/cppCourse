#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <algorithm>

using std::cout, std::cin, std::endl, std::vector;

char menu() {
    cout << "\n-----------------------------" << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display the mean" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "F - Find a number" << endl;
    cout << "Q - Quit" << endl;
    cout << "-------------------------------" << endl;

    char choice {};
    cout << "\nEnter an option: ";
    cin >> choice;
    choice = toupper(choice);
    return choice;
}

void displayList(vector<double> vec) {
    for (auto v : vec) {
        cout << v << " ";
    }
}

void print(vector<double> vec) {
    if (vec.size() != 0) {
        cout << "[ ";
        displayList(vec);
        cout << "]" << endl;
    }
    else {
        cout << "The vector is empty" << endl;
    }
}

void addNumber(vector<double> &vec) {
    double addNum {};
    bool valueIsNumber {false};

    while (valueIsNumber == false) {
        cout << "Enter a number: ";
        if (cin >> addNum) {
            vec.push_back(addNum);
            cout << addNum << " added." << endl;

            valueIsNumber = true;
        }
        else {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
    }
}

void mean(vector<double> vec) {
    if (vec.size() != 0) {
        double mean {};
        for (auto v : vec) {
            mean += v;
        } 
        cout << mean / vec.size();
    }
    else {
        cout << "The vector is empty" << endl;
    }
}

void smallest(vector<double> vec) {
    if (vec.size() != 0) {
        cout << *std::min_element(vec.begin(), vec.end()) << " is the smallest number" << endl;
    }
    else {
        cout << "The vector is empty" << endl;
    }
}

void largest(vector<double> vec) {
    if (vec.size() != 0) {
        cout << *std::max_element(vec.begin(), vec.end()) << " is the largest number" << endl;
    }
    else {
        cout << "The vector is empty" << endl;
    }
}

void findNumber(vector<double> vec) {
    double findNumber {};

    if (vec.size() != 0) {
        bool valueIsNumber {false};
        double counter {};

        while (valueIsNumber == false) {
            cout << "Enter a number: ";
            cin >> findNumber;
            if (!cin) {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            }
            else {
                for (auto v : vec) {
                    if (v == findNumber) {
                        cout << findNumber << " is in the list" << endl;
                    }
                    else {
                        counter += 1;
                    }
                }
                if (counter == vec.size()) {
                    cout << findNumber << " isn't in the list" << endl;
                }

                valueIsNumber = true;
            }
        }
    }
    else {
        cout << "The vector is empty" << endl;
    }
}

int main() {
    char choice {};
    vector<double> vec {};

    do {
        choice = menu();

        switch(choice) {
            case 'P':
                print(vec);
                break;
            case 'A':
                addNumber(vec);
                break;
            case 'M':
                mean(vec);
                break;
            case 'S':
                smallest(vec);
                break;
            case 'L':
                largest(vec);
                break;
            case 'F':
                findNumber(vec);
                break;
            case 'Q':
                cout << "Loop finished" << endl;
                break;
            default:
                cout << "Invalid letter" << endl;
        }
    } while (choice != 'Q');
    return 0;
}
