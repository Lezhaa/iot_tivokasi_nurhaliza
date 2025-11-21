# Proyek Koneksi WiFi dan Pembacaan Sensor (KoneksiWifi)

[![PlatformIO](https://img.shields.io/badge/Platform-Arduino%20(ESP32)-00979D?style=for-the-badge&logo=arduino)](https://www.arduino.cc/)
[![Sensor](https://img.shields.io/badge/Sensor-DHT22-000000?style=for-the-badge&logo=adafruit)](https://www.adafruit.com/product/385)
[![Microcontroller](https://img.shields.io/badge/Microcontroller-ESP32-E73527?style=for-the-badge&logo=espressif)](https://www.espressif.com/en/products/socs/esp32)

Proyek ini merupakan studi kasus dasar dalam mata kuliah IoT yang berfokus pada dua aspek utama: **koneksi mikrokontroler ke jaringan WiFi** dan **pembacaan data dari sensor lingkungan**.

Meskipun nama folder adalah `KoneksiWifi`, kode sumber (`main.cpp`) menunjukkan implementasi koneksi WiFi pada **ESP32** sekaligus pembacaan data dari **Sensor Suhu dan Kelembapan DHT22**.

## Fitur Utama

*   **Koneksi WiFi Otomatis**: Mengimplementasikan fungsi untuk menghubungkan ESP32 ke jaringan WiFi yang telah dikonfigurasi.
*   **Pembacaan Sensor DHT22**: Mengambil data suhu dan kelembapan dari sensor DHT22.
*   **Looping Terkendali**: Menggunakan fungsi `millis()` untuk mengontrol interval pembacaan dan pemrosesan data setiap **5 detik** (5000 ms).
*   **Debugging Serial**: Menampilkan status koneksi dan hasil pembacaan sensor melalui Serial Monitor.

## Kebutuhan Hardware

Proyek ini dirancang untuk dijalankan pada mikrokontroler **ESP32** dan memerlukan sensor DHT22.

| Komponen | Deskripsi |
| :--- | :--- |
| **Mikrokontroler** | ESP32 Development Board |
| **Sensor** | Sensor Suhu dan Kelembapan DHT22 |
| **Kabel** | Kabel Jumper |

## Skema Pengkabelan (Wiring Diagram)

Berdasarkan kode sumber, sensor DHT22 dihubungkan ke **GPIO 27** pada ESP32.

| Pin DHT22 | Pin ESP32 | Keterangan |
| :--- | :--- | :--- |
| **VCC** | 3.3V atau 5V | Catu daya |
| **GND** | GND | Ground |
| **DATA** | **GPIO 27** | Pin data |

## Konfigurasi Proyek

Sebelum mengunggah kode, Anda **wajib** mengganti kredensial WiFi di bagian awal file `main.cpp`.

```cpp
// Ganti dengan kredensial WiFi Anda
const char* ssid = "Nama_WiFi_Anda"; 
const char* password = "Password_WiFi_Anda"; 

// Interval pembacaan data (5000 ms = 5 detik)
const long interval = 5000; 
```

## Instalasi dan Unggah Kode

1.  **Lingkungan Pengembangan**: Gunakan **Arduino IDE** atau **PlatformIO** dengan dukungan ESP32.
2.  **Instalasi Library**: Pastikan Anda telah menginstal library berikut:
    *   `WiFi` (Built-in)
    *   `DHT sensor library` (oleh Adafruit)
    *   `Adafruit Unified Sensor` (Dibutuhkan oleh library DHT)
3.  **Unggah**: Unggah kode `main.cpp` ke ESP32 Anda.
4.  **Monitoring**: Buka Serial Monitor (dengan baud rate 115200) untuk melihat status koneksi WiFi dan hasil pembacaan suhu/kelembapan.

## Struktur Kode (`main.cpp`)

Kode diorganisir sebagai berikut:

| Bagian | Deskripsi |
| :--- | :--- |
| **Includes & Defines** | Mengimpor library dan mendefinisikan pin sensor (DHTPIN 27). |
| **Global Variables** | Menyimpan kredensial WiFi (`ssid`, `password`) dan variabel kontrol waktu (`interval`). |
| **`setup()`** | Menginisialisasi Serial, sensor DHT, dan memulai koneksi WiFi. |
| **`loop()`** | Logika utama: memeriksa interval waktu, membaca suhu dan kelembapan, dan menampilkan hasilnya ke Serial Monitor. |
