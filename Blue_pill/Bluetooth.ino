String string ="";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
delay(10000);
}
 
void loop() {
  // put your main code here, to run repeatedly:
  
 Serial.print("Enter the string:");
while(1){

    if(Serial.available()>0){
      int k=0;
  
      string=Serial.readString();
      Serial.print("\n");
  
    while(string[k]){
      Serial.print(string[k]);
      Serial.print("\t");
      k++;
      delay(1000);
    }
    break;
    }
 }

 
}
