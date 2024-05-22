#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int n;
    string str = "MEETMEATTHEPARK";
    cout << "The Plaintext is: " << "Meet Me At The Park" << endl;
    cout << "Enter the number of rows: ";
    cin >> n;

    int str_length = str.size();
    int part_size = ceil((double)str_length / n);

    string odd_chars, even_chars;

    for (int i = 0; i < str_length; i++)
    {
        if (i % 2 == 0)
        {
            odd_chars += str[i];
        }
        else
        {
            even_chars += str[i];
        }
    }

    string combined = odd_chars + even_chars;
    for (int i = 0; i < combined.size(); i++)
    {
        if (i != 0 && i % part_size == 0)
        {
            cout << endl;
        }
        cout << combined[i];
    }

    if (combined.size() % part_size != 0)
    {
        cout << endl;
    }

    cout<<"The Ciphertext is:"<<odd_chars<<even_chars;

    return 0;
}
