#include <iostream>
using namespace std;

int hitungPanjang(const char teks[]) {
    int panjang = 0;
    while (teks[panjang] != '\0') {
        panjang++;
    }
    return panjang;
}

char keUpper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

void enkripsiAlien(const char pesanAsli[], char pesanSandi[]) {
    int panjang = hitungPanjang(pesanAsli);
    if (panjang == 0) {
        pesanSandi[0] = '\0';
        return;
    }

    pesanSandi[0] = keUpper(pesanAsli[0]);

    for (int i = 1; i < panjang; i++) {
        char prevChar = keUpper(pesanAsli[i - 1]);
        char currChar = keUpper(pesanAsli[i]);

        int nilaiSebelumsnya = prevChar - 'A' + 1;
        int nilaiSaatIni = currChar - 'A';

        int posisiBaru = (nilaiSaatIni + nilaiSebelumsnya) % 26;
        pesanSandi[i] = (char)('A' + posisiBaru);
    }
    
    pesanSandi[panjang] = '\0';
}

int main() {
    char pesanAsli[100];
    char pesanSandi[100];

    cout << "Masukkan Pesan Asli: ";
    cin >> pesanAsli;

    enkripsiAlien(pesanAsli, pesanSandi);

    cout << "Pesan Sandi Alien: " << pesanSandi << endl;

    return 0;
}