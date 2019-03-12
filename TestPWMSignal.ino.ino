//declare variables
unsigned short duty0 = 15000;
int laser_duracion = 100;

void setup() {
 
}

void loop() {
  ancho_de_pulso_function(laser_duracion);
}


void ancho_de_pulso_function (int laser_duracion){

  int ancho_pulso_ind = floor((laser_duracion -10.)/320.*64.);

  int val1 = ancho_pulso_ind/2;
  int res1 = ancho_pulso_ind%2;

  int val2 = val1/2;
  int res2 = val1%2;

  int val3 = val2/2;
  int res3 = val2%2;

  int val4 = val3/2;
  int res4 = val3%2;

  int val5 = val4/2;
  int res5 = val4%2;

  int val6 = val5/2;
  int res6 = val5%2;

  if (res6 == 0){
    digitalWrite(33, LOW);
    
  }else{
    Serial.print('1');
    digitalWrite(33, HIGH);
  }

  if (res5 == 0){
    digitalWrite(31, LOW);
  }else{
    Serial.print('1');
    digitalWrite(31, HIGH);
  }

  if (res4 == 0){
    digitalWrite(29, LOW);
  }else{
    Serial.print('1');
    digitalWrite(29, HIGH);
  }

  if (res3 == 0){
    digitalWrite(27, LOW);
  }else{
    Serial.print('1');
    digitalWrite(27, HIGH);
  }

  if (res2 == 0){
    digitalWrite(25, LOW);
  }else{
    Serial.print('1');
    digitalWrite(25, HIGH);
  }

  if (res1 == 0){
    digitalWrite(23, LOW);
  }else{
    Serial.print('1');
    digitalWrite(23, HIGH);
  }
  
}
