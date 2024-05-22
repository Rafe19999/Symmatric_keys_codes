#include<bits/stdc++.h>
using namespace std;



int main()
{
    int key1=7,key2=2;
    string msg = "HELLO";
    cout<< "Plaintext: "<<msg<<endl;
    string cipher = "";
    for (int i = 0; i < msg.length(); i++)
	{
		if(msg[i]!=' ')

			cipher = cipher +
						(char) ((((key1 * (msg[i]-'A') ) + key2) % 26) + 'A');
		else

			cipher += msg[i];
	}

    cout << "Encrypted Message is : " << cipher<<endl;

    string msg2 = "";
    int key1_inv = 0;
	int flag = 0;

	for (int i = 0; i < 26; i++)
	{
		flag = (key1 * i) % 26;


		if (flag == 1)
		{
			key1_inv = i;
		}
	}
	for (int i = 0; i < cipher.length(); i++)
	{
		if(cipher[i]!=' ')

			msg2 = msg2 +
					(char) (((key1_inv * ((cipher[i]+'A' - key2)) % 26)) + 'A');
		else

			msg2 += cipher[i];


	}
	cout << "Decrypted Message is: " << msg2<<endl;
}



































