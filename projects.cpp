// projects.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
/*Detecting the type of the number*/

int main()
{
    int number1, number2;
    cout << "Please enter 2 numbers:\n";
    cin >> number1 >> number2;
    if (number1 % 2 == 0 && number2 % 2 == 0) {
        cout << "Both numbers are even\n";
    }
    else if (number1 % 2 != 0 && number2 % 2 != 0) {
        cout << "Both numbers are odd.\n";
    }
    else
        cout << "Result is different.\n";


}
