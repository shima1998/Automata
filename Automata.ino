//参照サイト
//照度センサーの使い方 [Arduino]
//https://www.petitmonte.com/robot/howto_illuminance_sensor.html

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//サイト参照
  pinMode(8,INPUT);//サイト参照
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(8);//サイト参照
  Serial.println(val);//サイト参照
}
