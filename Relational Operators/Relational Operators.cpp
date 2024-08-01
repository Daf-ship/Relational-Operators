// Relational Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int A;
    int B;


    cout << "please etner a number" << endl;
    cin >> A;
    cout << "please enter a second number" << endl;
    cin >> B;
    cout << "A=B : " << (A == B) << endl;
    cout << "A!=B : " << (A != B) << endl;
    cout << "A>B : " << (A > B) << endl;
    cout << "A<B : " << (A < B) << endl;
    cout << "A >=B : " << (A >= B) << endl;
    cout << "A<=B : " << (A <= B) << endl;
    /*
    second one is for logical operatores
    */

    bool   D = 1, F = 0;
    cout << "A and B are true operatores " << (D && F) << endl;
    cout << "A or B are True operatore " << (D || F)  << endl;
    cout << "A not +B " << !(D && F) << endl;



    return 0;




    


}



   

