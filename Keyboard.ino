
#include "DigiKeyboard.h"

void setup() {

}


void loop() {

  DigiKeyboard.sendKeyStroke(0);

  DigiKeyboard.delay(3000);
 
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);

  DigiKeyboard.delay(1000);
  
  DigiKeyboard.print("cmd");
  
  DigiKeyboard.delay(1000);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  DigiKeyboard.delay(1000);

  DigiKeyboard.print("start https://www.youtube.com/watch?v=eBGIQ7ZuuiU");

  DigiKeyboard.delay(1000);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(3000);

  DigiKeyboard.sendKeyStroke(KEY_SPACE);

  DigiKeyboard.delay(30000);




}
