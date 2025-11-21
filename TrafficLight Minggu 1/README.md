Traffic Light System - Minggu 1
<div align="center">
https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white
https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%252B%252B&logoColor=white
https://img.shields.io/badge/IoT-FF6B6B?style=for-the-badge&logo=iot&logoColor=white

</div>
📋 Deskripsi
Repository ini berisi implementasi sistem traffic light (lampu lalu lintas) menggunakan Arduino untuk minggu pertama pembelajaran IoT. Sistem ini mensimulasikan kerja lampu lalu lintas standar dengan urutan warna merah, kuning, dan hijau yang berjalan secara otomatis.

🛠 Komponen yang Digunakan
Komponen	Jumlah	Keterangan
Arduino Uno	1	Board microcontroller
LED Merah	1	Untuk lampu stop
LED Kuning	1	Untuk lampu peringatan
LED Hijau	1	Untuk lampu jalan
Resistor 220Ω	3	Pembatas arus LED
Breadboard	1	Tempat merangkai komponen
Kabel Jumper	Secukupnya	Penghubung rangkaian
🔌 Skema Rangkaian
Diagram Koneksi
text
LED Merah   → Pin 7 Arduino → Resistor 220Ω → GND
LED Kuning  → Pin 6 Arduino → Resistor 220Ω → GND  
LED Hijau   → Pin 5 Arduino → Resistor 220Ω → GND
Visual Rangkaian
text
Arduino Uno:
    Pin 5  ---[R220]---LED Hijau---GND
    Pin 6  ---[R220]---LED Kuning--GND
    Pin 7  ---[R220]---LED Merah---GND
⚙️ Spesifikasi Program
Timing Traffic Light
Warna LED	Durasi	Keterangan
🔴 Merah	5 detik	Berhenti
🟡 Kuning	2 detik	Peringatan
🟢 Hijau	5 detik	Jalan
Flow Operasi
Fase Merah: LED merah menyala, lainnya mati

Fase Kuning: LED kuning menyala, lainnya mati

Fase Hijau: LED hijau menyala, lainnya mati

Kembali ke fase 1 - Siklus berulang terus

🚀 Cara Penggunaan
Hardware Setup
Rangkai komponen sesuai skema di breadboard

Pastikan polaritas LED benar (kaki panjang ke +, pendek ke -)

Gunakan resistor untuk setiap LED

Hubungkan ke Arduino Uno

Software Setup
Buka file traffic_light.ino di Arduino IDE

Pilih board Arduino Uno dan port yang sesuai

Upload program ke board Arduino

Amati pola nyala LED traffic light

📁 Struktur File
text
TrafficLight Minggu 1/
├── traffic_light.ino    # Kode utama program traffic light
└── README.md           # Dokumentasi ini
📝 Kode Program
cpp
// Pin deklarasi
int red = 7;
int yellow = 6;
int green = 5;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  // Fase merah
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  delay(5000);
  
  // Fase kuning
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  delay(2000);
  
  // Fase hijau
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(5000);
}
📊 Hasil yang Diharapkan
Setelah program diupload, tiga LED akan menyala bergantian dengan pola:

🔴 Merah 5 detik → 🟡 Kuning 2 detik → 🟢 Hijau 5 detik → 🔴 Merah (berulang)

👨‍💻 Author
Lezhaa - IoT Tivokasi Nurhaliza

<div align="center">
⭐ Jika project ini membantu, jangan lupa beri bintang!

</div>
