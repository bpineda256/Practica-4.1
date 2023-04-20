#define Let A3
#define FOCO 4
int lectura;
boolean ACTIVADO=0;
void setup() {
pinMode (Let, INPUT);
Serial.begin(9600);
pinMode (FOCO, OUTPUT);

}

void loop() {
lectura = analogRead(FOCO);
Serial.println(lectura);
delay(100);
if (lectura < 190){
digitalWrite(FOCO,HIGH);
 }
if(lectura > 200)
 digitalWrite(FOCO,LOW);
}




