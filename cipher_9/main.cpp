
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string decryptRailfence(string text,int key);
string encryptRailFence(string text, int key);
int main()
{
    cout<<"Enter 1 to cipher or 2 to decipher : "<<endl;
    int w;
    cin>>w;
    if(w==1){
    cout<<"how many keys : "<<endl;
    int key;
    cin>>key;
    string text;
    cout<<"Enter text to be encrypted : "<<endl;

    cin.ignore();
    getline(cin,text);


 cout<<"The encrypted message is : "<<encryptRailFence(text,key);
    }
    if(w==2){
            string text;
    int key;
    cout<<"Enter number of keys : "<<endl;
    cin>>key;
    cin.ignore();
    cout<<"Enter ciphered text to be decrypted : "<<endl;
    getline(cin,text);

    cout<<"Decrypted text is : "<<decryptRailfence(text,key);


    }
}

string encryptRailFence(string text,int key){
    char isuck[key][text.length()+1];
    int row=0;
    int column=0;
    for(int i=0; i<key; ++i){
        for(int k=0; k<text.length()+1; k++){

            isuck[i][k]='-';
        }
    }
    bool zigzag=false;

    for(int i=0; i<text.length()+1; ++i){

        if (row==0 || row==key-1){
            zigzag=!zigzag;
        }
        column++;
        isuck[row][column]=text[i];


    if(zigzag){
        row++;

    }
    else{
        row--;
    }
}
 string ciphered_text;
for(int i=0; i<key; ++i){
    for(int k=0; k<text.length()+1; ++k){
            cout<<isuck[i][k];
        if(isuck[i][k]!='-'){
                ciphered_text.push_back(isuck[i][k]);

        }

    }
    cout<<endl;
}
return ciphered_text;





}
string decryptRailfence(string text, int key){
    char a[key][text.length()];

    bool flow=false;
    int row=0,column=0;

    for(int i=0; i<key; ++i){
        for(int j=0; j<text.length(); ++j){
            a[i][j]='/n';
        }
    }
    for(int i=0; i<text.length(); ++i){
            if(row==0){
                flow=true;
            }
            else if(row==key-1){
                flow=false;
            }
            a[row][column++]='*';
            if(flow){
                row++;
            }
            else{
                row--;
            }
    }
    int x=0;
    for(int i=0; i<key; ++i){
        for(int j=0; j<text.length(); ++j){

            if(a[i][j]=='*' && x<text.length()){
                a[i][j]=text[x++];
            }
        }
    }
    string plain_text;
    row=0; column=0;
    for(int i=0; i<text.length(); ++i){
            if(row==0){
                flow=true;
            }
            else if(row==key-1){
                flow=false;
            }

     if(a[row][column]!='*'){
        plain_text.push_back(a[row][column++]);
     }
     if(flow){
        row++;
     }
     else{
        row--;
     }

    }
    return plain_text;
    }

