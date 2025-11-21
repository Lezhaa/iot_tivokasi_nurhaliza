# Proyek Simulasi Kontrol Relay dan LED dengan Tombol

[![PlatformIO](https://img.shields.io/badge/Platform-Arduino%20(ESP32)-00979D?style=for-the-badge&logo=arduino)](https://www.arduino.cc/)
[![Microcontroller](https://img.shields.io/badge/Microcontroller-ESP32-E73527?style=for-the-badge&logo=espressif)](https://www.espressif.com/en/products/socs/esp32)
[![Actuator](https://img.shields.io/badge/Actuator-Relay%20Module-blue?style=for-the-badge)](https://en.wikipedia.org/wiki/Relay)

Proyek ini adalah implementasi dasar untuk mengontrol sebuah **Relay** dan sebuah **LED** menggunakan input dari sebuah **Tombol Tekan (Pushbutton)** pada mikrokontroler **ESP32**. Proyek ini mensimulasikan kontrol aktuator sederhana dalam sistem IoT.

## Fitur Utama

*   **Kontrol Aktuator**: Mengontrol status Relay (ON/OFF) yang dapat digunakan untuk mengaktifkan perangkat listrik bertegangan tinggi.
*   **Indikator LED**: Menggunakan LED sebagai indikator visual yang menyala bersamaan dengan Relay.
*   **Input Tombol**: Menggunakan tombol tekan sebagai input kontrol, dengan konfigurasi **INPUT\_PULLUP** internal.
*   **Logika Sederhana**: Ketika tombol ditekan, Relay dan LED akan **ON**. Ketika tombol dilepas, Relay dan LED akan **OFF**.

## Kebutuhan Hardware

| Komponen | Deskripsi |
| :--- | :--- |
| **Mikrokontroler** | ESP32 Development Board |
| **Aktuator** | Modul Relay 1 Channel (atau lebih) |
| **Input** | Tombol Tekan (Pushbutton) |
| **Indikator** | LED dan Resistor (misalnya 220 Ohm) |
| **Kabel** | Kabel Jumper |

## Skema Pengkabelan (Wiring Diagram)

Berdasarkan kode sumber (`main.cpp`), komponen dihubungkan ke ESP32 sebagai berikut:

| Komponen | Pin ESP32 | Keterangan |
| :--- | :--- | :--- |
| **Tombol Tekan** | **GPIO 19** (`ButtonPin`) | Terhubung ke GND. Menggunakan `INPUT_PULLUP` internal. |
| **LED** | **GPIO 18** (`LedPin`) | Terhubung ke LED (melalui resistor) dan GND. |
| **Modul Relay** | **GPIO 23** (`RelayPin`) | Pin kontrol Relay. |

**Catatan Penting:**
*   Pin Tombol (GPIO 19) diatur sebagai `INPUT_PULLUP`, yang berarti tombol harus dihubungkan antara pin tersebut dan **GND**. Tombol akan terbaca `LOW` saat ditekan.
*   Pastikan Modul Relay Anda kompatibel dengan tegangan logika ESP32 (3.3V).

## Konfigurasi Proyek

Anda dapat mengubah pin yang digunakan dengan memodifikasi definisi pin di bagian awal file `main.cpp`.

```cpp
// Definisi Pin
const int ButtonPin = 19; // GPIO19 terhubung ke tombol tekan
const int LedPin = 18;    // GPIO18 terhubung ke LED
const int RelayPin = 23;  // GPIO23 terhubung ke modul relay
```

## Instalasi dan Unggah Kode

1.  **Lingkungan Pengembangan**: Gunakan **Arduino IDE** atau **PlatformIO** dengan dukungan ESP32.
2.  **Instalasi Library**: Proyek ini hanya menggunakan library dasar `Arduino.h` (built-in). Tidak ada library eksternal yang diperlukan.
3.  **Unggah**: Unggah kode `main.cpp` ke ESP32 Anda.
4.  **Pengujian**: Tekan tombol. LED dan Relay harus aktif. Lepaskan tombol. LED dan Relay harus nonaktif.

## Struktur Kode (`main.cpp`)

Kode diorganisir sebagai berikut:

| Fungsi/Bagian | Deskripsi |
| :--- | :--- |
| **Definisi Pin** | Mendefinisikan pin untuk Tombol, LED, dan Relay. |
| **`setup()`** | Mengatur mode pin (Tombol sebagai `INPUT_PULLUP`, LED dan Relay sebagai `OUTPUT`). Menginisialisasi output ke kondisi OFF. |
| **`loop()`** | Logika utama: membaca status tombol. Jika tombol ditekan (`LOW`), atur LED dan Relay ke `HIGH` (ON). Jika tidak, atur ke `LOW` (OFF). |
