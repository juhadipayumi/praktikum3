#include<iostream>
using namespace std;

int main()
{
    int A,B,C;

    cout<<"BILANGAN 1: ";
    cin>> A;
    cout<<"BILANGAN 2: ";
    cin>> B;
    cout<<"BILANGAN 3: ";
    cin>> C;
    if (A==B)
    {
        if (A==C)
            cout << "HASILNYA ADALAH " << "SEGITIGA SAMA SISI";
        else
            cout << "HASILNYA ADALAH " << "SEGITIGA SAMA KAKI";
    }else{
    if (A==C)
        cout << "HASILNYA ADALAH " << "SEGITIGA SAMA KAKI";
    else
    {
        if (C==B)
            cout << "HASILNYA ADALAH " << "SEGITIGA SAMA KAKI";
        else
            cout << "HASILNYA ADALAH " << "SEGITIGA SEMBARANG";
    }
    }
}
