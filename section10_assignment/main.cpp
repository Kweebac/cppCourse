#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter a string: ";
    string userString;
    getline(cin, userString);

    int position {1};
    int position2 {userString.size() + 1};

    for (size_t c {}; c < userString.size(); c++) { // endl
        cout << endl;
        for (size_t c {position - 1}; c < userString.size(); c++) { // spaces
            cout << " ";
        }

        for (int c {}; (c + userString.size() - position) < userString.size(); c++) { // ascending & middle
            cout << userString.at(c);
        }

        for (int c {userString.size() - position2}; c >= 0; c--) { // descending
            cout << userString.at(c);
        }
        ++position;
        --position2;
    }

    return 0;
}
