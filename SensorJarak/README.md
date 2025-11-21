# Proyek Sensor Jarak Ultrasonik (HC-SR04)

[![PlatformIO](https://img.shields.io/badge/Platform-Arduino%20(ESP32)-00979D?style=for-the-badge&logo=arduino)](https://www.arduino.cc/)
[![Sensor](https://img.shields.io/badge/Sensor-HC--SR04-000000?style=for-the-badge)](https://www.sparkfun.com/products/13959)
[![Microcontroller](https://img.shields.io/badge/Microcontroller-ESP32-E73527?style=for-the-badge&logo=espressif)](https://www.espressif.com/en/products/socs/esp32)

Proyek ini mengimplementasikan pembacaan jarak menggunakan **Sensor Ultrasonik HC-SR04** pada mikrokontroler **ESP32**. Proyek ini merupakan dasar penting dalam IoT untuk aplikasi yang membutuhkan deteksi objek atau pengukuran level.

## Fitur Utama

*   **Pengukuran Jarak**: Menggunakan prinsip kerja sensor ultrasonik (Trig dan Echo) untuk mengukur jarak ke objek terdekat.
*   **Perhitungan Akurat**: Mengkonversi durasi pantulan suara menjadi jarak dalam satuan **sentimeter (cm)** dan **inci (inch)**.
*   **Output Serial**: Menampilkan hasil pengukuran jarak secara real-time ke Serial Monitor.
*   **Pin yang Didefinisikan**: Menggunakan pin digital yang jelas untuk Trigger dan Echo.

## Kebutuhan Hardware

| Komponen | Deskripsi |
| :--- | :--- |
| **Mikrokontroler** | ESP32 Development Board |
| **Sensor** | Sensor Ultrasonik HC-SR04 |
| **Kabel** | Kabel Jumper |

## Skema Pengkabelan (Wiring Diagram)

Berdasarkan kode sumber (`main.cpp`), pin sensor HC-SR04 dihubungkan ke ESP32 sebagai berikut:

| Pin HC-SR04 | Pin ESP32 | Keterangan |
| :--- | :--- | :--- |
| **VCC** | 5V atau 3.3V | Catu daya |
| **GND** | GND | Ground |
| **Trig Pin** | **GPIO 5** | Pin Trigger (Output) |
| **Echo Pin** | **GPIO 18** | Pin Echo (Input) |

## Konfigurasi Proyek

Tidak ada konfigurasi yang diperlukan selain memastikan pin yang digunakan di kode sesuai dengan pengkabelan hardware Anda.

```cpp
// Definisi Pin Sensor HC-SR04
const int trigPin = 5;  // Pin Trigger terhubung ke GPIO 5
const int echoPin = 18; // Pin Echo terhubung ke GPIO 18
```

## Instalasi dan Unggah Kode

1.  **Lingkungan Pengembangan**: Gunakan **Arduino IDE** atau **PlatformIO** dengan dukungan ESP32.
2.  **Instalasi Library**: Proyek ini hanya menggunakan library dasar `Arduino.h` dan `HardwareSerial.h` (built-in). Tidak ada library eksternal yang diperlukan.
3.  **Unggah**: Unggah kode `main.cpp` ke ESP32 Anda.
4.  **Monitoring**: Buka Serial Monitor (dengan baud rate 115200) untuk melihat hasil pengukuran jarak secara real-time.

## Struktur Kode (`main.cpp`)

Kode diorganisir sebagai berikut:

| Fungsi/Bagian | Deskripsi |
| :--- | :--- |
| **Definisi Pin** | Mendefinisikan `trigPin` (GPIO 5) dan `echoPin` (GPIO 18). |
| **Konstanta Fisika** | Mendefinisikan kecepatan suara dalam cm/µs (`SOUND_SPEED 0.034`) untuk perhitungan jarak. |
| **`setup()`** | Menginisialisasi komunikasi Serial dan mengatur mode pin (Trig sebagai OUTPUT, Echo sebagai INPUT). |
| **`loop()`** | Logika utama: mengirim pulsa trigger, mengukur durasi pulsa echo, menghitung jarak, dan mencetak hasilnya ke Serial Monitor. |
