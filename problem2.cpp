#include <iostream>

// Fungsi manual untuk menghitung panjang string (char array)
int hitungPanjang(const char teks[]) {
    int panjang = 0;
    while (teks[panjang] != '\0') {
        panjang++;
    }
    return panjang;
}

// Fungsi manual untuk mengubah huruf kecil ke huruf besar (Uppercase)
char keUpper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

// Fungsi manual untuk enkripsi pesan sandi
void enkripsiAlien(const char pesanAsli[], char pesanSandi[]) {
    int panjang = hitungPanjang(pesanAsli);
    if (panjang == 0) {
        pesanSandi[0] = '\0';
        return;
    }

    // Huruf pertama tidak mengalami perubahan
    pesanSandi[0] = keUpper(pesanAsli[0]);

    // Perulangan untuk huruf ke-2 sampai selesai
    for (int i = 1; i < panjang; i++) {
        char prevChar = keUpper(pesanAsli[i - 1]);
        char currChar = keUpper(pesanAsli[i]);

        // Hitung nilai huruf sebelumnya (A=1, B=2, ..., Z=26)
        int nilaiSebelumsnya = prevChar - 'A' + 1;
        
        // Hitung nilai huruf saat ini (A=0, B=1, ..., Z=25) untuk kemudahan rotasi
        int nilaiSaatIni = currChar - 'A';

        // Hitung posisi baru dengan pergeseran
        int posisiBaru = (nilaiSaatIni + nilaiSebelumsnya) % 26;

        // Konversi kembali ke karakter ASCII uppercase
        pesanSandi[i] = (char)('A' + posisiBaru);
    }
    
    // Karakter penutup string
    pesanSandi[panjang] = '\0';
}

int main() {
    char pesanAsli[100];
    char pesanSandi[100];

    std::cout << "Masukkan Pesan Asli: ";
    std::cin >> pesanAsli;

    enkripsiAlien(pesanAsli, pesanSandi);

    std::cout << "Pesan Sandi Alien: " << pesanSandi << std::endl;

    return 0;
}