#include <iostream>

// Fungsi manual untuk menghapus elemen array pada indeks tertentu
void hapusAstronot(int astronot[], int &jumlah, int indeksHapus) {
    for (int i = indeksHapus; i < jumlah - 1; i++) {
        astronot[i] = astronot[i + 1];
    }
    jumlah--;
}

int main() {
    int N, K;

    std::cout << "Masukkan Jumlah Astronot (N): ";
    std::cin >> N;
    std::cout << "Masukkan Nilai Hitungan Awal (K): ";
    std::cin >> K;

    if (N <= 0 || K <= 0) {
        std::cout << "Input tidak valid." << std::endl;
        return 0;
    }

    // Inisialisasi daftar astronot dari 1 sampai N
    int astronot[1000];
    for (int i = 0; i < N; i++) {
        astronot[i] = i + 1;
    }

    int jumlahAktif = N;
    int indeksPenunjuk = 0;

    std::cout << "\n--- Urutan Eliminasi Astronot ---" << std::endl;

    // Proses eliminasi sampai tersisa 1 astronot
    while (jumlahAktif > 1) {
        // Hitung indeks yang dieliminasi menggunakan modulo manual
        int posisiEliminasi = (indeksPenunjuk + K - 1) % jumlahAktif;
        int nomorDieliminasi = astronot[posisiEliminasi];

        std::cout << "Astronot nomor " << nomorDieliminasi << " tereliminasi (Nilai K saat ini: " << K << ")" << std::endl;

        // Hapus astronot yang tereliminasi dari lingkaran
        hapusAstronot(astronot, jumlahAktif, posisiEliminasi);

        // Aturan perubahan nilai K secara dinamis
        if (nomorDieliminasi % 2 == 0) {
            K = K + 2; // Jika genap, K bertambah 2
        } else {
            K = K - 1; // Jika ganjil, K berkurang 1
        }

        // Batas minimal K adalah 2
        if (K < 2) {
            K = 2;
        }

        // Indeks berikutnya dimulai dari posisi astronot setelah yang dieliminasi
        indeksPenunjuk = posisiEliminasi;
    }

    std::cout << "\n---------------------------------" << std::endl;
    std::cout << "Astronot Terakhir yang Bertahan: Nomor " << astronot[0] << std::endl;

    return 0;
}