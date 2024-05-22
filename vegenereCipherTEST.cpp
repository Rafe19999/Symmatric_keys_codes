#include<bits/stdc++.h>
using namespace std;

string encryptVigenere(string plaintext, string key) {
    string ciphertext = "";
    int keyLength = key.length();
    for (int i = 0, j = 0; i < plaintext.length(); ++i) {
        char plainChar = plaintext[i];
        if (isalpha(plainChar)) {
            char keyChar = key[j % keyLength];
            char encryptedChar = ((toupper(plainChar) + toupper(keyChar) - 2 * 'A') % 26) + 'A';
            ciphertext += encryptedChar;
            j++;
        } else {
            ciphertext += plainChar; // Preserve non-alphabetic characters
        }
    }
    return ciphertext;
}

string decryptVigenere(string ciphertext, string key) {
    string decryptedText = "";
    int keyLength = key.length();
    for (int i = 0, j = 0; i < ciphertext.length(); ++i) {
        char cipherChar = ciphertext[i];
        if (isalpha(cipherChar)) {
            char keyChar = key[j % keyLength];
            char decryptedChar = ((toupper(cipherChar) - toupper(keyChar) + 26) % 26) + 'A';
            decryptedText += decryptedChar;
            j++;
        } else {
            decryptedText += cipherChar; // Preserve non-alphabetic characters
        }
    }
    return decryptedText;
}

int main()
{
    string key = "PASCAL";
    string plaintext = "MEET ME IN THE PARK";

    string ciphertext = encryptVigenere(plaintext, key);
    string decryptedText = decryptVigenere(ciphertext, key);

    cout << "Plaintext: " << plaintext << endl;
    cout << "Key: " << key << endl;
    cout << "Ciphertext: " << ciphertext << endl;
    cout << "Decrypted text: " << decryptedText << endl;

    return 0;
}
