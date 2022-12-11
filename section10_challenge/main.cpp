#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"}; 
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"}; 
    string encrypted;
    string decrypted;
    
    cout << "Enter a message to encrypt: ";
    string message;
    getline(cin, message);

    for (auto c : message) {
        if (alphabet.find(c) != string::npos) {
            encrypted += key.at(alphabet.find(c));
        }
        else {
            encrypted += c;
        }
    }

    for (auto c : encrypted) {
        if (key.find(c) != string::npos) {
            decrypted += alphabet.at(key.find(c));
        }
        else {
            decrypted += c;
        }
    }

    cout << "Encrypted message: " << encrypted << endl;
    cout << "Decrypted message: " << decrypted << endl;

    return 0;
}