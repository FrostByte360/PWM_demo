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
const uint8_t LED = 32;

// PWM Parameters
const uint16_t FREQ = 5000;
const uint8_t RES = 8;
int t_delay = 400;
int fade = 5;
int bright = 0;

void setup() {
  ledcAttach(LED, FREQ, RES);
}

void loop() {
  ledcWrite(LED, bright);
  bright += fade;

  if (bright >= 255 || bright <= 0)  {
    fade -= fade;
  }

  delay(t_delay);
}