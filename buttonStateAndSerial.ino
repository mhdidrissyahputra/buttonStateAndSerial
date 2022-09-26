const int buttonPin = 2;
const int LEDPin = 3;
int buttonState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);
  pinMode(buttonPin, INPUT);

}

void loop() {
  Serial.println(buttonPin);
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(LEDPin, HIGH);
    Serial.println("Button active & LED light up");
    delay(1000);
  } else {
    digitalWrite(LEDPin, LOW);
    Serial.println("Button not active & LED not light up");
    delay(1000);
  }
}
