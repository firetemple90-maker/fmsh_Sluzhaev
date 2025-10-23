#include <iostream>
using namespace std;
string xor_operation(string inp_string)
{
    char encryption_key = 'A';
    string out_string = "";
    int i = 0;
    while(i < inp_string.length())
    {
        out_string += inp_string[i] ^ encryption_key;
        i++;
    }
    return out_string;
}
int main()
{
    string inp_string;
    getline(cin, inp_string);
    cout << inp_string << endl;
    string encrypted_string = xor_operation(inp_string);
    cout << encrypted_string << endl;
    string decrypted_string = xor_operation(encrypted_string);
    cout << decrypted_string << endl;
    return 0;
}