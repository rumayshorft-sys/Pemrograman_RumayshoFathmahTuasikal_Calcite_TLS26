# Pemrograman Dasar TLS 2026 - Luminous Quest

Repositori ini berisi pengerjaan Tugas Pemrograman Dasar TLS 2026 (Fase 1 dan Fase 2) untuk menyelesaikan dua problem utama, yaitu **The Last Astronaut** dan **Alien-In-The-Middle**.

---

### 👤 Data Diri

* **Nama:** Rumaysho Fathmah Tuasikal
* **Kelompok:** Calcite
* **Tugas:** Luminous Quest (Fase 1 & Fase 2)

---

### 📁 Isi Repositori & Penjelasan Problem

* **`Fase1_Logika.pdf`**  
  Dokumen berisi penjelasan logika pengerjaan, flowchart untuk Problem 1, dan pseudocode untuk Problem 2.

* **`problem1.cpp` (Problem 1: The Last Astronaut)**  
  Program C++ untuk memodelkan proses eliminasi astronot dalam lingkaran secara dinamis (Josephus Problem). Program akan terus memutar hitungan K dan mengeliminasi astronot satu per satu. Setiap ada yang keluar, nilai K disesuaikan secara otomatis: jika nomor tereliminasi genap maka K+2, jika ganjil maka K-1, dengan batas minimal K=2. Dibuat menggunakan array manual tanpa library vector atau string bawaan.

* **`problem2.cpp` (Problem 2: Alien-In-The-Middle)**  
  Program C++ untuk enkripsi kata rahasia. Huruf pertama tidak diubah, sedangkan huruf kedua dan seterusnya digeser maju sesuai nilai urutan alfabet dari huruf di sebelah kirinya (A=1, B=2, dst). Jika hasil geseran melewati huruf Z (posisi 26), pergeseran akan memutar kembali ke huruf A. Seluruh fungsi konversi ASCII dan hitung panjang teks diimplementasikan secara manual tanpa library string tambahan.

---

### 🚀 Cara Menjalankan Program

Dapat dijalankan melalui terminal menggunakan compiler C++:

```bash
# Problem 1
g++ problem1.cpp -o problem1
./problem1

# Problem 2
g++ problem2.cpp -o problem2
./problem2
