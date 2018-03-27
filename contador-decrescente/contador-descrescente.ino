int ledA = 7;
int ledB = 8;
int ledC = 9;
int ledD = 10;
int ledE = 11;
int ledF = 12;
int ledG = 13;


void setup(){

pinMode(ledA, OUTPUT);
pinMode(ledB, OUTPUT);
pinMode(ledC, OUTPUT);
pinMode(ledD, OUTPUT);
pinMode(ledE, OUTPUT);
pinMode(ledF, OUTPUT);
pinMode(ledG, OUTPUT);


}
void loop(){
numero0();
numero1();
numero2();
numero3();
numero4();
numero5();
numero6();
numero7();
numero8();
numero9();
}


void numero0(){
digitalWrite(ledA, LOW);
digitalWrite(ledB, HIGH);
digitalWrite(ledC, HIGH);
digitalWrite(ledD,HIGH);
digitalWrite(ledE, HIGH);
digitalWrite(ledF, HIGH);
digitalWrite(ledG, HIGH);
delay(1000);


}
void numero1(){
digitalWrite(ledA, LOW);
digitalWrite(ledB, LOW);
digitalWrite(ledC, HIGH);
digitalWrite(ledD,HIGH);
digitalWrite(ledE, LOW);
digitalWrite(ledF, LOW);
digitalWrite(ledG,LOW);
delay(1000);

}


void numero2(){
digitalWrite(ledA, HIGH);
digitalWrite(ledB, HIGH);
digitalWrite(ledC, HIGH);
digitalWrite(ledD,LOW);
digitalWrite(ledE, HIGH);
digitalWrite(ledF, HIGH);
digitalWrite(ledG,LOW);
delay(1000);
}

void numero3(){
digitalWrite(ledA, HIGH);
digitalWrite(ledB, HIGH);
digitalWrite(ledC, HIGH);
digitalWrite(ledD,HIGH);
digitalWrite(ledE, HIGH);
digitalWrite(ledF, LOW);
digitalWrite(ledG,LOW);
delay(1000);
}

void numero4(){
digitalWrite(ledA, HIGH);
digitalWrite(ledB,LOW);
digitalWrite(ledC, HIGH);
digitalWrite(ledD,HIGH);
digitalWrite(ledE, LOW);
digitalWrite(ledF, LOW);
digitalWrite(ledG,HIGH);
delay(1000);
}
void numero5(){
digitalWrite(ledA, HIGH);
digitalWrite(ledB, HIGH);
digitalWrite(ledC, LOW);
digitalWrite(ledD,HIGH);
digitalWrite(ledE, HIGH);
digitalWrite(ledF, LOW);
digitalWrite(ledG,HIGH);
delay(1000);
}

void numero6(){
digitalWrite(ledA, HIGH);
digitalWrite(ledB, HIGH);
digitalWrite(ledC, LOW);
digitalWrite(ledD,HIGH);
digitalWrite(ledE, HIGH);
digitalWrite(ledF, HIGH);
digitalWrite(ledG,HIGH);
delay(1000);

}

void numero7(){
digitalWrite(ledA, LOW);
digitalWrite(ledB, HIGH);
digitalWrite(ledC, HIGH);
digitalWrite(ledD,HIGH);
digitalWrite(ledE, LOW);
digitalWrite(ledF, LOW);
digitalWrite(ledG, LOW);
delay(1000);
}

void numero8(){
digitalWrite(ledA, HIGH);
digitalWrite(ledB, HIGH);
digitalWrite(ledC, HIGH);
digitalWrite(ledD,HIGH);
digitalWrite(ledE, HIGH);
digitalWrite(ledF, HIGH);
digitalWrite(ledG, HIGH);
delay(1000);
}

void numero9(){
digitalWrite(ledA, HIGH);
digitalWrite(ledB, HIGH);
digitalWrite(ledC, HIGH);
digitalWrite(ledD,HIGH);
digitalWrite(ledE, HIGH);
digitalWrite(ledF, LOW);
digitalWrite(ledG, HIGH);
delay(1000);
}







