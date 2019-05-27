void setup() {
  pinMode(A0,OUTPUT); //pinที่รับต้องเป็นpinที่สามารถรับค่าAnalogได้เท่านั้น
  Serial.begin(115200); //set serialว่าจะให้มันแสดงค่าในช่วงไหน
}

void loop() {
  int val = analogRead(A0);//อ่านค่าที่pin A0ที่ต่ออยู่กับตัวFSR แล้วนำไปเก็บที่ตัวแปล val
  Serial.print("FSR resistance = ");
  Serial.println(val);//แสดงค่าแรงกดใน Serial monitor
  delay(200);

}
