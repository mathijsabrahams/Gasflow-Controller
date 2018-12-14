#include <Servo.h>

// Control a servo with a potentiometer on A0

#define on_position 20
#define off_position 145

Servo s;  

void setup() {
  s.attach(9);
}

void loop() {
  int p = analogRead(A0);
  int  d = map(p, 0, 1023, off_position, on_position);

  s.write(d);
  delay(10);

}

