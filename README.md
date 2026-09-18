# Pemrograman Dasar TLS 2026 - Luminous Quest

Repositori ini berisi penyelesaian Tugas Pemrograman Dasar TLS 2026 yang terdiri dari 2 Fase Tantangan untuk menyelesaikan dua kasus problem (*The Last Astronaut* dan *Alien-In-The-Middle*).

---

## 👤 Identitas Peserta

* **Nama Lengkap:** Rumaysho Fathmah Tuasikal
* **Kelompok:** Calcite
* **Tugas:** Luminous Quest (Fase 1 & Fase 2)

---

## 📁 Berkas / Dokumentasi Repositori

1. **`Fase1_Logika.pdf`**  
   Dokumen berisi penjelasan logika lengkap (minimal 2 paragraf per problem), flowchart untuk Problem 1 (*The Last Astronaut*), serta pseudocode untuk Problem 2 (*Alien-In-The-Middle*).

2. **`problem1.cpp`**  
   Program C++ untuk **Problem 1: The Last Astronaut**.  
   * Memodelkan variasi *Josephus Problem* dengan pergerakan melingkar.
   * Mengimplementasikan aturan perubahan nilai hitungan K secara dinamis berdasarkan nomor astronot yang dieliminasi (genap K+2, ganjil K-1, serta batas minimal K=2).
   * Menggunakan implementasi array manual sesuai batasan library standar (`#include <iostream>`).

3. **`problem2.cpp`**  
   Program C++ untuk **Problem 2: Alien-In-The-Middle**.  
   * Memodelkan sistem enkripsi teks secara siklis berulang (A-Z).
   * Menggeser setiap karakter ke-2 hingga terakhir berdasarkan nilai alfabet karakter sebelumnya.
   * Dibuat tanpa *built-in library* string (semua fungsi konversi ASCII dan panjang string diimplementasikan secara manual).

---

## 🚀 Cara Menjalankan Program (C++)

Gunakan compiler C++ (seperti g++) melalui terminal/command prompt:

* **Problem 1:**
  * Kompilasi: `g++ problem1.cpp -o problem1`
  * Jalankan: `./problem1`

* **Problem 2:**
  * Kompilasi: `g++ problem2.cpp -o problem2`
  * Jalankan: `./problem2`
