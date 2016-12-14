// Program Deteksi getar dengan Piezoelectric
// Oleh : Aan Darmawan
// valfa.blogspot.com
// maret 2011

/* Keterangan skema:
 * Sambungkan Output Piezo ke pin A0 (Analog input pin 0) Arduino
 * Pin 8 output ke relay , jika nilai getaran mencapai 800, Relay ON
 */

// deklarasi variabel
int mgetar;
int getarPin = 0;

void setup() {
  pinMode(8,OUTPUT);
  // aktifkan serial port
  Serial.begin(9600);
}

void loop() {
  // baca getaran dari A0
  mgetar =analogRead(getarPin);
  //kirim ke serial
  Serial.println(mgetar);
  if(mgetar>=800) //jika getaran cukup keras
  {
    digitalWrite(8,HIGH); // aktifkan relay
    delay(2000); // delay 2 detik
  }
  else digitalWrite(8,LOW);
  delay(30); // berhenti beberapa milidetik
} 

 
