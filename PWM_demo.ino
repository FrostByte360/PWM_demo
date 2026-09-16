/*==============================================================
                          PWM DEMO
================================================================

Description:
  This program demonstrates the execution of a pulse width module,
  allowing five LED lights to display a varying luminance.

Programmer:
  Mark P. Garcia

Date:
  9 September 2026
----------------------------------------------------------------*/

// GPIOS
const uint8_t SW1 = 32;
const uint8_t SW2 = 33;

bool SW1_state = 0;
bool SW2_state = 0;

// PWM Parameters
const uint16_t FREQ = 5000;
const uint8_t RES = 8;
int t_delay = 400;
int fade = 5;
int bright = 0;

void setup() {
  pinMode(SW1, INPUT);
  pinMode(SW2, INPUT);
}

void loop() {
  SW1_state = digitalRead(SW1);
  SW2_state = digitalRead(SW2);
}
