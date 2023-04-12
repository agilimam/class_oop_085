#include <iostream>
using namespace std;

class Mahasiswa {
private:
    int nim;
    string nama;
    float nilai;
public:
    void input() {
        cout << "Masukkan nim : ";
        cin >> nim;
        cout << "Masukkan nama : ";
        cin >> nama;
        cout << "Masukkan nilai : ";
        cin >> nilai;
    }
    void printData();
};

void Mahasiswa::printData() {
    cout << "\nData Mahasiswa";
    cout << "\nNIM : " << nim;
    cout << "\nNamanya : " << nama;
    cout << "\nnilai : " << nilai;
}
