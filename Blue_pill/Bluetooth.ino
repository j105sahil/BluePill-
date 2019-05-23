//PROGRAM FOR BLUETOOTH INTERFACE WITH STM32F103C8
//CIRCUIT DIGEST
//Pramoth Thangavel
 
const int pinout = PC13; // declare pinout with int data type and pin value
 
String inputdata="";
 
void setup()
{
    Serial.begin(9600);                      //Sets the baud rate for bluetooth pins                      
    pinMode(pinout, OUTPUT);                  //Sets digital pin PC13 as output pin for led
    Serial.print("HELLO WORLD\n");
    Serial.print("BLUETOOTH WITH STM32\n");
}
 
void loop()
{
   if(Serial.available() > 0)      // Send data only when you receive data:
   {
      inputdata = Serial.readString();        //Read the incoming data & store into data
 
           int k=0;
    while(inputdata[k] && k<25){
    
   Serial.print("\n");
   
   Serial.print(inputdata[k]);
   
   if(inputdata[k]>='A' && inputdata[k]<='Z')
    digitalWrite(pinout, LOW);
   else
    digitalWrite(pinout, HIGH);
   k++;
   delay(1000);
  }
   }
}
