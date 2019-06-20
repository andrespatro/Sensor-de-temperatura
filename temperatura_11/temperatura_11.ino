
int sensor1 = A3;          // Este es el pin para el sensor2 de temperatura.
int valpoten = 0;          // Es el valor que le e asignado al potenciometro.
float temp1;               // Float donde guardaremos el valor de la temperatura.
float temp2;               // Float donde guardaremos el valor de la temperatura.
int valor1;                // Donde guardaremos el valor del sensor1.
int valor2;                // Donde guardaremos el valor del sensor2.
int led2 = 10;             // Pin donde colocaremos el led2 verde.
int led3 = 11;             // Pin donde colocaremos el led3 rojo.
int tempC = 0;            //  Es el valor de la temperatura que le e asignado.

int led4 = 12;            // Pines de los led del display1.
int led5 = 2;
int led6 = 3;
int led7 = 4;
int led8 = 5;
int led9 = 6;
int led10 = 7;

int led11 = 8;            // pines de los led del disply2.
int led12 = 13;
int led13 = A1;
int led14 = A2;
int led15 = A4;
int led16 = A5;
int led17 = 9;
int decenas;
int unidades;

#define poten A0         // Numerazion del pin para el potenciometro.

void setup()
{
  // Entradas y salidas  de los elementos

  pinMode(led2, OUTPUT);
  Serial.begin(9600);
  analogReference(DEFAULT);     // Configuramos la tension de referencia utilizada para la entrada analogica.

  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(led13, OUTPUT);
  pinMode(led14, OUTPUT);
  pinMode(led15, OUTPUT);
  pinMode(led16, OUTPUT);
  pinMode(led17, OUTPUT);

}

void loop()
{
  valor1 = analogRead(sensor1);                      // En esta linea la funcion valor1 leera y guardara el valor que tiene el pin del potenciometro.
  digitalWrite(led2, LOW);
  temp1 = 103.0;//(((5.0 * valor1) * 100.0) / 1023.0);       // En esta linea coge el valor que tiene valor1 y lo conbierte en temperatura en grados.
  Serial.print("temp1=");                            // En esta linea mediante un serial print me manda el mensage de temp.
  Serial.println(temp1);                             // En esta linea me printea la temperatura que meda en temp.
  
  tempC = map(valpoten, 0, 1023, 10, 50);            // En esta linea Guardamos la conbersion que hacemos con el valor que tenemos valpoten.                          
  valpoten = analogRead(poten);                      // En esta linea guardamos el valor que hay en el pin poten.
  
   if (temp1>99)
 {
  temp1= 99.0;
 }
             

   if (temp1 > tempC)
  {
    digitalWrite(led3, HIGH);
  }
  else
  {
    digitalWrite(led3, LOW);
  }

   decenas = temp1 / 10;
   unidades = temp1 - decenas * 10;
      
 switch (decenas)
  {
    case 0:
      displayA_0();
      break;

    case 1:
      displayA_1();
      break;

    case 2:
      displayA_2();
      break;

    case 3:
      displayA_3();
      break;

    case 4:
      displayA_4();
      break;

    case 5:
      displayA_5();
      break;

    case 6:
      displayA_6();
      break;

    case 7:
      displayA_7();
      break;

    case 8:
      displayA_8();
      break;

    case 9:
      displayA_9();
      break;
  }
  switch (unidades)
  {

    case 0:
      displayB_0();
      break;

    case 1:
      displayB_1();
      break;

    case 2:
      displayB_2();
      break;

    case 3:
      displayB_3();
      break;

    case 4:
      displayB_4();
      break;

    case 5:
      displayB_5();
      break;

    case 6:
      displayB_6();
      break;

    case 7:
      displayB_7();
      break;

    case 8:
      displayB_8();
      break;

    case 9:
      displayB_9();
      break;
  }
  
  delay(2000); 

  valor2 = analogRead(sensor1);
  digitalWrite(led2, HIGH);
  temp2 = 36.0;//(((5.0 * valor2) * 100.0) / 1023.0);
  Serial.print("temp2=");
  Serial.println(temp2);
 
  valpoten = analogRead(poten);                      // En esta linea guardamos el valor que hay en el pin poten.
  tempC = map(valpoten, 0, 1023, 10, 50);            // En esta linea Guardamos la conbersion que hacemos con el valor que tenemos valpoten.

   if (temp2>99)
 {
  temp2=99;
 }
  
  if (temp2 > tempC)
  {
    digitalWrite(led3, HIGH);
  }
  else
  {
    digitalWrite(led3, LOW);
  }

   decenas = temp2 / 10;
   unidades = temp2 - decenas * 10;

  switch (decenas)
  {
    case 0:
      displayA_0();
      break;

    case 1:
      displayA_1();
      break;

    case 2:
      displayA_2();
      break;

    case 3:
      displayA_3();
      break;

    case 4:
      displayA_4();
      break;

    case 5:
      displayA_5();
      break;

    case 6:
      displayA_6();
      break;

    case 7:
      displayA_7();
      break;

    case 8:
      displayA_8();
      break;

    case 9:
      displayA_9();
      break;
  }
  switch (unidades)
  {

    case 0:
      displayB_0();
      break;

    case 1:
      displayB_1();
      break;

    case 2:
      displayB_2();
      break;

    case 3:
      displayB_3();
      break;

    case 4:
      displayB_4();
      break;

    case 5:
      displayB_5();
      break;

    case 6:
      displayB_6();
      break;

    case 7:
      displayB_7();
      break;

    case 8:
      displayB_8();
      break;

    case 9:
      displayB_9();
      break;
  }
   delay(2000); 

}

void displayA_0(void)
{
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, HIGH);
}
void displayA_1(void)
{
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
}
void displayA_2(void)
{
  digitalWrite(led4, HIGH);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, LOW);
}
void displayA_3(void)
{
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, LOW);
}
void displayA_4(void)
{
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
}
void displayA_5(void)
{
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
}
void displayA_6(void)
{
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
}
void displayA_7(void)
{
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
}
void displayA_8(void)
{
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);

}
void displayA_9(void)
{
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
}
void displayB_0(void)
{
  digitalWrite(led11, HIGH);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
  digitalWrite(led14, LOW);
  digitalWrite(led15, LOW);
  digitalWrite(led16, LOW);
  digitalWrite(led17, LOW);

}
void displayB_1(void)
{
  digitalWrite(led11, HIGH);
  digitalWrite(led12, HIGH);
  digitalWrite(led13, HIGH);
  digitalWrite(led14, LOW);
  digitalWrite(led15, HIGH);
  digitalWrite(led16, HIGH);
  digitalWrite(led17, LOW);

}
void displayB_2(void)
{
  digitalWrite(led11, LOW);
  digitalWrite(led12, HIGH);
  digitalWrite(led13, LOW);
  digitalWrite(led14, LOW);
  digitalWrite(led15, LOW);
  digitalWrite(led16, LOW);
  digitalWrite(led17, HIGH);

}
void displayB_3(void)
{
  digitalWrite(led11, LOW);
  digitalWrite(led12, HIGH);
  digitalWrite(led13, LOW);
  digitalWrite(led14, LOW);
  digitalWrite(led15, HIGH);
  digitalWrite(led16, LOW);
  digitalWrite(led17, LOW);

}
void displayB_4(void)
{
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, HIGH);
  digitalWrite(led14, LOW);
  digitalWrite(led15, HIGH);
  digitalWrite(led16, HIGH);
  digitalWrite(led17, LOW);

}
void displayB_5(void)
{
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
  digitalWrite(led14, HIGH);
  digitalWrite(led15, HIGH);
  digitalWrite(led16, LOW);
  digitalWrite(led17, LOW);
}
void displayB_6(void)
{
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
  digitalWrite(led14, HIGH);
  digitalWrite(led15, LOW);
  digitalWrite(led16, LOW);
  digitalWrite(led17, LOW);

}
void displayB_7(void)
{
  digitalWrite(led11, HIGH);
  digitalWrite(led12, HIGH);
  digitalWrite(led13, LOW);
  digitalWrite(led14, LOW);
  digitalWrite(led15, HIGH);
  digitalWrite(led16, HIGH);
  digitalWrite(led17, LOW);

}
void displayB_8(void)
{
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
  digitalWrite(led14, LOW);
  digitalWrite(led15, LOW);
  digitalWrite(led16, LOW);
  digitalWrite(led17, LOW);
}
void displayB_9(void)
{
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
  digitalWrite(led14, LOW);
  digitalWrite(led15, HIGH);
  digitalWrite(led16, HIGH);
  digitalWrite(led17, LOW);

}
