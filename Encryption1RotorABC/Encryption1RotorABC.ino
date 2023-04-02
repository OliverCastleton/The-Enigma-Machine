//Variables
int Input; //input can be 1/2/3

int SetRn1; //rotor n1 position on !/3
int SetRn2; //rotor n2 position on !/3
int SetRn3; //rotor n3 position on !/3

//Standard
int o1; //output n1
int o2; //output n2
int o3; //output n3
int o4; //output n4
int o5; //output n5
int o6; //output n6
int o7; //output n7
int Output; //final output
int SetRn4 = 1; //rotor n4 position on !/3

void setup() {
  Serial.begin(9600);

  //rotor n1 input
  Serial.println("Please enter the desired 1* rotor position: ");
  while (Serial.available() == 0) {}
  SetRn1 = int(Serial.parseInt());
  Serial.println("Thanks!");
  
  //rotor n2 input
  Serial.println("Please enter the desired 2* rotor position: ");
  while (Serial.available() == 0) {}
  SetRn2 = int(Serial.parseInt());
  Serial.println("Thanks!");
  
  //rotor n3 input
  Serial.println("Please enter the desired 3* rotor position: ");
  while (Serial.available() == 0) {}
  SetRn3 = int(Serial.parseInt());
  Serial.println("Thanks!");
  
}

void loop() {

  //Input number
  Serial.println("Please enter your starting letter: ");
  while (Serial.available() == 0) {}
  Input = int(Serial.parseInt());
  Serial.println("Thanks!");

  Serial.print("Starting Input:  ");
  Serial.println(Input);
  
  Serial.print("Starting letter: ");
  if (Input == 0) Serial.println("!!!We got a problem!!!");
  if (Input == 1) Serial.println("A");
  if (Input == 2) Serial.println("B");
  if (Input == 3) Serial.println("C");

  //Rotor 1 Settings IF
  if (SetRn1 == 2) Input = Input + 1;
  if (SetRn1 == 3) Input = Input + 2;
  //Rotor 2 Settings IF
  if (SetRn2 == 2) Input = Input + 1;
  if (SetRn2 == 3) Input = Input + 2;
  //Rotor 3 Settings IF
  if (SetRn3 == 2) Input = Input + 1;
  if (SetRn3 == 3) Input = Input + 2;
  //Rotor 4 is always set to 1
  //Rotor 5 Settings IF
  if (SetRn3 == 2) Input = Input + 1;
  if (SetRn3 == 3) Input = Input + 2;
  //Rotor 6 Settings IF
  if (SetRn2 == 2) Input = Input + 1;
  if (SetRn2 == 3) Input = Input + 2;
  //Rotor 7 Settings IF
  if (SetRn1 == 2) Input = Input + 1;
  if (SetRn1 == 3) Input = Input + 2;
  
  Serial.print("Setting Rotor n1: ");
  Serial.println(SetRn1);
  
  Serial.print("Setting Rotor n2: ");
  Serial.println(SetRn2);
  
  Serial.print("Setting Rotor n3: ");
  Serial.println(SetRn3);
  
  Serial.print("Input before overflow protection: ");
  Serial.println(Input);
  //overflow protetion setting

  while (Input > 3) {
    Input = Input - 3;
  }
  
  //if (Input > 3) Input = Input - 3;
  //if (Input > 3) Input = Input - 3;
  //if (Input > 3) Input = Input - 3;
  //if (Input > 3) Input = Input - 3;
  //if (Input > 3) Input = Input - 3;
  //if (Input > 3) Input = Input - 3;
  //if (Input > 3) Input = Input - 3;
  
  Serial.print("Input after overflow protection: ");
  Serial.println(Input);
  
  //Rotor 1 encryption
  if (Input == 1) o1 = 2;
  if (Input == 2) o1 = 3;
  if (Input == 3) o1 = 1;
  Serial.print("Number after 1* rotor encryption: ");
  Serial.println(o1);
  
  //Rotor 2 encryption
  if (o1 == 1) o2 = 2;
  if (o1 == 2) o2 = 3;
  if (o1 == 3) o2 = 1;
  Serial.print("Number after 2* rotor encryption: ");
  Serial.println(o2);
  
  //Rotor 3 encryption
  if (o2 == 1) o3 = 2;
  if (o2 == 2) o3 = 3;
  if (o2 == 3) o3 = 1;
  Serial.print("Number after 3* rotor encryption: ");
  Serial.println(o3);
  
  //Rotor 4 encryption
  if (o3 == 1) o4 = 2;
  if (o3 == 2) o4 = 3;
  if (o3 == 3) o4 = 1;
  Serial.print("Number after inverter encryption: ");
  Serial.println(o4);

  //Rotor 5 encryption
  if (o4 == 1) o5 = 2;
  if (o4 == 2) o5 = 3;
  if (o4 == 3) o5 = 1;
  Serial.print("Number after 3* rotor backwards encryption: ");
  Serial.println(o5);

  //Rotor 6 encryption
  if (o5 == 1) o6 = 2;
  if (o5 == 2) o6 = 3;
  if (o5 == 3) o6 = 1;
  Serial.print("Number after 2* rotor backwards encryption: ");
  Serial.println(o6);

  //Rotor 7 encryption
  if (o6 == 1) o7 = 2;
  if (o6 == 2) o7 = 3;
  if (o6 == 3) o7 = 1;
  Serial.print("Number after 1* rotor backwards encryption: ");
  Serial.println(o7);

  //Output
  Output = o7;
  Serial.print("Final Output number: ");
  Serial.println(Output);
  
  Serial.print("Final Output letter: ");
  if (Output == 1) Serial.println("A");
  if (Output == 2) Serial.println("B");
  if (Output == 3) Serial.println("C");

  
 delay(10000);
}
