#include <Arduino.h>


int conmutador =0;
int uni = 0;
int dec = 0;
int cen = 0;
int mil = 0;






void numuno(){
digitalWrite(23, LOW);
digitalWrite(22, HIGH);
digitalWrite(32, HIGH);
digitalWrite(33, LOW);
digitalWrite(25, LOW);
digitalWrite(26, LOW);
digitalWrite(27, LOW);
delay(1000);

}

void numdos(){
digitalWrite(23, HIGH);
digitalWrite(22, HIGH);
digitalWrite(32, LOW);
digitalWrite(33, HIGH);
digitalWrite(25, HIGH);
digitalWrite(26, LOW);
digitalWrite(27, HIGH);
delay(1000);
}

void numtres(){
digitalWrite(23, HIGH);
digitalWrite(22, HIGH);
digitalWrite(32, HIGH);
digitalWrite(33, HIGH);
digitalWrite(25, LOW);
digitalWrite(26, LOW);
digitalWrite(27, HIGH);
delay(1000);
}

void numcuatro(){
digitalWrite(23, LOW);
digitalWrite(22, HIGH);
digitalWrite(32, HIGH);
digitalWrite(33, LOW);
digitalWrite(25, LOW);
digitalWrite(26, HIGH);
digitalWrite(27, HIGH);
delay(1000);
}
void numcinco(){
digitalWrite(23, HIGH);
digitalWrite(22, LOW);
digitalWrite(32, HIGH);
digitalWrite(33, HIGH);
digitalWrite(25, LOW);
digitalWrite(26, HIGH);
digitalWrite(27, HIGH);
delay(1000);
}

void numseis(){
digitalWrite(23, LOW);
digitalWrite(22, LOW);
digitalWrite(32, HIGH);
digitalWrite(33, HIGH);
digitalWrite(25, HIGH);
digitalWrite(26, HIGH);
digitalWrite(27, HIGH);
delay(1000);
}

void numsiete(){
digitalWrite(23, HIGH);
digitalWrite(22, HIGH);
digitalWrite(32, HIGH);
digitalWrite(33, LOW);
digitalWrite(25, LOW);
digitalWrite(26, LOW);
digitalWrite(27, LOW);
delay(1000);

}

void numocho(){
digitalWrite(23, HIGH);
digitalWrite(22, HIGH);
digitalWrite(32, HIGH);
digitalWrite(33, HIGH);
digitalWrite(25, HIGH);
digitalWrite(26, HIGH);
digitalWrite(27, HIGH);
delay(1000);
}

void numnueve(){
digitalWrite(23, HIGH);
digitalWrite(22, HIGH);
digitalWrite(32, HIGH);
digitalWrite(33, LOW);
digitalWrite(25, LOW);
digitalWrite(26, HIGH);
digitalWrite(27, HIGH);
delay(1000);
}
void numzero(){
digitalWrite(23, HIGH);
digitalWrite(22, HIGH);
digitalWrite(32, HIGH);
digitalWrite(33, HIGH);
digitalWrite(25, HIGH);
digitalWrite(26, HIGH);
digitalWrite(27, LOW);
delay(1000);
}



void setup() {
  
      pinMode(23, OUTPUT);
      pinMode(22, OUTPUT);
      pinMode(32, OUTPUT);
      pinMode(33, OUTPUT);
      pinMode(25, OUTPUT);
      pinMode(26, OUTPUT);
      pinMode(27, OUTPUT);
      pinMode(5, OUTPUT);
      pinMode(18, OUTPUT);
      pinMode(19, OUTPUT);
      pinMode(21, OUTPUT);

     
     
}

void loop() {


if (conmutador==0){

digitalWrite(5,HIGH);
digitalWrite(18,LOW);
digitalWrite(19,LOW);
digitalWrite(21,LOW);

if(uni==10){
uni=0;
dec++;
}

switch (uni) {
    case 0:
      numzero();
      break;
    case 1:
      numuno();
      break;
    case 2:
      numdos();
      break;
    case 3:
      numtres();
      break;
    case 4:
    numcuatro();
    break;
    case 5:
    numcinco();
    break;
    case 6:
    numseis();
    break;
    case 7:
    numsiete();
    break;
    case 8:
    numocho();
    break;
    case 9:
    numnueve();
    break;

}
uni++;

 conmutador=1; 
}

if (conmutador==1){

digitalWrite(5,LOW);
digitalWrite(18,HIGH);
digitalWrite(19,LOW);
digitalWrite(21,LOW);
if (dec==10){
dec=0;
cen++;
}
switch (dec) {
    case 0:
      numzero();
      break;
    case 1:
      numuno();
      break;
    case 2:
      numdos();
      break;
    case 3:
      numtres();
      break;
    case 4:
    numcuatro();
    break;
    case 5:
    numcinco();
    break;
    case 6:
    numseis();
    break;
    case 7:
    numsiete();
    break;
    case 8:
    numocho();
    break;
    case 9:
    numnueve();
    break;
  conmutador=2;
}
}

if (conmutador==2){

digitalWrite(5,LOW);
digitalWrite(18,LOW);
digitalWrite(19,HIGH);
digitalWrite(21,LOW);


if (cen==10){
cen=0;
mil++;

}
switch (cen) {
    case 0:
      numzero();
      break;
    case 1:
      numuno();
      break;
    case 2:
      numdos();
      break;
    case 3:
      numtres();
      break;
    case 4:
    numcuatro();
    break;
    case 5:
    numcinco();
    break;
    case 6:
    numseis();
    break;
    case 7:
    numsiete();
    break;
    case 8:
    numocho();
    break;
    case 9:
    numnueve();
    break;

  conmutador = 3;

}
}


if(conmutador==3){

digitalWrite(5,LOW);
digitalWrite(18,LOW);
digitalWrite(19,LOW);
digitalWrite(21,HIGH);

if (mil==10){
uni=0;
dec=0;
cen=0;
mil=0;
}
switch (mil) {
    case 0:
      numzero();
      break;
    case 1:
      numuno();
      break;
    case 2:
      numdos();
      break;
    case 3:
      numtres();
      break;
    case 4:
    numcuatro();
    break;
    case 5:
    numcinco();
    break;
    case 6:
    numseis();
    break;
    case 7:
    numsiete();
    break;
    case 8:
    numocho();
    break;
    case 9:
    numnueve();
    break;

  conmutador=0;
}
}
}

