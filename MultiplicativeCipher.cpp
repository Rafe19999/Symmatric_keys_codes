#include <iostream>
#include <vector>
using namespace std;

vector<char> v;

void encrypt(string s, int key) {
    int s_size = s.size();
    for (int i = 0; i < s_size; i++) {
        int c = s[i] - 97;
        if (c < 0) {
            continue;
        }
        int a = ((c * key) % 26) + 97;
        v.push_back(a);
        char w = a;
        cout << w;
    }
}

void decrypt(int key) {
    int v_size = v.size();
    int inv_key = 0;

    for (int i = 0; i < 26; i++) {
        if ((key * i) % 26 == 1) {
            inv_key = i;
            break;
        }
    }

    cout<<inv_key;

    for (int i = 0; i < v_size; i++) {
        int c = v[i] - 97;
        int a = ((c * inv_key) % 26) + 97;

        char w = a;
        cout << w;

    }
}

int main() {
    string s = "efg";
    int key = 7;

    cout << "Original: " << s << endl;

    cout << "Encrypted: ";
    encrypt(s, key);
    cout << endl;

    cout << "Decrypted: ";
    decrypt(key);
    cout << endl;

    return 0;
}

