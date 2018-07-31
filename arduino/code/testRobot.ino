char letra;

int pin1 = 9; // motor A 
int pin2 = 8; // MOtor A 


int pin3 = 7; // motor b
int pin4 = 6; // motor b 

int pin5 = 5; // motor c
int pin6 = 4; // motor c 

int pin7 = 3;  // motor d 
int pin8 = 2; // motor d 



void setup() {
 Serial.begin(9600); // serial comunicacao
 pinMode(pin1,OUTPUT); // MOTOR A 
 pinMode(pin2,OUTPUT);  // MOTOR A 
 pinMode(pin3,OUTPUT);   // MOTOR B
 pinMode(pin4,OUTPUT);  // MOTOR B
 pinMode(pin5,OUTPUT);
 pinMode(pin6,OUTPUT);
 pinMode(pin7,OUTPUT);
 pinMode(pin8,OUTPUT);
 Serial.println("BigRobot RUNNING...");

}

void loop() {
  letra = Serial.read();
  switch(letra){
    case 'w': // Motor A
    Serial.println("MOTOR A,B,C e D RUN ");
    digitalWrite(pin1,HIGH);       // Motor A 
    digitalWrite(pin2,LOW);       // Motor A 
    digitalWrite(pin3,HIGH);      // Motor B
    digitalWrite(pin4,LOW);       // Motor B
    digitalWrite(pin5,HIGH);       // Motor C 
    digitalWrite(pin6,LOW);       // Motor C
    digitalWrite(pin7,HIGH);      // Motor D
    digitalWrite(pin8,LOW);       // Motor D
    
    break;
    case 's':
    Serial.println("MOTOR A,B,C e D  BACK ");   
    digitalWrite(pin1,LOW);  // Motor A 
    digitalWrite(pin2,HIGH);  // Motor A
    digitalWrite(pin3,LOW);   // MOtor B
    digitalWrite(pin4,HIGH);    // MOtor B
    digitalWrite(pin5,LOW);  // Motor C
    digitalWrite(pin6,HIGH);  // Motor C
    digitalWrite(pin7,LOW);   // MOtor D
    digitalWrite(pin8,HIGH);    // MOtor D
    break;
    case 'p':
    Serial.println("MOTOR A and B STOP ");
    digitalWrite(pin1,LOW); // Motor A 
    digitalWrite(pin2,LOW); // Motor A 
    digitalWrite(pin3,LOW); // MOtor B 
    digitalWrite(pin4,LOW);  // MOtor B
    digitalWrite(pin5,LOW); // Motor A 
    digitalWrite(pin6,LOW); // Motor A 
    digitalWrite(pin7,LOW); // MOtor B 
    digitalWrite(pin8,LOW);  // MOtor B    
    break;

    case 'd':
    Serial.println("MOTOR 3 DIRECAO: (DIREITA)");
    digitalWrite(pin1,LOW);
    digitalWrite(pin2,HIGH);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin4,LOW);
    digitalWrite(pin5,LOW);
    digitalWrite(pin6,HIGH);
    digitalWrite(pin7,HIGH);
    digitalWrite(pin8,LOW);
    
    break;
    
    case 'a':
     Serial.println("MOTOR 3 DIRECAO: (ESQUERDA");
     digitalWrite(pin1,HIGH);
     digitalWrite(pin2,LOW);
     digitalWrite(pin3,LOW);
     digitalWrite(pin4,HIGH);
     digitalWrite(pin5,HIGH);
     digitalWrite(pin6,LOW);
     digitalWrite(pin7,LOW);
     digitalWrite(pin8,HIGH);
     break;

    case 'e': // CASO 1 
     Serial.println("CASO 1 [0,0,0,0]");
     digitalWrite(pin1,LOW);
     digitalWrite(pin2,LOW);
     digitalWrite(pin3,LOW);
     digitalWrite(pin4,LOW);
     digitalWrite(pin5,LOW);
     digitalWrite(pin6,LOW);
     digitalWrite(pin7,LOW);
     digitalWrite(pin8,LOW);
     break;
    case 'r': // CASO 2
     Serial.println("CASO 2 [0,0,0,1]");
     digitalWrite(pin1,LOW); // Motor 1
     digitalWrite(pin2,LOW); // Motor 1
     digitalWrite(pin3,LOW); // Motor 2
     digitalWrite(pin4,LOW); // Motor 2
     digitalWrite(pin5,LOW); // Motor 3
     digitalWrite(pin6,LOW); // Motor 3
     digitalWrite(pin7,HIGH); // Motor 4
     digitalWrite(pin8,LOW); // Motor 4
     break;    
   case 't': // CASO 3
     Serial.println("CASO 3 [0,0,1,0]");
     digitalWrite(pin1,LOW); // Motor 1
     digitalWrite(pin2,LOW); // Motor 1
     digitalWrite(pin3,LOW); // Motor 2
     digitalWrite(pin4,LOW); // Motor 2
     digitalWrite(pin5,HIGH); // Motor 3
     digitalWrite(pin6,LOW); // Motor 3
     digitalWrite(pin7,LOW); // Motor 4
     digitalWrite(pin8,LOW); // Motor 4
     break;    
    case 'y': // CASO 4
     Serial.println("CASO 4 [0,0,1,1]");
     digitalWrite(pin1,LOW); // Motor 1
     digitalWrite(pin2,LOW); // Motor 1
     digitalWrite(pin3,LOW); // Motor 2
     digitalWrite(pin4,LOW); // Motor 2
     digitalWrite(pin5,HIGH); // Motor 3
     digitalWrite(pin6,LOW); // Motor 3
     digitalWrite(pin7,HIGH); // Motor 4
     digitalWrite(pin8,LOW); // Motor 4
     break;    
    case 'u': // CASO 5
     Serial.println("CASO 5 [0,1,0,0]");
     digitalWrite(pin1,LOW); // Motor 1
     digitalWrite(pin2,LOW); // Motor 1
     digitalWrite(pin3,HIGH); // Motor 2
     digitalWrite(pin4,LOW); // Motor 2
     digitalWrite(pin5,LOW); // Motor 3
     digitalWrite(pin6,LOW); // Motor 3
     digitalWrite(pin7,LOW); // Motor 4
     digitalWrite(pin8,LOW); // Motor 4
     break;    
    case 'i': // CASO 6
     Serial.println("CASO 6 [0,1,0,1]");
     digitalWrite(pin1,LOW); // Motor 1
     digitalWrite(pin2,LOW); // Motor 1
     digitalWrite(pin3,HIGH); // Motor 2
     digitalWrite(pin4,LOW); // Motor 2
     digitalWrite(pin5,LOW); // Motor 3
     digitalWrite(pin6,LOW); // Motor 3
     digitalWrite(pin7,HIGH); // Motor 4
     digitalWrite(pin8,LOW); // Motor 4
     break;    
    case 'o': // CASO 7
     Serial.println("CASO 7 [0,1,1,0]");
     digitalWrite(pin1,LOW); // Motor 1
     digitalWrite(pin2,LOW); // Motor 1
     digitalWrite(pin3,HIGH); // Motor 2
     digitalWrite(pin4,LOW); // Motor 2
     digitalWrite(pin5,HIGH); // Motor 3
     digitalWrite(pin6,LOW); // Motor 3
     digitalWrite(pin7,LOW); // Motor 4
     digitalWrite(pin8,LOW); // Motor 4
     break;         
    case 'b': // CASO 8
     Serial.println("CASO 8 [0,1,1,1]");
     digitalWrite(pin1,LOW);  // Motor 1
     digitalWrite(pin2,LOW);  // Motor 1
     digitalWrite(pin3,HIGH); // Motor 2
     digitalWrite(pin4,LOW);  // Motor 2
     digitalWrite(pin5,HIGH); // Motor 3
     digitalWrite(pin6,LOW);  // Motor 3
     digitalWrite(pin7,HIGH);  // Motor 4
     digitalWrite(pin8,LOW);  // Motor 4
     break;         

   case 'z': // CASO 9
     Serial.println("CASO 9 [1,0,0,0]");
     digitalWrite(pin1,HIGH);  // Motor 1
     digitalWrite(pin2,LOW);  // Motor 1
     digitalWrite(pin3,LOW); // Motor 2
     digitalWrite(pin4,LOW); // Motor 2
     digitalWrite(pin5,LOW); // Motor 3
     digitalWrite(pin6,LOW); // Motor 3
     digitalWrite(pin7,LOW); // Motor 4
     digitalWrite(pin8,LOW); // Motor 4
     break;         
    case 'x': // CASO 10
     Serial.println("CASO 10 [1,0,0,1]");
     digitalWrite(pin1,HIGH);  // Motor 1
     digitalWrite(pin2,LOW);  // Motor 1
     digitalWrite(pin3,LOW); // Motor 2
     digitalWrite(pin4,LOW); // Motor 2
     digitalWrite(pin5,LOW); // Motor 3
     digitalWrite(pin6,LOW); // Motor 3
     digitalWrite(pin7,HIGH); // Motor 4
     digitalWrite(pin8,LOW); // Motor 4
     break;       
    case 'c': // CASO 11
     Serial.println("CASO 11 [1,0,1,0]");
     digitalWrite(pin1,HIGH);  // Motor 1
     digitalWrite(pin2,LOW);  // Motor 1
     digitalWrite(pin3,LOW); // Motor 2
     digitalWrite(pin4,LOW); // Motor 2
     digitalWrite(pin5,HIGH); // Motor 3
     digitalWrite(pin6,LOW); // Motor 3
     digitalWrite(pin7,LOW); // Motor 4
     digitalWrite(pin8,LOW); // Motor 4
     break;               
    case 'v': // CASO 12
     Serial.println("CASO 12 [1,0,1,1]");
     digitalWrite(pin1,HIGH);  // Motor 1
     digitalWrite(pin2,LOW);  // Motor 1
     digitalWrite(pin3,LOW); // Motor 2
     digitalWrite(pin4,LOW); // Motor 2
     digitalWrite(pin5,HIGH); // Motor 3
     digitalWrite(pin6,LOW); // Motor 3
     digitalWrite(pin7,LOW); // Motor 4
     digitalWrite(pin8,LOW); // Motor 4
     break;                    
    case 'n': // CASO 13
     Serial.println("CASO 13 [1,1,0,0]");
     digitalWrite(pin1,HIGH);  // Motor 1
     digitalWrite(pin2,LOW);  // Motor 1
     digitalWrite(pin3,HIGH); // Motor 2
     digitalWrite(pin4,LOW); // Motor 2
     digitalWrite(pin5,LOW); // Motor 3
     digitalWrite(pin6,LOW); // Motor 3
     digitalWrite(pin7,LOW); // Motor 4
     digitalWrite(pin8,LOW); // Motor 4
     break;          

    case 'm': // CASO 14
     Serial.println("CASO 14 [1,1,0,1]");
     digitalWrite(pin1,HIGH);  // Motor 1
     digitalWrite(pin2,LOW);  // Motor 1
     digitalWrite(pin3,HIGH); // Motor 2
     digitalWrite(pin4,LOW); // Motor 2
     digitalWrite(pin5,LOW); // Motor 3
     digitalWrite(pin6,LOW); // Motor 3
     digitalWrite(pin7,HIGH); // Motor 4
     digitalWrite(pin8,LOW); // Motor 4
     break;           
    case 'f': // CASO 15
     Serial.println("CASO 15 [1,1,1,0]");
     digitalWrite(pin1,HIGH);  // Motor 1
     digitalWrite(pin2,LOW);  // Motor 1
     digitalWrite(pin3,HIGH); // Motor 2
     digitalWrite(pin4,LOW); // Motor 2
     digitalWrite(pin5,HIGH); // Motor 3
     digitalWrite(pin6,LOW); // Motor 3
     digitalWrite(pin7,LOW); // Motor 4
     digitalWrite(pin8,LOW); // Motor 4
     break;                  
    case 'g': // CASO 16
     Serial.println("CASO 16 [1,1,1,1]");
     digitalWrite(pin1,HIGH);  // Motor 1
     digitalWrite(pin2,LOW);  // Motor 1
     digitalWrite(pin3,HIGH); // Motor 2
     digitalWrite(pin4,LOW); // Motor 2
     digitalWrite(pin5,HIGH); // Motor 3
     digitalWrite(pin6,LOW); // Motor 3
     digitalWrite(pin7,HIGH); // Motor 4
     digitalWrite(pin8,LOW); // Motor 4
     break;                       
  }

}
