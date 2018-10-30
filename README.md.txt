praktikum3
Lthn.cpp
Alur Argoritma

Mendeklarasikan Variable int a,max,n sebagai varible input
membaca input dari key board cin >> n
membandikan nilain variable A dengan Variable max jika a>max
Bandingkan kembali kedua variabel sebanyak jumlah n atau bilangan yang di inputkan,,
sampai menemukan hasil a=max maka cetaklah.
print bilangan terbesar dari semua bilangan yang di inputkan.## Lthn.cpp
flowchrt Program flow11

CODE PROGRAM

#include<iostream>
using namespace std;
int main ()
{
    int i = 0;
    int max=0;
    int n,a;
    cout << "masukan jumlah bilagan :" ;
    cin >> n;

    for (i;i<n;i++) {
        cout << "masukan bilangan ke-" << i+1 << ":" ;
        cin >> a;

        if (max<a)
            max = a;

    }
    cout << "bilangan terbesar adalah: " << max << endl;
}
HASIL hasil1

Latihan2.cpp
Alur Argoritma

Mendeklarasikan Variable int A,B,C sebagai varible input
membaca input dari key board cin >> A >> B >> C
membandikan nilain variable A dengan Variable B jika A lebih kecil dari pada B
Bandingkan kembali variabel B dengan variabel C
Jika kondisi true Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu A,B,C
jika kondisi false Bandingkan kembali Variabel A dengan variabel C jika A lebih kecil dari C
Jika kondisi true Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu A,C,B
Jika kondisi false Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu C,A,B
Kemudian jika A lebih kecil dari C 10.Jika kondisi true Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu B,A,C 11.jika kondisi false Bandingkan kembali Variabel B dengan variabel C jika B lebih kecil dari C 12.Jika kondisi true Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu B,C,A 13.Jika kondisi false Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu C,B,A 14.END
** Flowchart Program** flow22

CODE PROGRAM

#include <iostream>

using namespace std;

int main()
{
    int A,B,C;
    cout<<"MASUKAN BILANGAN 1: ";
    cin>> A;
    cout<<"MASUKAN BILANGAN 2: ";
    cin>> B;
    cout<<"MASUKAN BILANGAN 3: ";
    cin>> C;

    if (A<B){
      if (B<C)
            cout<< "Bilangan Terbesar Adalah:" << A << ","<< B <<","<< C << endl;
    else
        if (A<C)
            cout << "Bilangan Terbesar Adalah: " << A << ' '<< C << ' '<< B << endl;
        else cout << " Bilangan Terbesar Adalah: " << C << ' '<< A << ' '<< B << endl;
    }else {
    if (A<C)
        cout << " Bilangan Terbesar Adalah: " << B << ' '<< A << ' ' << C << endl;
    else
        if (B<C)

        cout<< "Bilangan terbesar Adalah: " << B << ' ' << C << ' ' << A << endl;
    else
        cout << " Bilangan Terbesar Adalah: " << C << ' '<< B << ' '<< A << endl;
    }


}
HASIL hasil2

Latihan3.cpp
Alur Argoritma

Mendeklarasikan Variable int A,B,C sebagai varible input
membaca input dari key board cin >> A >> B >> C
membandikan nilain variable A dengan Variable B jika sama,
Bandingkan kembali variabel A dengan variabel C
Jika kondisi true/ ketiga variabel sama Maka cetaklah **SEGITIGA SAMA SISI **
jika false/ jika hanya dua yang sama Maka cetaklah SEGITIGA SAMA KAKI
Dan jika Variavel A Sama dengan variabel C, jika kondisi true* kama cetaklah SEGITIGA SAMA KAKI
jika kondisi false samakan kembali variabel C dengan Variabel B, jika kondisi true cetaklah SEGITIGA SAMA KAKI
jika kondisi false Cetaklah SEGITIGA SEMBARANG 10.END
Flowchart Program flow33

CODE PROGRAM

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