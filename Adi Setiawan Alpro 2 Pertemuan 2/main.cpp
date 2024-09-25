#include <iostream>

using namespace std;

int main()
{
    //Deklrasi Variabel
    string nama;
    string NIM;
    int usia;

    // Input dari User atau Pengguna
    cout << "Masukan nama anda: ";
    getline(cin, nama);

    cout << "Masukan NIM anda: ";
    getline(cin, NIM);

    cout << "Masukan Usia anda: ";
    cin >> usia;

    //Output
    cout << "/----Output dari sesuai Input----" << endl;
    cout << "Nama: " << nama << endl;
    cout << "NIM: " << NIM << endl;
    cout << "Usia: " << usia << endl;
}
