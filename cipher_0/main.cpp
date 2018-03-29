#include <iostream>

using namespace std;

void affineCipher(string msg);
void affineDecipher(string msg);


int main()
{
    int l;
    cout<<"Enter 1 to encrypt or 2 to decrypt : ";
    cin>>l;
    if(l==1){
string msg;
cout<<"Enter message to be encrypted : ";
cin.ignore();
getline(cin,msg);
affineCipher(msg);
    }
    else{
        string msg;
        cout<<"Enter message to be decrypted : ";
        cin.ignore();
        getline(cin,msg);
        affineDecipher(msg);
    }


}
void affineCipher(string msg)
{
	string ans;
	int key;
	cout << "a: ";
    cin >> key;
    cout << "b: ";
    int b;
    cin >> b;
	for (int i = 0; i < (int)msg.size(); ++i)
	{
		if (isalpha(msg[i])) {
			char c = ((tolower(msg[i]) - 'a')*key+b)%26;
			if (isupper(msg[i]))
				ans += (char)(c + 'A');
			else
				ans += (char)(c + 'a');
		}
		else
			ans += msg[i];
	}
	cout << "Encrypted message is: " << ans << endl;
}

void affineDecipher(string msg){
    string result;
    int c;
    cout<<"c : ";
    cin>>c;
    int b;
    cout<<"b : ";
    cin>>b;
    for(int i=0; i<msg.length(); ++i){
       int y=int(tolower(msg[i])-'a');
      int z=c*(y-b);
      if(z>0){
        z=z%26;
      }
    while(z<0){
        z=z+26;
    }
    if(isupper(msg[i])){
        result+=(char) (z+'A');
        }

    if(islower(msg[i])){
        result+=(char) (z+'A');
    }
    else if(msg[i]==' '){
        result=result+' ';
    }
    }
    cout<<"Decrypted message is : "<<result<<endl;

}
