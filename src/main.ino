#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(2000); // Wait for computer to recognize device

  Keyboard.write(KEY_RETURN); // Press Enter
  // or Keyboard.println("ls -la"); to type and press Enter after
  Keyboard.end();
}

void loop() {
  // Empty
}
