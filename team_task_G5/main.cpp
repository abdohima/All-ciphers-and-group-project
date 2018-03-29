#include <bits/stdc++.h>
using namespace std;
long double fact(long double num){
for (int i=num-1 ; i>0 ; --i)
    num*=i;
return num;
}
int main()
{
int x;
long double result=1;
cout << "Enter The value of X: ";
cin >> x;
for (int i=1 ; i<=100 ; ++i){
    result+=pow(x,i)/fact(i);
    cout << setw(7) << result << " | ";
    if(i%10==0) cout << endl;
}
cout << "\nUsing Function= " << result<< endl;
cout << "Using c_math= " << exp(x) << endl;

    return 0;
}
