#include <iostream>
using namespace std;

void hapusAstronot(int astronot[], int &jumlah, int indeksHapus) {
    for (int i = indeksHapus; i < jumlah - 1; i++) {
        astronot[i] = astronot[i + 1];
    }
    jumlah--;
}

int main() {
    int N, K;

    cout << "Masukkan Jumlah Astronot (N): ";
    cin >> N;
    cout << "Masukkan Nilai Hitungan Awal (K): ";
    cin >> K;

    if (N <= 0 || K <= 0) {
        cout << "Input tidak valid." << endl;
        return 0;
    }

    int astronot[1000];
    for (int i = 0; i < N; i++) {
        astronot[i] = i + 1;
    }

    int jumlahAktif = N;
    int indeksPenunjuk = 0;

    cout << "\nUrutan Eliminasi Astronot:" << endl;

    while (jumlahAktif > 1) {
        int posisiEliminasi = (indeksPenunjuk + K - 1) % jumlahAktif;
        int nomorDieliminasi = astronot[posisiEliminasi];

        cout << "Astronot nomor " << nomorDieliminasi << " tereliminasi (Nilai K saat ini: " << K << ")" << endl;

        hapusAstronot(astronot, jumlahAktif, posisiEliminasi);

        if (nomorDieliminasi % 2 == 0) {
            K = K + 2;
        } else {
            K = K - 1;
        }

        if (K < 2) {
            K = 2;
        }

        indeksPenunjuk = posisiEliminasi;
    }

    cout << "\nAstronot Terakhir yang Bertahan: Nomor " << astronot[0] << endl;

    return 0;
}