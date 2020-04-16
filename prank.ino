#include <Keyboard.h>

//specify the use of enter key
void typeKey(int key){                 
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  delay(500);
  //Minimize all programs that's opened
  Keyboard.press(KEY_LEFT_GUI);
  delay(500);
  Keyboard.press('m');
  Keyboard.releaseAll();
  delay(500);
  
  //To access snipping tool
  delay(500);                          
  Keyboard.press(KEY_LEFT_GUI);         //this is the windows key
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("snipping tool");      //navigate to snipping tool
  delay(500);
  typeKey(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);

  //access the 'new' tab in snipping tool
  Keyboard.press(KEY_LEFT_ALT);       
  Keyboard.press('n');                 
  delay(500);

  //to take a full-screen snip
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);       
  Keyboard.releaseAll();
  delay(500);
  typeKey(KEY_RETURN);

  //save the full-screen snip
  Keyboard.press(KEY_LEFT_CTRL);       
  delay(500);
  Keyboard.press('s');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("wallpaper");          //file name of the full-screen snip   
  delay(500);
  typeKey(KEY_RETURN);

  //close the snipping tool program
  Keyboard.press(KEY_LEFT_ALT);        
  delay(500);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();
  //Keyboard.releaseAll();

  //access the saved folder
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("pictures");
  typeKey(KEY_RETURN);
  delay(500);

  //look for the saved full-screen snip
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('f');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("wallpaper");
  delay(500);
  typeKey(KEY_RETURN);
  delay(500);
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  delay(500);
  
  //right click on the image
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_F10);
  Keyboard.releaseAll();
  delay(500);
  
  //set it as wallpaper
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  typeKey(KEY_RETURN);
  delay(500);
  
  //Minimize all programs that's opened
  Keyboard.press(KEY_LEFT_GUI);
  delay(500);
  Keyboard.press('d');
  Keyboard.releaseAll();
  delay(1000);

  //hide desktop icons
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_F10);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_RIGHT_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  typeKey(KEY_RETURN);
  Keyboard.end();
}
void loop() {
  // put your main code here, to run repeatedly:
}
