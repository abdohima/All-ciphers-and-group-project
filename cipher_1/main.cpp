#include <iostream>
#include <string>

using namespace std;

void encryptCaesar(string text);
void decryptCaesar(string text);


int main()
{
    int z;
    cout<<"Press 1 to encrypt or 2 to decrypt a message : ";
    cin>>z;
    if(z==1){
    string text;
    encryptCaesar(text);
}
if(z==2){
    string ciphered_text;
    decryptCaesar(ciphered_text);
}
}

void encryptCaesar(string text){
    string result;
    cout<<"Enter text to be encrypted : ";
    cin.ignore();

    getline(cin,text);
    int n;
    cout<<"Enter number of shifts : ";
    cin>>n;

    for(int i=0; i<text.length(); ++i){
        int x;

        x=int((tolower(text[i])-'a'));
        if(isupper(text[i])){
            result+=(char) (((x+n)%26)+'A');
        }
        else if(islower(text[i])){
            result+=(char) (((x+n)%26)+'a');
        }
        if(text[i]==' '){
            result+=text[i];
        }
    }
    cout<<"The encrypted message is : "<<result<<endl;

}
void decryptCaesar(string ciphered_text){
    string result;
    cout<<"Enter text to be decrypted : ";
    cin.ignore();
    getline(cin,ciphered_text);
    int n,x;
    cout<<"Enter number of shifts : ";
    cin>>n;
    for(int i=0; i<ciphered_text.length(); ++i){

        x=int((tolower(ciphered_text[i])-'a'));
        if(isupper(ciphered_text[i])){
            result+=(char) (((x-n)%26)+'A');
        }
        else if(islower(ciphered_text[i])){
            result+=(char) (((x-n)%26)+'a');
        }
        if(ciphered_text[i]==' '){
            result+=ciphered_text[i];
}}

cout<<"Decrypted message is : "<<result<<endl;
}
