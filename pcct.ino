#include <Wire.h>
#include <MPU6050_tockn.h>

MPU6050 mpu(Wire);
MPU6050 mpu2(Wire);
MPU6050 mpu3(Wire);


void TCA9548A(uint8_t bus){
  Wire.beginTransmission(0x70); 
  Wire.write(1 << bus);         
  Wire.endTransmission();
}

void setup() {
  Serial.begin(115200);
  pinMode(10,OUTPUT);// buzzer
  pinMode(2,OUTPUT);//verde
  pinMode(3,OUTPUT);//amarelo
  pinMode(4,OUTPUT);//vermelho

  
  Wire.begin();

  
  TCA9548A(4);
  mpu.begin();
  mpu.calcGyroOffsets(true);

  TCA9548A(6);
  mpu2.begin();
  mpu2.calcGyroOffsets(true);

  TCA9548A(5);
  mpu3.begin();
  mpu3.calcGyroOffsets(true);

  digitalWrite(10,1);
  delay(200);
  digitalWrite(10,0);
  

  
}
unsigned long int aux=0;
void loop() {
  
  
 

  
  
  TCA9548A(4);
  mpu.update();
  
  


 
  TCA9548A(6);
  mpu2.update();
  

  TCA9548A(5);
  mpu3.update();
  
  

  TCA9548A(8);
Serial.print("angleX1 : ");
Serial.print(mpu.getAngleX());
Serial.print("      ");
Serial.print("angleY1 : ");
Serial.print(mpu.getAngleY());
Serial.print("      ");
Serial.print("angleZ1 : ");
Serial.print(mpu.getAngleZ());
Serial.print("    |||    ");
Serial.print("angleX2 : ");
Serial.print(mpu2.getAngleX());
Serial.print("      ");
Serial.print("angleY2 : ");
Serial.print(mpu2.getAngleY());
Serial.print("      ");
Serial.print("angleZ3 : ");
Serial.print(mpu2.getAngleZ());
Serial.print("    |||    ");
Serial.print("angleX3 : ");
Serial.print(mpu3.getAngleX());
Serial.print("      ");
Serial.print("angleY3 : ");
Serial.print(mpu3.getAngleY());
Serial.print("      ");
Serial.print("angleZ3 : ");
Serial.print(mpu3.getAngleZ());




Serial.println(); // Adiciona uma linha em branco entre cada conjunto de dados




  if(mpu.getAngleX()<=24 && mpu.getAngleY()>=30){
    digitalWrite(2,1);
  }
  else{
    digitalWrite(2,0);
  }

  if(mpu2.getAngleX()>=-18 && mpu2.getAngleY()>24){
    digitalWrite(3,1);
  }
  else{
    digitalWrite(3,0);
  }
  if(mpu3.getAngleX()>-3 && mpu3.getAngleY()>=-65){
    digitalWrite(4,1);
  }
  else{
    digitalWrite(4,0);
  }

  if( digitalRead(2)==1 && digitalRead(3)==1  && digitalRead(4)==1){

    if(aux==0){
      aux=millis();
    }

    if(millis()>=aux+5000){
      digitalWrite(10,1);
      aux=millis();
    }
    }
    else{
      digitalWrite(10,0);
      aux=0;
    }
  if(digitalRead(10)==1){
  }


}