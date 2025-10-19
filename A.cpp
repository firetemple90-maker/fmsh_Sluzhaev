#include <iostream>
#include <string>
using namespace std;
string encryptCaesar(const string& text, int key) {
    string result = text;
    for (size_t i = 0; i < result.length(); ++i) {
        if (isalpha(result[i])) {
            char base = islower(result[i]) ? 'a' : 'A';
            result[i] = (result[i] - base + key) % 26 + base;
        }
    }
    return result;
}
string decryptCaesar(const string& text, int key) {
    return encryptCaesar(text, 26 - key);
}

int main() {
    setlocale(LC_ALL, "");
    string inputText;
    int key;
    getline(cin, inputText);
    cin >> key;
    cin.ignore();
    string encrypted = encryptCaesar(inputText, key);
    string decrypted = decryptCaesar(encrypted, key);
    cout << inputText << endl;
    cout << encrypted << endl;
    cout << decrypted << endl;
    return 0;
}