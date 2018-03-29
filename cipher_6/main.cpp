// FCI _ Programming 1 _ 2018 _ Assignment 2
// Program Name: Polybius Square Cipher
// Last Modification Date: 28/2/2018
// Author and ID and Group: Atef Magdy Mitwally  _ 20170136 _ G.5

// assume z == 99 & space == 88

#include <bits/stdc++.h>
using namespace std;

int main()
{
string msg,x;
int choice,key;
vector<int> v;

cout << "Ahlan ya user ya habibi" << endl;
cout << "What do you like to do today?" << endl;

while(true){                                        //Introduction
    bool cipher=false , decipher=false;
    cout << "1- Cipher a message"<< endl;
    cout << "2- Decipher a message"<<endl;
    cout << "3- End"<<endl<<endl;
    cout << "Enter your choice : " ;
    cin >> choice;
    while (choice !=1 && choice !=2 && choice !=3){
    cout << "Enter a correct number" << endl;
    cout << "Enter your choice : " ;
    cin >> choice;
    }
    if(choice==1) cipher=true;
    else if(choice==2)decipher=true;                //The choice to cipher or decipher
    else if(choice==3) break;

    cout << "Enter the key you want to cipher :";
    for (int i=0 ; i<5 ; ++i){
        cin >> key;                                     //The key
        v.push_back(key);
    }

    if(cipher == true){
        cout << "Enter the message you want to cipher : ";          //cipher
        cin.get();
        getline(cin , msg );
        int x[msg.length()];
        for ( int i=0 ; i < msg.length(); ++i ){
            if      (msg[i]=='a') x[i]=v[0]*10+v[0];
            else if (msg[i]=='b') x[i]=v[0]*10+v[1];
            else if (msg[i]=='c') x[i]=v[0]*10+v[2];
            else if (msg[i]=='d') x[i]=v[0]*10+v[3];
            else if (msg[i]=='e') x[i]=v[0]*10+v[4];
            else if (msg[i]=='f') x[i]=v[1]*10+v[0];
            else if (msg[i]=='g') x[i]=v[1]*10+v[1];
            else if (msg[i]=='h') x[i]=v[1]*10+v[2];
            else if (msg[i]=='i') x[i]=v[1]*10+v[3];
            else if (msg[i]=='j') x[i]=v[1]*10+v[4];
            else if (msg[i]=='k') x[i]=v[2]*10+v[0];
            else if (msg[i]=='l') x[i]=v[2]*10+v[1];
            else if (msg[i]=='m') x[i]=v[2]*10+v[2];
            else if (msg[i]=='n') x[i]=v[2]*10+v[3];
            else if (msg[i]=='o') x[i]=v[2]*10+v[4];
            else if (msg[i]=='p') x[i]=v[3]*10+v[0];
            else if (msg[i]=='q') x[i]=v[3]*10+v[1];
            else if (msg[i]=='r') x[i]=v[3]*10+v[2];
            else if (msg[i]=='s') x[i]=v[3]*10+v[3];
            else if (msg[i]=='t') x[i]=v[3]*10+v[4];
            else if (msg[i]=='u') x[i]=v[4]*10+v[0];
            else if (msg[i]=='v') x[i]=v[4]*10+v[1];
            else if (msg[i]=='w') x[i]=v[4]*10+v[2];
            else if (msg[i]=='x') x[i]=v[4]*10+v[3];
            else if (msg[i]=='y') x[i]=v[4]*10+v[4];
            else if (msg[i]=='z') x[i]=99;
            else if (msg[i]==' ') x[i]=88;
    }
        cout << endl << "cipher : ";
        for ( int i=0 ; i < msg.length(); ++i )
            cout << x[i];
            cout << endl << endl;
    }

    else if(decipher==true){
        cout << "Enter the message you want to decipher : ";            //decipher
        cin.get();
        getline(cin,x);
        cout << endl << "decipher : ";
        for ( int i=0 ; i < x.length(); i+=2 ){
            if      (x[i]-'0'==v[0] && x[i+1]-'0'==v[0]) cout <<"a";
            else if (x[i]-'0'==v[0] && x[i+1]-'0'==v[1]) cout <<"b";
            else if (x[i]-'0'==v[0] && x[i+1]-'0'==v[2]) cout <<"c";
            else if (x[i]-'0'==v[0] && x[i+1]-'0'==v[3]) cout <<"d";
            else if (x[i]-'0'==v[0] && x[i+1]-'0'==v[4]) cout <<"e";
            else if (x[i]-'0'==v[1] && x[i+1]-'0'==v[0]) cout <<"f";
            else if (x[i]-'0'==v[1] && x[i+1]-'0'==v[1]) cout <<"g";
            else if (x[i]-'0'==v[1] && x[i+1]-'0'==v[2]) cout <<"h";
            else if (x[i]-'0'==v[1] && x[i+1]-'0'==v[3]) cout <<"i";
            else if (x[i]-'0'==v[1] && x[i+1]-'0'==v[4]) cout <<"j";
            else if (x[i]-'0'==v[2] && x[i+1]-'0'==v[0]) cout <<"k";
            else if (x[i]-'0'==v[2] && x[i+1]-'0'==v[1]) cout <<"l";
            else if (x[i]-'0'==v[2] && x[i+1]-'0'==v[2]) cout <<"m";
            else if (x[i]-'0'==v[2] && x[i+1]-'0'==v[3]) cout <<"n";
            else if (x[i]-'0'==v[2] && x[i+1]-'0'==v[4]) cout <<"o";
            else if (x[i]-'0'==v[3] && x[i+1]-'0'==v[0]) cout <<"p";
            else if (x[i]-'0'==v[3] && x[i+1]-'0'==v[1]) cout <<"q";
            else if (x[i]-'0'==v[3] && x[i+1]-'0'==v[2]) cout <<"r";
            else if (x[i]-'0'==v[3] && x[i+1]-'0'==v[3]) cout <<"s";
            else if (x[i]-'0'==v[3] && x[i+1]-'0'==v[4]) cout <<"t";
            else if (x[i]-'0'==v[4] && x[i+1]-'0'==v[0]) cout <<"u";
            else if (x[i]-'0'==v[4] && x[i+1]-'0'==v[1]) cout <<"v";
            else if (x[i]-'0'==v[4] && x[i+1]-'0'==v[2]) cout <<"w";
            else if (x[i]-'0'==v[4] && x[i+1]-'0'==v[3]) cout <<"x";
            else if (x[i]-'0'==v[4] && x[i+1]-'0'==v[4]) cout <<"y";
            else if (x[i]=='9' && x[i+1]=='9') cout <<"z";
            else if (x[i]=='8' && x[i+1]=='8') cout <<" ";
        }
            cout<<endl << endl;
}}
    return 0;
}
