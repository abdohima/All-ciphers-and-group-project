#include <bits/stdc++.h>

using namespace std;

int whatToDo();
void XORcipher(char specialChar, string toBeCiphered);
void XORcipher(char specialChar, string cipheredHEX, int x);
void toHex(string cipheredText);

int main(){
    int userChoice;
    char specialChar;
    string toBeCiphered, cipheredText, deCiphered, cipheredTextHex, cipheredHEX;
    userChoice = whatToDo();

    while(true){
        //Ciphering
        if(userChoice == 1){
            while(userChoice == 1){
                cout << "Enter the special character: ";
                cin >> specialChar;
                cout << "\nEnter the text to be ciphered: ";
                cin.ignore();
                getline(cin, toBeCiphered);
                XORcipher(specialChar, toBeCiphered);

                userChoice = whatToDo();
            }
        }

        //Deciphering
        if(userChoice == 2){
            while(userChoice == 2){
                cout << "Enter the special character: ";
                cin >> specialChar;
                cout << "\nEnter HEX number: ";
                cin.ignore();
                getline(cin, cipheredHEX);
                XORcipher(specialChar, cipheredHEX, userChoice);

                userChoice = whatToDo();
            }
        }

        if(userChoice == 3){
            return 0;
        }
    }
}

void XORcipher(char specialChar, string toBeCiphered){

    cout << "Hex before ciphering: ";

    for(size_t i=0; i<toBeCiphered.size(); i++){
        cout << hex << (int) toBeCiphered[i] << " ";
    }

    cout << endl << "Hex after ciphering: ";
    for (size_t i=0; i<toBeCiphered.size(); i++){
        cout << hex << (specialChar ^ toBeCiphered[i]);
        cout << " ";
    }
    cout << endl;
}

void XORcipher(char specialChar, string cipheredHEX, int x){
    vector <long> cipheredHEXarr;
    string character;
    for(size_t i=0; i<cipheredHEX.size(); i++){
        if(cipheredHEX[i] != ' '){
            character = cipheredHEX[i];
            if(cipheredHEX[i+1] != ' ' && i != cipheredHEX.size()-1){
                character += cipheredHEX[i+1];
                cipheredHEXarr.push_back(stol(character, nullptr, 16));
                i++;
            }
            else
                cipheredHEXarr.push_back(stol(character, nullptr, 16));
        }
    }

    for(size_t i=0; i<cipheredHEXarr.size(); i++){
        cout << (char) (specialChar ^ cipheredHEXarr[i]);
    }
    cout << endl;
}

int whatToDo(){
    int whatToDo;
    cout << "What do you want to do?\n";
    cout << "1. \t Cipher \n2.\t Decipher \n3. \t Exit\n";
    cin >> whatToDo;
    return whatToDo;
}

void toHex(string cipheredText){
    cout << "HEX: " << endl;
    for(size_t i=0; i<cipheredText.size(); i++){
        cout << hex <<(int) cipheredText[i] << " ";
    }
    cout << "\n";
}
