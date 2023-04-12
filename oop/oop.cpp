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

class mataKUliah {
private:
    string kode;
    string namaMK;
    int sks;
public:
    void inputMk() {
        cout << "\n\nMasukkan kode mataKUliah : ";
        cin >> kode;
        cout << "Masukkan nama mataKuliah : ";
        cin >> namaMK;
        cout << "Masukkan SKS : ";
        cin >> sks;
    }

    void tampil() {
        cout << "\Data mataKuliah";
        cout << "\nkode mataKuliah : " << kode;
        cout << "\nNama mataKuliah : " << namaMK;
        cout << "\nsks : " << sks;
    }
};

int main()
{
    Mahasiswa mhs;
    mataKUliah mk;

    mhs.input();
    mhs.printData();

    mk.inputMk();
    mk.tampil();
}

