#include <LiquidCrystal.h>

// LCD pins: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);

  lcd.setCursor(0, 0);
  lcd.print("Hello Students");

  lcd.setCursor(0, 1);
  lcd.print("ECE Department");
}

void loop() {
  // No repeated operation required
}
