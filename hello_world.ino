#include <Keyboard.h>

// Utility function
void typeKey(int key){                //declare typekey into the scope
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  // Start Keyboard and Mouse
  Keyboard.begin();
  
  // Start Payload
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);       //this is 'windows' key
  Keyboard.press(114);                //114 stands for 'r' (based on ASCII table)
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("notepad");
  delay(500);
  typeKey(KEY_RETURN);                //this is the 'enter' key
  delay(500);
  Keyboard.print("Hello World");
  delay(500);  
  Keyboard.press(KEY_LEFT_ALT);       //line 30 onwards is to close notepad program
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();
  Keyboard.press(KEY_RIGHT_ARROW);
  Keyboard.releaseAll();
  typeKey(KEY_RETURN);
  delay(500);
  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
}

// Unused
void loop() {
  }

  
  
