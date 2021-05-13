void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  Keyboard.press(KEY_F15);
  delay(100);
  Keyboard.releaseAll();
  delay(1000);
}
