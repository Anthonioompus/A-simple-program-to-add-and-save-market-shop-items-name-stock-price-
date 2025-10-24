#include <iostream>
using namespace std;

int main() {
    int jumlah;
    cout << "Masukkan jumlah barang warung: ";
    cin >> jumlah;
    cin.ignore(); 

    string barang[jumlah][3]; 

    for (int i = 0; i < jumlah; i++) {
        cout << "\nBarang ke-" << i + 1 << endl;
        cout << "Nama Barang : ";
        getline(cin, barang[i][0]);
        cout << "Stok        : ";
        getline(cin, barang[i][1]);
        cout << "Harga       : ";
        getline(cin, barang[i][2]);
    }

    cout << endl;
    cout << "Nama Barang          Stok     Harga" << endl;
    cout << "----------------------------------------" << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << barang[i][0];
        int panjang = barang[i][0].length();
        for (int j = panjang; j < 20; j++) cout << " "; 

        cout << barang[i][1];
        int p2 = barang[i][1].length();
        for (int j = p2; j < 9; j++) cout << " "; 

        cout << barang[i][2] << endl;
    }

    return 0;
}
