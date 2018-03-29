#include <iostream>

using namespace std;
void encryptROT(string text);

int main()
{

    string text;
    encryptROT(text);

}

void encryptROT(string text){
    string result;
cout<<"Enter text to be encrypted or decrypted : ";
getline(cin,text);

for(int i=0; i<text.length(); ++i){
    int x=int((tolower(text[i]))-'a');
    if(x<=12){
    if(isupper(text[i])){
            result+=(char)(x+13+'A');

    }
    if(islower(text[i])){
        result+=(char)(x+13+'a');
    }
    if(text[i]==' '){
        result+=text[i];
    }
    }
    if(x>12){
             if(isupper(text[i])){
            result+=(char) (x-13+'A');

    }
    if(islower(text[i])){
        result+=(char) (x-13+'a');
    }
    if(text[i]==' '){
        result+=text[i];
    }

    }
}
cout<<"The encrypted message is : "<<result;

}
