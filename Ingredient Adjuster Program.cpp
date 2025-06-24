// Ingredient Adjuster Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    float sugar = 1.5;
    float butter = 1;
    float flour = 2.75;
    float ingread;
    float NumCookies;

    cout << "How many cookies do you want to make?" << endl;
    cin >> NumCookies;

    ingread = NumCookies / 48;

    sugar *= ingread;
    butter *= ingread;
    flour *= ingread;

    cout << "For " << NumCookies << " cookies you will need " << endl;
    cout << sugar << " cups of sugar" << endl;
    cout << butter << " cups of butter" << endl;
    cout << flour << " cups of flour" << endl;

    

}

