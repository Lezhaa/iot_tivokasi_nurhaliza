# Kumpulan Proyek IoT - Mata Kuliah Internet Of Things TI Vokasi UB

[![GitHub last commit](https://img.shields.io/github/last-commit/Lezhaa/iot_tivokasi_nurhaliza?style=for-the-badge)](https://github.com/Lezhaa/iot_tivokasi_nurhaliza/commits/main)
[![License](https://img.shields.io/badge/License-MIT-blue.svg?style=for-the-badge)](LICENSE)

Repositori ini berisi kumpulan proyek **Internet of Things (IoT)** yang dikembangkan sebagai bagian dari tugas mata kuliah IoT Tivokasi. Setiap folder mewakili proyek IoT yang berbeda, berfokus pada implementasi sensor, aktuator, konektivitas, dan integrasi cloud menggunakan mikrokontroler seperti **ESP32** atau **Arduino**.

## Daftar Proyek

Berikut adalah daftar proyek yang terdapat dalam repositori ini, diurutkan berdasarkan fokus atau minggu pengerjaan (berdasarkan informasi commit):

| No. | Nama Proyek | Deskripsi Singkat | Teknologi Utama |
| :--- | :--- | :--- | :--- |
| 1 | **Sensor Suhu Kelembapan** | Proyek dasar untuk membaca data suhu dan kelembapan dari sensor (kemungkinan DHT11/DHT22 atau DS18B20) dan menampilkannya. | Mikrokontroler, Sensor Suhu/Kelembapan |
| 2 | **Traffic Light** | Simulasi sistem lampu lalu lintas sederhana menggunakan LED dan mikrokontroler. | Mikrokontroler, LED, Logika Pemrograman |
| 3 | **Sensor Jarak** | Implementasi sensor jarak (kemungkinan HC-SR04) untuk mengukur jarak dan menampilkan hasilnya. | Mikrokontroler, Sensor Ultrasonik |
| 4 | **Simulasi Relay** | Proyek untuk mengontrol perangkat AC/DC melalui modul relay, mensimulasikan kontrol aktuator. | Mikrokontroler, Modul Relay |
| 5 | **Koneksi WiFi** | Proyek fokus pada inisialisasi dan manajemen koneksi WiFi pada mikrokontroler (misalnya ESP32). | ESP32, WiFi |
| 6 | **led hardware** | Proyek kontrol LED yang lebih mendalam, mungkin melibatkan kontrol kecerahan (PWM) atau pola LED yang kompleks. | Mikrokontroler, LED |
| 7 | **wokwi_internet** | Proyek yang dikembangkan menggunakan platform simulasi online Wokwi, berfokus pada fitur koneksi internet. | Wokwi, Simulasi IoT |
| 8 | **iot_api** | Proyek yang melibatkan interaksi dengan API, kemungkinan untuk mengirim atau menerima data dari layanan web. | Mikrokontroler, HTTP/API |
| 9 | **laravel-11** | Proyek pengembangan *web dashboard* menggunakan framework Laravel 11 untuk visualisasi dan manajemen data IoT yang dikirim dari perangkat. | Laravel 11, PHP, Web Development |

## Struktur Repositori

Setiap folder proyek berisi kode sumber, skema pengkabelan (jika ada), dan dokumentasi terkait proyek tersebut.

```
.
├── KoneksiWifi/
├── SensorJarak/
├── SensorSuhuKelembapan Minggu 2/
├── SimulasiRelay/
├── TrafficLight Minggu 1/
├── iot_api/
├── laravel-11/
├── led hardware/
├── wokwi_internet/
└── README.md  <-- File ini
```

## Cara Menggunakan

Untuk melihat detail implementasi dari masing-masing proyek, silakan navigasi ke folder proyek yang bersangkutan.

1.  **Pilih Proyek**: Pilih folder proyek yang ingin Anda pelajari (misalnya, `SensorSuhuKelembapan Minggu 2`).
2.  **Tinjau Kode**: Buka file kode sumber (biasanya `.ino` atau `.cpp`) untuk melihat logika pemrograman.
3.  **Siapkan Hardware**: Siapkan komponen hardware yang diperlukan sesuai deskripsi proyek.
4.  **Unggah**: Unggah kode ke mikrokontroler Anda menggunakan **Arduino IDE** atau **PlatformIO**.

## Kontribusi

Proyek ini adalah bagian dari tugas kuliah. Namun, saran dan masukan untuk perbaikan kode atau dokumentasi selalu diterima. Silakan ajukan **Pull Request** atau buka **Issue**.

## Lisensi

Proyek ini dilisensikan di bawah **Lisensi MIT**.
