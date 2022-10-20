/* 
    Shipping cost calculator
    
    Ask the user for package dimension in inches
    length, width, height - these should be integers
    
    All dimension must be 10 inches or less or we cannot ship it
    
    Base cost $2.50
    If package volume is greater than 100 cubic inches there is a 10% surcharge
    If package volume is greater than 500 cubic inches there is a 25% surcharge

*/

#include <iostream>
using namespace std;

int main() {
    cout << "Enter the length, width and height of your package with spaces inbetween: ";
    int length {}, width {}, height {};
    cin >> length >> width >> height;

    int volume {length * width * height};

    double baseCost {2.50};
    double surcharge25 {1.25};
    double surcharge10 {1.10};

    if (length > 10 || width > 10 || height > 10) {
        cout << "Your package is too large for us to ship." << endl;
    } 
    else {
        if (volume > 500) {
            baseCost *= surcharge25;  
        } 
        else if (volume > 100) {
            baseCost *= surcharge10; 
        } 
        cout << "The volume of your package is " << volume << " cubic inches." << endl;
        cout << "Your package will cost $" << baseCost << endl; 
    }

    return 0;
}