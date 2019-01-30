void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Starting up...");
}
int count = 0;

void loop() {
  // put your main code here, to run repeatedly:
  char text[32];
  //String number = String(count);
//  String message = String("Brian is cool " + String(count));
  //Serial.println(message);
  String(count).toCharArray(text, 10);
  Serial.println(text);
  count++;
  delay(1000);
}
