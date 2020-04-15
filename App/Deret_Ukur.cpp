#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

class Hitung 
{
public:
    int rumus(int sukupertama, int sukukedua, int index)
    {
        int kuadrat;
        kuadrat = sukukedua / sukupertama;
        return sukupertama * pow(kuadrat, index - 1);
    }

    void pesan()
    {
        cout << "*******************************************************\n\n";
        cout << "Cara Penggunaan Applikasi\n";
        cout << "massukkan suku pertama:         //masukkan angka suku pertama dari deret geometri\n";
        cout << "massukkan suku kedua:         //masukkan angka suku kedua dari deret geometri\n";
        cout << "suku ke berapa yang mau di tentukkan:         //masukkan angka yang ingin di ketahui jumlah sukunya\n";
        cout << "\n\n*******************************************************\n\n";



    }
    ;
};

int main()
{
    Hitung menghitung;
    int hasil;
    int n;
    int suku[1];
    char i;
 Main:
    menghitung.pesan();
    cout << "massukkan suku pertama: ";
    cin >> suku[0];
    cout << "\n";
    cout << "massukkan suku kedua: ";
    cin >> suku[1];
    cout << "\n";
    cout << "suku ke berapa yang mau di tentukkan: ";
    cout << "\n";
    cin >> n;
    hasil =  menghitung.rumus(suku[0], suku[1], n);
    cout << "Suku ke " << n << " adalah: " << hasil;
    cout << "\n";
    cout << "ingin melakukan penghitungan lagi? (y/n)";
    cin >> i;
    ;
    if (i == 'y')
    {
        goto Main;
        system("cls");
    }
    else if (i == 'n')
    {
        goto end;
    }
end:
    system("pause");
    return 0;
    ;
}
