#include <bits/stdc++.h>

using namespace std;

int main()
{
int choice;
bool cipher=false , decipher=false;
string key ,message,message2;
char full[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
cout << "Ahlan ya user ya habibi."<<endl;
cout << "What do you like to do today?"<<endl;
while(true){
bool cipher=false , decipher=false;
cout << "1- Cipher a message"<<endl;
cout << "2- Decipher a message"<<endl;
cout << "3- End"<<endl<<endl;
cout << "Enter your choice:";
cin >> choice ;
while(choice !=1 && choice !=2 && choice!=3){
    cout << "Enter a correct number: ";
    cin >> choice;
}
    if(choice==1)cipher=true;
    else if (choice==2)decipher=true;
    else if (choice==3) break;

cout << "Enter the key: ";
cin >> key;
vector<char>view;
for(int i=0 ; i<5 ;i++)
        view.push_back(key[i]);
for(int i =0; i<26 ;i++){
    if(full[i]!=key[0] && full[i]!=key[1] && full[i]!=key[2] && full[i]!=key[3] && full[i]!=key[4])
    view.push_back(full[i]);
}
if (cipher==true){
cout << "Enter the message to cipher: ";
cin.get();
getline(cin,message);
char cipher[message.length()];
for(int i=0 ; i<message.length();i++){
        for (int j=0 ; j<26 ; j++){
                if(message[i]==full[j])
                    cipher[i]=view[j];
                else if (message[i]==' ')
                    cipher[i]=' ';
}}
for (int i=0 ; i<message.length() ; i++)
cout << cipher[i];
cout << endl << endl;
}
else if(decipher==true){
cout << "Enter the message to decipher: ";
cin.get();
getline(cin,message2);
char text[message2.length()];
for(int i=0 ; i<message2.length() ; i++){
    for (int j=0 ; j<26; j++){
            if (message2[i]==view[j])
            text[i]=full[j];
            else if (message2[i]==' ')
            text[i]=' ';
}}
for (int i=0 ; i<message2.length() ; i++)
    cout << text[i];
}
cout << endl << endl;
}

    return 0;
}

