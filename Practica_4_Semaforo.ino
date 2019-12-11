  // put your setup code here, to run once:
  int verde=5;     //definimos el valor del pin para el led rojo
  int amarillo=4;  //definimos el valor del pin para el led amarillo
  int rojo=0;      //definimos el valor del pin para el led verde
 
 void cverde(){
  digitalWrite(verde, HIGH);
  delay(3500);
  digitalWrite(verde, LOW);
  delay(500);
  for(int i=0; i<=1;i++)
  {
  digitalWrite(verde, HIGH);
  delay(500);
  digitalWrite(verde, LOW);
  delay(500);
  }
  }

  void camarillo(){
  digitalWrite(amarillo, HIGH);
  delay(1500);
  digitalWrite(amarillo, LOW);
  delay(500);
  /*for(int i=0; i<=2;i++)
  {
  digitalWrite(amarillo, HIGH);
  delay(500);
  digitalWrite(amarillo, LOW);
  delay(500);
  }*/
  }
  void crojo(){
  digitalWrite(rojo, HIGH);
  delay(2500);
  digitalWrite(rojo, LOW);
  delay(500);
  }
  void setup() {

  pinMode(verde,OUTPUT);
  pinMode(amarillo,OUTPUT);
  pinMode(rojo,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  cverde();
  camarillo();
  crojo();
  

}
