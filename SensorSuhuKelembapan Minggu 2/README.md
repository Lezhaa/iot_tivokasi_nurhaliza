# Proyek Sensor Suhu dan Kelembapan (DHT22)

[![PlatformIO](https://img.shields.io/badge/Platform-Arduino%20(ESP32)-00979D?style=for-the-badge&logo=arduino)](https://www.arduino.cc/)
[![Sensor](https://img.shields.io/badge/Sensor-DHT22-000000?style=for-the-badge&logo=adafruit)](https://www.adafruit.com/product/385)
[![Microcontroller](https://img.shields.io/badge/Microcontroller-ESP32-E73527?style=for-the-badge&logo=espressif)](https://www.espressif.com/en/products/socs/esp32)

Proyek ini adalah implementasi dasar untuk membaca data **suhu** dan **kelembapan** menggunakan sensor **DHT22** (atau DHT11, tergantung konfigurasi) pada mikrokontroler **ESP32**. Proyek ini merupakan bagian dari materi kuliah IoT Minggu ke-2.

## Fitur Utama

*   **Pembacaan Suhu dan Kelembapan**: Mengambil data suhu dalam Celcius dan kelembapan relatif.
*   **Sensor DHT22**: Menggunakan sensor DHT22 yang dikenal lebih akurat dibandingkan DHT11.
*   **Interval Pembacaan**: Data sensor dibaca setiap **2 detik** (2000 ms).
*   **Validasi Data**: Terdapat pemeriksaan untuk memastikan pembacaan sensor berhasil sebelum menampilkan data.
*   **Output Serial**: Menampilkan hasil pembacaan suhu dan kelembapan ke Serial Monitor.

## Kebutuhan Hardware

| Komponen | Deskripsi |
| :--- | :--- |
| **Mikrokontroler** | ESP32 Development Board |
| **Sensor** | Sensor Suhu dan Kelembapan DHT22 (atau DHT11) |
| **Resistor** | Resistor Pull-up 10 kΩ (jika tidak menggunakan modul DHT) |
| **Kabel** | Kabel Jumper |

## Skema Pengkabelan (Wiring Diagram)

Berdasarkan kode sumber (`main.cpp`), sensor DHT dihubungkan ke **GPIO 27** pada ESP32.

| Pin DHT | Pin ESP32 | Keterangan |
| :--- | :--- | :--- |
| **VCC** | 3.3V atau 5V | Catu daya |
| **GND** | GND | Ground |
| **Data Pin** | **GPIO 27** | Pin data (membutuhkan resistor pull-up ke VCC) |

## Konfigurasi Proyek

Anda dapat mengubah tipe sensor dan pin data di bagian awal file `main.cpp` jika menggunakan konfigurasi hardware yang berbeda.

```cpp
#define DHTPIN 27   // Pin yang terhubung ke sensor DHT
#define DHTTYPE DHT22 // Tipe sensor DHT (Ganti ke DHT11 jika menggunakan DHT11)
```

## Instalasi dan Unggah Kode

1.  **Lingkungan Pengembangan**: Gunakan **Arduino IDE** atau **PlatformIO** dengan dukungan ESP32.
2.  **Instalasi Library**: Anda **wajib** menginstal library berikut:
    *   `DHT sensor library` (oleh Adafruit)
    *   `Adafruit Unified Sensor` (Dibutuhkan oleh library DHT)
3.  **Unggah**: Unggah kode `main.cpp` ke ESP32 Anda.
4.  **Monitoring**: Buka Serial Monitor (dengan baud rate 115200) untuk melihat hasil pembacaan suhu dan kelembapan secara real-time.

## Struktur Kode (`main.cpp`)

Kode diorganisir sebagai berikut:

| Fungsi/Bagian | Deskripsi |
| :--- | :--- |
| **Definisi Sensor** | Mendefinisikan pin sensor (`DHTPIN 27`) dan tipe sensor (`DHTTYPE DHT22`). |
| **`setup()`** | Menginisialisasi komunikasi Serial dan memulai inisialisasi sensor DHT (`dht.begin()`). |
| **`loop()`** | Logika utama: menunggu 2 detik, membaca data suhu dan kelembapan, melakukan validasi, dan mencetak hasilnya ke Serial Monitor. |
