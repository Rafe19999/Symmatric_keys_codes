#include<bits/stdc++.h>
using namespace std;

int main()
{
    string key = "PASCAL";
    string plaintxt = "MEETMEINTHEPARK";
    cout << "Plaintext: MEET ME IN THE PARK" << endl;
    cout << "Key: " << key << endl;

    string cipher = "";
    int keyLength = key.length();
    for (int i = 0, j = 0; i < plaintxt.length(); ++i)
    {
        char plainChar = plaintxt[i];

        char keyChar = key[j % keyLength];
        char encryptedChar = ((toupper(plainChar) + toupper(keyChar) - 2 * 'A') % 26) + 'A';
        cipher += encryptedChar;
        j++;

    }

    cout<< "The encrypted cipherText: "<<cipher<<endl;

    string decryptedText = "";
    int keyLength1 = key.length();
    for (int i = 0, j = 0; i < cipher.length(); ++i)
    {
        char cipherChar = cipher[i];

        char keyChar = key[j % keyLength];
        char decryptedChar = ((toupper(cipherChar) - toupper(keyChar) + 26) % 26) + 'A';
        decryptedText += decryptedChar;
        j++;

    }
    cout<< "The decrypted cipherText: "<<decryptedText;

}




























