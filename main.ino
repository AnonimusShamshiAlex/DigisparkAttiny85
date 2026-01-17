#include "DigiKeyboard.h"

void setup() {
  // Инициализация
  DigiKeyboard.sendKeyStroke(0);
  
  // Задержка для определения устройства (важно!)
  delay(2000);
  
  // Вводим скрипт
  DigiKeyboard.print("javascript:import(\"HELLO")");
  
  // Нажимаем Enter
  delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  // Завершение работы
  delay(100);
}

void loop() {
  // Ничего не делаем после выполнения
}
