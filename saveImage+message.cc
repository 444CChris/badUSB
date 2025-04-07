#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT); //LED on Model A 
}

void loop() {
  DigiKeyboard.delay(3000);
//open up run
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(400);
  DigiKeyboard.println("opera");
  DigiKeyboard.delay(600);
  DigiKeyboard.println("https://www.youtube.com");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(200);
//pulling up a web image to save
  DigiKeyboard.println("https://someimage.jpg");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Some-file-name");
  DigiKeyboard.delay(500);
// tab to get to file explorer
  for(int i = 0; i < 7; i++){
     DigiKeyboard.sendKeyStroke(43);
  }
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(42);
  DigiKeyboard.delay(400);
  DigiKeyboard.println("Downloads");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_N, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.println("some folder name");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_N, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("Some other folder name");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_N, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("unique folder name here");
  DigiKeyboard.delay(700);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_N, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("some other folder name here");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
// tab to find save button
  for(int i = 0; i < 5; i++){
     DigiKeyboard.sendKeyStroke(43);
  }
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
//close image
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(200);
// open up run 
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(400);
  DigiKeyboard.println("notepad");
  DigiKeyboard.delay(1000);
//expand notepad
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_X);
  DigiKeyboard.delay(800);
//Long messages will cause it to bug out. In my experience the message has to be under 250 characters 
  DigiKeyboard.print("Message here, break it up");
  DigiKeyboard.delay(800);
  DigiKeyboard.print("into shorter bits");
//Loop to prevent the script from repeating
  for(;;){
  }
}
