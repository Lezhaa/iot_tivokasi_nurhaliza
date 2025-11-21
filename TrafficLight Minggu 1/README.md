# Proyek Lampu Lalu Lintas (Traffic Light) Sederhana

[![PlatformIO](https://img.shields.io/badge/Platform-Arduino%20IDE-00979D?style=for-the-badge&logo=arduino)](https://www.arduino.cc/)
[![Microcontroller](https://img.shields.io/badge/Microcontroller-Arduino%20Uno-000000?style=for-the-badge&logo=arduino)](https://www.arduino.cc/en/Main/ArduinoBoardUno)
[![Komponen](https://img.shields.io/badge/Komponen-LED%20(Merah%2C%20Kuning%2C%20Hijau)-E73527?style=for-the-badge)](https://www.arduino.cc/)

Proyek ini adalah implementasi dasar untuk mensimulasikan kerja **lampu lalu lintas (traffic light)** standar menggunakan mikrokontroler **Arduino Uno**. Sistem ini menjalankan urutan warna **merah**, **kuning**, dan **hijau** secara otomatis dengan durasi waktu yang telah ditentukan. Proyek ini merupakan bagian dari materi kuliah IoT Minggu ke-1.

## Fitur Utama

*   **Simulasi Lampu Lalu Lintas**: Mengontrol tiga LED (Merah, Kuning, Hijau) untuk meniru siklus lampu lalu lintas.
*   **Timing Otomatis**: Siklus lampu berjalan secara otomatis dan berulang.
*   **Durasi Standar**: Menggunakan durasi 5 detik untuk Merah dan Hijau, serta 2 detik untuk Kuning.
*   **Kode Sederhana**: Implementasi menggunakan fungsi `digitalWrite()` dan `delay()` standar Arduino.

## Kebutuhan Hardware

| Komponen | Jumlah | Deskripsi |
| :--- | :--- | :--- |
| **Mikrokontroler** | 1 | Arduino Uno Development Board |
| **LED Merah** | 1 | Untuk lampu stop |
| **LED Kuning** | 1 | Untuk lampu peringatan |
| **LED Hijau** | 1 | Untuk lampu jalan |
| **Resistor** | 3 | Resistor 220Ω (Pembatas arus untuk setiap LED) |
| **Breadboard** | 1 | Tempat merangkai komponen |
| **Kabel Jumper** | Secukupnya | Penghubung rangkaian |

## Skema Pengkabelan (Wiring Diagram)

Berdasarkan kode sumber (`traffic_light.ino`), LED dihubungkan ke pin digital pada Arduino Uno.

| Pin LED | Pin Arduino Uno | Keterangan |
| :--- | :--- | :--- |
| **LED Merah** | **Pin 7** | Lampu stop |
| **LED Kuning** | **Pin 6** | Lampu peringatan |
| **LED Hijau** | **Pin 5** | Lampu jalan |
| **Kaki Pendek LED** | **GND** | Dihubungkan melalui Resistor 220Ω ke Ground |

**Visual Rangkaian Sederhana:**
*   Pin 7 Arduino → Resistor 220Ω → LED Merah → GND
*   Pin 6 Arduino → Resistor 220Ω → LED Kuning → GND
*   Pin 5 Arduino → Resistor 220Ω → LED Hijau → GND

## Konfigurasi Proyek

Pin yang digunakan untuk setiap LED didefinisikan di awal kode `traffic_light.ino`. Anda dapat mengubahnya sesuai kebutuhan.

```cpp
// Pin deklarasi
int red = 7;
int yellow = 6;
int green = 5;
```

**Timing Traffic Light:**

| Warna LED | Durasi | Keterangan |
| :--- | :--- | :--- |
| 🔴 Merah | 5000 ms (5 detik) | Berhenti |
| 🟡 Kuning | 2000 ms (2 detik) | Peringatan |
| 🟢 Hijau | 5000 ms (5 detik) | Jalan |

## Instalasi dan Unggah Kode

1.  **Lingkungan Pengembangan**: Gunakan **Arduino IDE**.
2.  **Buka Kode**: Buka file `traffic_light.ino` di Arduino IDE.
3.  **Pilih Board**: Pastikan Anda memilih board **Arduino Uno** dan port serial yang sesuai.
4.  **Unggah**: Klik tombol **Upload** untuk mengunggah program ke board Arduino Uno Anda.
5.  **Amati**: Amati pola nyala LED traffic light yang akan berulang secara otomatis.

## Struktur Kode (`traffic_light.ino`)

Kode diorganisir dalam fungsi `setup()` untuk inisialisasi pin dan fungsi `loop()` untuk logika utama siklus lampu.

| Fungsi/Bagian | Deskripsi |
| :--- | :--- |
| **Definisi Pin** | Mendefinisikan pin digital yang terhubung ke setiap LED (`red=7`, `yellow=6`, `green=5`). |
| **`setup()`** | Mengatur semua pin LED sebagai **OUTPUT** menggunakan `pinMode()`. |
| **`loop()`** | Logika utama: menjalankan siklus Merah (5s), Kuning (2s), Hijau (5s) secara berurutan menggunakan `digitalWrite()` dan `delay()`. Siklus ini akan berulang terus-menerus. |

## Hasil yang Diharapkan

Setelah program diunggah, tiga LED akan menyala bergantian dengan pola:

**🔴 Merah (5 detik) → 🟡 Kuning (2 detik) → 🟢 Hijau (5 detik) → 🔴 Merah (berulang)**

---
*Dibuat oleh **Manus AI** berdasarkan template dan konten proyek **IoT Tivokasi Nurhaliza**.*
