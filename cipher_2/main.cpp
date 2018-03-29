#include <bits/stdc++.h>
using namespace std;

int main()
{
int choice;
string message;
bool program=false , cipher=false , decipher=false;
cout << "Ahlan ya user ya habibi." <<endl;
cout << "What do you like to do today?" <<endl<<endl;
while(true){
    cout << "1- Cipher a message" <<endl;
    cout << "2- Decipher a message" <<endl;
    cout << "3- End" << endl << endl;
    cout << "Enter your choice:";
    cin >> choice;
    while (choice !=1 && choice !=2 && choice !=3){
        cout << "Enter a correct number:";
        cin >> choice;
    }
    if (choice==1 || choice==2)cipher=true;
    else if (choice==3) break;

        char arr1[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        char arr2[26]={'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a'};
        if (cipher==true) cout << "enter the message you want to cipher:";
        else if (decipher==true) cout << "Enter the message you want to decipher:";
        cin.get();
        getline(cin , message);
        char view[message.length()];
        for(int i=0 ; i <message.length(); ++i){
            for(int j=0 ; j<26 ; ++j){
                if(message[i]==arr1[j])
                    view[i]=arr2[j];
                else if(message[i]==' ')
                    view[i]=' ';
    }}
        for(int i=0 ; i <message.length(); i++)
            cout << view[i];
            cout << endl<<endl;
}
    return 0;
}
