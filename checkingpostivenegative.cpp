/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int checkingpositivenegative()
{
    int angka;
    cout<<"Check Bilangan Positif Dan Negatif";
    cout<<"Masukan Angka : ";
    cin>>angka;
    if(angka > 0){
        cout<<"Anda Memasukan Bilangan positif";
    }else if(angka == 0){
        cout<<"Anda Memasukan Angka 0";
    } else {
        cout<<"Anda Memasukan Bilangan Negatif";
    }
    return 0;

    return 0;
}
