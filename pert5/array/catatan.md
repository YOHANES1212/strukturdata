
# Array dalam Pemrograman

**Array** adalah kumpulan item dengan tipe variabel yang sama yang disimpan di lokasi memori yang berdekatan.  
Array merupakan salah satu struktur data **paling populer dan sederhana** yang digunakan dalam pemrograman.

---

## 📘 Terminologi Dasar Array

### 🔢 Indeks Array
Dalam array, elemen diidentifikasi oleh **indeks**-nya.  
Indeks array **dimulai dari 0**.

### 📦 Elemen Array
**Elemen** adalah item yang disimpan dalam array dan dapat diakses menggunakan indeksnya.

### 📏 Panjang Array
**Panjang array** ditentukan oleh jumlah elemen yang dapat ditampung oleh array tersebut.

---

## 💾 Representasi Memori Array

Dalam array, semua elemen disimpan di **lokasi memori yang berdekatan**.  
Jadi, jika kita menginisialisasi array, elemen akan dialokasikan **secara berurutan dalam memori**.

Hal ini memungkinkan:
- Akses elemen yang **cepat dan efisien**
- Manipulasi data yang lebih **optimal** dibandingkan dengan beberapa struktur data lainnya

---

💡 **Contoh dalam Bahasa Pemrograman (misalnya Python):**

```python
# Inisialisasi array
angka = [10, 20, 30, 40, 50]

# Akses elemen pertama (indeks 0)
print(angka[0])  # Output: 10
```

---

Jika kamu butuh tambahan tentang **jenis-jenis array (1D, 2D, multidimensional)** atau **perbandingan array dengan struktur data lain**, tinggal bilang saja!


---

## 🧱 Jenis-Jenis Array

### 1️⃣ Array 1 Dimensi (1D Array)
Array satu dimensi adalah bentuk paling dasar dari array, di mana elemen-elemen disusun dalam satu baris.

**Contoh (Python):**
```python
angka = [1, 2, 3, 4, 5]
print(angka[2])  # Output: 3
```

---

### 2️⃣ Array 2 Dimensi (2D Array)
Array dua dimensi disusun seperti matriks atau tabel, yaitu dalam baris dan kolom.

**Contoh (Python):**
```python
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
print(matrix[1][2])  # Output: 6
```

---

### 3️⃣ Array Multidimensi
Array ini memiliki lebih dari dua dimensi. Digunakan untuk merepresentasikan data kompleks seperti tensor, citra 3D, dsb.

**Contoh (Python - 3D):**
```python
tensor = [
    [
        [1, 2],
        [3, 4]
    ],
    [
        [5, 6],
        [7, 8]
    ]
]
print(tensor[1][0][1])  # Output: 6
```

---

## 🔄 Perbandingan Array dengan Struktur Data Lain

| **Struktur Data** | **Deskripsi Singkat**                                       | **Kelebihan**                                      | **Kekurangan**                                      |
|-------------------|--------------------------------------------------------------|----------------------------------------------------|-----------------------------------------------------|
| **Array**         | Kumpulan elemen bertipe sama di memori berurutan             | Akses cepat via indeks, efisien di memori          | Ukuran tetap, tidak fleksibel                       |
| **List (Python)** | Kumpulan elemen yang dapat bertipe campuran                  | Dinamis, fleksibel, banyak metode built-in         | Lebih lambat dari array untuk operasi numerik       |
| **Linked List**   | Set elemen yang saling terhubung dengan pointer              | Dinamis, insert/delete mudah                       | Akses lambat karena harus traversal                 |
| **Dictionary**    | Kumpulan pasangan key-value                                  | Akses cepat berdasarkan key, fleksibel             | Lebih berat di memori, tidak terurut secara alami  |
| **Set**           | Kumpulan elemen unik, tidak berurutan                        | Cek keanggotaan cepat, elemen tidak duplikat       | Tidak bisa diakses via indeks                      |