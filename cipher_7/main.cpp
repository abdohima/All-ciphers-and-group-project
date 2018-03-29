/*
    FCI - Programming 1 - 2018 - Assignment 2
    Program Name :               Morse Code.cpp
    Last Modification Date :     22/02/2018
    Eslam Saleh Mohammed         20170046     G2
    Eslam Mohammed Mahmoud       20170049     G2
    Eslam Ahmed Abd-ElMonem      20160052     G2
    Teaching Assistant :         Ashraf Mohey
    Purpose :                    ............
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    A B C D E
    F G H I J
    K L M N O
    p Q R S T
    U V W X Y
    Z

    .-       -...     -.-.     -..     .
    ..-.     --.      ....     ..     .---
    -.-      .-..      --      -.      ---
    .--.     --.-      .-.     ...     -
    ..-      ...-      .--     -..-    -.--
    --..

    */
    while(true)
    {
        cout<<"\nAhlan ya user ua habibi. "<<endl;
        int Result;
        cout<<"\nWhat do you like to do today?\n\n1-Cipher a message\n2-deCipher a message\n3-End"<<endl;
        cin>>Result;
        if (Result==1)
        {
            string text;
            cout<<"Please Enter the message to Cipher ::"<<endl;
            cin.get();
            getline(cin,text);
            for(int i=0; i<text.length(); i++)
                switch( text[i] )
                {
                case ' ':
                    cout<<"   ";
                    break;
                case 'A':
                    cout<<".-"<<' ';
                    break;
                case 'B':
                    cout<<"-..."<<' ';
                    break;
                case 'C':
                    cout<<"-.-."<<' ';
                    break;
                case 'D':
                    cout<<"-.."<<' ';
                    break;
                case 'E':
                    cout<<"."<<' ';
                    break;
                case 'F':
                    cout<<"..-."<<' ';
                    break;
                case 'G':
                    cout<<"--."<<' ';
                    break;
                case 'H':
                    cout<<"...."<<' ';
                    break;
                case 'I':
                    cout<<".."<<' ';
                    break;
                case 'J':
                    cout<<".---"<<' ';
                    break;
                case 'K':
                    cout<<"-.-"<<' ';
                    break;
                case 'L':
                    cout<<".-.."<<' ';
                    break;
                case 'M':
                    cout<<"--"<<' ';
                    break;
                case 'N':
                    cout<<"-."<<' ';
                    break;
                case 'O':
                    cout<<"---"<<' ';
                    break;
                case 'P':
                    cout<<".--."<<' ';
                    break;
                case 'Q':
                    cout<<"--.-"<<' ';
                    break;
                case 'R':
                    cout<<".-."<<' ';
                    break;
                case 'S':
                    cout<<"..."<<' ';
                    break;
                case 'T':
                    cout<<"-"<<' ';
                    break;
                case 'U':
                    cout<<"..-"<<' ';
                    break;
                case 'V':
                    cout<<"...-"<<' ';
                    break;
                case 'W':
                    cout<<".--"<<' ';
                    break;
                case 'X':
                    cout<<"-..-"<<' ';
                    break;
                case 'Y':
                    cout<<"-.--"<<' ';
                    break;
                case 'Z':
                    cout<<"--.."<<' ';
                    break;
                default :
                    cout<<"\nYou should enter a letter from A-Z only!!\n";
                }
        }
        else if ( Result==2 )
        {
            string Morse,temp;
            cout<<"Please Enter the message to deCipher ::"<<endl;
            cin.get();
            getline(cin,Morse);
            Morse+=' ';
            for(int i=0; i<=Morse.length(); i++)
            {
                if(Morse[i]!=' ')
                {
                    temp+=Morse[i];
                }
                else if(Morse[i]==' ' || i==Morse.length()-1)
                {
                    if ( temp ==".-")
                    {
                        cout<<"A";
                    }
                    else if ( temp =="-...")
                    {
                        cout<<"B";
                    }
                    else if ( temp =="-.-.")
                    {
                        cout<<"C";
                    }
                    else if ( temp =="-..")
                    {
                        cout<<"D";
                    }
                    else if ( temp ==".")
                    {
                        cout<<"E";
                    }
                    else if ( temp =="..-.")
                    {
                        cout<<"F";
                    }
                    else if ( temp =="--.")
                    {
                        cout<<"G";
                    }
                    else if ( temp =="....")
                    {
                        cout<<"H";
                    }
                    else if ( temp =="..")
                    {
                        cout<<"I";
                    }
                    else if ( temp ==".---")
                    {
                        cout<<"J";
                    }
                    else if ( temp =="-.-")
                    {
                        cout<<"K";
                    }
                    else if ( temp ==".-..")
                    {
                        cout<<"L";
                    }
                    else if ( temp =="--")
                    {
                        cout<<"M";
                    }
                    else if ( temp =="-.")
                    {
                        cout<<"N";
                    }
                    else if ( temp =="---")
                    {
                        cout<<"O";
                    }
                    else if ( temp ==".--.")
                    {
                        cout<<"P";
                    }
                    else if ( temp =="--.-")
                    {
                        cout<<"Q";
                    }
                    else if ( temp ==".-.")
                    {
                        cout<<"R";
                    }
                    else if ( temp =="...")
                    {
                        cout<<"S";
                    }
                    else if ( temp =="-")
                    {
                        cout<<"T";
                    }
                    else if ( temp =="..-")
                    {
                        cout<<"U";
                    }
                    else if ( temp =="...-")
                    {
                        cout<<"V";
                    }
                    else if ( temp ==".--")
                    {
                        cout<<"W";
                    }
                    else if ( temp =="-..-")
                    {
                        cout<<"X";
                    }
                    else if ( temp =="-.--")
                    {
                        cout<<"Y";
                    }
                    else if ( temp =="--..")
                    {
                        cout<<"Z";
                    }
                    if(Morse[i]==' ' && Morse[i+1]==' ' && Morse[i+2]==' ')
                    {
                        cout<<' ';
                    }
                    temp.erase(0,5);
                }
            }
        }
        else
        {
            cout<<"\n\n\t\t\tGood Bye !";
            return 0;
        }
    }
    return 0;
}
