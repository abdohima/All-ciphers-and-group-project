#include <iostream>
#include <string>

using namespace std;

int main()
{
   string result;
   int number;
   int x;
   int c=0;
   int lol;
   cout<<"Please type in a date of 4 digits : ";
   cin>>number;



   if(number<1000 || number>3000){
    cout<<"Invalid number"<<endl;
   }
   else{

    if(number>=1000){
       x=number/1000;

       for(int i=0; i<x; ++i){
        result+='M';
       }
       number%=1000;
    }
    if(number>=100){

        x=number/100;
        if(x==9){
            result=result+"CM";
        }
        else if(x>=5){
            result=result+'D';
            for(int i=0; i<x-5; ++i){
                result=result+'C';
            }
        }
        else if(x==4){
            result=result+"CD";
        }
        else if(x>=1){
            for(int i=0; i<x; ++i){
                result=result+'C';
            }
        }
        number%=100;

    }
    if(number>=10){
        x=number/10;
        if(x==9){
            result=result+"XC";
        }
        else if(x>=5){
            result=result+'L';
            for(int i=0; i<x-5; ++i){
                result=result+'X';
            }
        }
        else if(x==4){
            result=result+"XL";
        }
        else if(x>=1){
            for(int i=0; i<x; ++i){
                result=result+'X';
            }
        }
        number%=10;
    }
    if(number>1){
        x=number;
        if(x==9){
            result=result+"IX";
        }
        else if(x>=5){
            result=result+'V';
            for(int i=0; i<x-5; ++i){
                result=result+'I';
            }
        }
        else if(x==4){
            result=result+"IV";
        }
        else if(x>=1){
                for(int i=0; i<x; ++i){
            result=result+'I';
                }
        }

    }








   }
   cout<<"Date in roman numeral is : "<<result<<endl;



}
