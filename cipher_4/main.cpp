#include <iostream>
#include <bitset>
#include <cstdlib>

using namespace std;
void encryptBaconian(string msg);
void decryptBaconian(string msg);
int main()
{    int z;
    cout<<"Enter 1 to encrypt or 2 to decrypt : ";
    cin>>z;
    if(z==1){

    string msg;
    encryptBaconian(msg);

}
else if(z==2){
    string msg;
    decryptBaconian(msg);
}
}

void encryptBaconian(string msg)
{    cin.ignore();
cout<<"Enter message to be encrypted: ";
getline(cin,msg);
	string ans;
	for (int i = 0; i < (int)msg.size(); ++i)
	{
		if (isalpha(msg[i]))
		{
			string binaryEncryption;
			int c = tolower(msg[i]) - 'a';
			while (c > 0)
			{
				if (c%2 == 0)
					binaryEncryption += 'a';
				else
					binaryEncryption += 'b';
				c /= 2;
			}
			for (int i = 0; i < 5 - (int)binaryEncryption.size(); ++i)
				ans += 'a';
			for (int i = (int)binaryEncryption.size() - 1; i >= 0; --i)
			{
				ans += binaryEncryption[i];
			}

		}
		else
			ans += msg[i];
	}
	cout << "Encrypted message is: " << ans << endl;
}

void decryptBaconian(string msg)
{
    cin.ignore();
    cout<<"Enter message to be decrypted: ";
    getline(cin,msg);
    string ans;
    for (int i = 0; i < msg.size(); i += 5)
    {
        int letter = 0;
        if (isalpha(msg[i])) {
            for (int j = i + 4; j >= i; --j) {
                if (msg[j] == 'b') {
                    int product = 1;
                    for (int k = 0; k < (i + 4) - j; ++k) {
                        product *= 2;
                    }
                    letter += product;
                }
            }
            ans += (char) (letter + 'a');
        }
        else {
            ans += msg[i];
            i -= 4;
        }
    }
    cout << "The decrypted message is: " << ans << endl;
}
