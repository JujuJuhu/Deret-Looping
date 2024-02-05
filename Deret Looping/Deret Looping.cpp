// Program deret menggunakan Looping 1 2 4 7 11

#include <iostream>

int main() {
    // Mendeklarasikan variabel
    int n = 5; // Jumlah elemen deret
    int nilai = 1; // Nilai awal deret
    int selisih = 1; // Selisih antar elemen

    // Menampilkan deret menggunakan loop
    for (int i = 0; i < n; ++i) {
        std::cout << nilai << " ";

        // Menghitung nilai berikutnya
        nilai += selisih;

        // Menambahkan selisih dengan setiap iterasi
        selisih++;
    }

    std::cout << std::endl;

    return 0;
}
