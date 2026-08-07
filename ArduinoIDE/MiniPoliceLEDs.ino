const int Led9 = 9;
const int Led8 = 8;

void setup() {
  pinMode(Led9, OUTPUT);
  pinMode(Led8, OUTPUT);
}

void loop() {

  digitalWrite(Led9, HIGH);
  delay(100);
  digitalWrite(Led9, LOW);
  delay(100);
  digitalWrite(Led9, HIGH);
  delay(100);
  digitalWrite(Led9, LOW);
  delay(100); 


  digitalWrite(Led8, HIGH);
  delay(100);
  digitalWrite(Led8, LOW);
  delay(100); 
  digitalWrite(Led8, HIGH);
  delay(100);
  digitalWrite(Led8, LOW);
  delay(100);                   //закончились мигать по очереди 

  
  digitalWrite(Led9, HIGH);
  digitalWrite(Led8, HIGH);
  delay(100);                  //Включились обое 
  digitalWrite(Led9, LOW);
  digitalWrite(Led8, LOW);
  delay(900);
  digitalWrite(Led9, HIGH);
  digitalWrite(Led8, HIGH);
  delay(100);
  digitalWrite(Led9, LOW);
  digitalWrite(Led8, LOW);
  delay(100);
  digitalWrite(Led9, HIGH);
  digitalWrite(Led8, HIGH);
  delay(100);                            //мигают обое одновременно
  digitalWrite(Led9, LOW);
  digitalWrite(Led8, LOW);    
  delay(2000);                                 //выключились
}


//const int (delay)(
