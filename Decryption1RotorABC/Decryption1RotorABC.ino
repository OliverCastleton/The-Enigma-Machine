//Variables
int Input = 2; //input can be 1/2/3
int SetRn1 = 1; //rotor n1 position on !/3
int SetRn2 = 2; //rotor n2 position on !/3
int SetRn3 = 3; //rotor n3 position on !/3
int SetRn4 = 1; //rotor n4 position on !/3
int SetRn5 = 3; //rotor n5 position on !/3
int SetRn6 = 2; //rotor n6 position on !/3
int SetRn7 = 1; //rotor n7 position on !/3
//Standard
int o1; //output n1
int o2; //output n2
int o3; //output n3
int o4; //output n4
int o5; //output n5
int o6; //output n6
int o7; //output n7
int Output; //final output

void setup() {
  Serial.begin(9600);

  Serial.print("Starting Input:  ");
  Serial.println(Input);
  Serial.print("Starting letter: ");
  if (Input == 1) {
    Serial.println("A");
  }
  if (Input == 2) {
    Serial.println("B");
  }
  if (Input == 3) {
    Serial.println("C");
  }

  //Rotor 1 Settings IF
  if (SetRn1 == 2) {
    Input = Input + 1;
  }
  if (SetRn1 == 3) {
    Input = Input + 2;
  }

  //Rotor 2 Settings IF
  if (SetRn2 == 2) {
    Input = Input + 1;
  }
  if (SetRn2 == 3) {
    Input = Input + 2;
  }

  //Rotor 3 Settings IF
  if (SetRn3 == 2) {
    Input = Input + 1;
  }
  if (SetRn3 == 3) {
    Input = Input + 2;
  }

  //Rotor 4 Settings IF
  if (SetRn4 == 2) {
    Input = Input + 1;
  }
  if (SetRn4 == 3) {
    Input = Input + 2;
  }
  
  //Rotor 5 Settings IF
  if (SetRn5 == 2) {
    Input = Input + 1;
  }
  if (SetRn5 == 3) {
    Input = Input + 2;
  }
  
  //Rotor 6 Settings IF
  if (SetRn6 == 2) {
    Input = Input + 1;
  }
  if (SetRn6 == 3) {
    Input = Input + 2;
  }

  //Rotor 7 Settings IF
  if (SetRn7 == 2) {
    Input = Input + 1;
  }
  if (SetRn7 == 3) {
    Input = Input + 2;
  }

}

void loop() {
  Serial.print("Setting Rotor n1: ");
  Serial.println(SetRn1);
  Serial.print("Setting Rotor n2: ");
  Serial.println(SetRn2);
  Serial.print("Setting Rotor n3: ");
  Serial.println(SetRn3);
  Serial.print("Setting Rotor n4: ");
  Serial.println(SetRn4);
  Serial.print("Setting Rotor n5: ");
  Serial.println(SetRn5);
  Serial.print("Setting Rotor n6: ");
  Serial.println(SetRn6);
  Serial.print("Setting Rotor n7: ");
  Serial.println(SetRn7);
  
  Serial.print("Input before overflow protection: ");
  Serial.println(Input);
  
  //overflow protetion setting
  if (Input > 3) {
    Input = Input - 3;
  }
  if (Input > 3) {
    Input = Input - 3;
  }
  if (Input > 3) {
    Input = Input - 3;
  }
  if (Input > 3) {
    Input = Input - 3;
  }
  if (Input > 3) {
    Input = Input - 3;
  }
  if (Input > 3) {
    Input = Input - 3;
  }
  if (Input > 3) {
    Input = Input - 3;
  }

  Serial.print("Input after overflow protection: ");
  Serial.println(Input);

  //Rotor 1 decryption
  if (Input == 2) {
    o1 = 1;
  }
  if (Input == 3) {
    o1 = 2;
  }
  if (Input == 1) {
    o1 = 3;
  }
  
  Serial.print("Number after 1* rotor decryption: ");
  Serial.println(o1);

  //Rotor 2 decryption
  if (o1 == 2) {
    o2 = 1;
  }
  if (o1 == 3) {
    o2 = 2;
  }
  if (o1 == 1) {
    o2 = 3;
  }
  
  Serial.print("Number after 2* rotor decryption: ");
  Serial.println(o2);

  //Rotor 3 decryption
  if (o2 == 2) {
    o3 = 1;
  }
  if (o2 == 3) {
    o3 = 2;
  }
  if (o2 == 1) {
    o3 = 3;
  }
  
  Serial.print("Number after 3* rotor decryption: ");
  Serial.println(o3);

  //Rotor 4 encryption
  if (o3 == 2) {
    o4 = 1;
  }
  if (o3 == 3) {
    o4 = 2;
  }
  if (o3 == 1) {
    o4 = 3;
  }
  
  Serial.print("Number after 4* rotor incryption: ");
  Serial.println(o4);

  //Rotor 5 encryption
  if (o4 == 2) {
    o5 = 1;
  }
  if (o4 == 3) {
    o5 = 2;
  }
  if (o4 == 1) {
    o5 = 3;
  }
  
  Serial.print("Number after 5* rotor incryption: ");
  Serial.println(o5);

  //Rotor 6 encryption
  if (o5 == 2) {
    o6 = 1;
  }
  if (o5 == 3) {
    o6 = 2;
  }
  if (o5 == 1) {
    o6 = 3;
  }
  
  Serial.print("Number after 6* rotor incryption: ");
  Serial.println(o6);

  //Rotor 7 encryption
  if (o6 == 2) {
    o7 = 1;
  }
  if (o6 == 3) {
    o7 = 2;
  }
  if (o6 == 1) {
    o7 = 3;
  }
  
  Serial.print("Number after 7* rotor incryption: ");
  Serial.println(o7);
  

  Output = o7;

  Serial.print("Final Output number: ");
  Serial.println(Output);
  Serial.print("Final Output letter: ");
  if (Output == 1) {
    Serial.println("A");
  }
  if (Output == 2) {
    Serial.println("B");
  }
  if (Output == 3) {
    Serial.println("C");
  }

  delay(60000);

}

  
