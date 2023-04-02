//Variables
int Input; 

int SetRn1; 
int SetRn2; 
int SetRn3; 

int StartRPos1;
int StartRPos2;
int StartRPos3;

int EndRPos1;
int EndRPos2;
int EndRPos3;

//Standard
int o1; 
int o2; 
int o3; 
int o4;
int o5; 
int o6;
int o7; 
int Output; 
int SetRn4 = 1; 

void setup() {
  Serial.begin(9600);
 
  //rotor n1 input
  Serial.println("Please enter the desired 1* rotor position: ");
  while (Serial.available() == 0) {}
  StartRPos1 = int(Serial.parseInt());
  Serial.println(StartRPos1);
  Serial.parseInt();
  if (StartRPos1 > 3) Serial.println("Please re-enter the desired 1* rotor position(1-3): ");
  while ((StartRPos1 > 3) or (StartRPos1 < 1)) {
    while (Serial.available() == 0) {}
    StartRPos1 = int(Serial.parseInt());
  }
  Serial.println("Thanks!");
  
  //rotor n2 input
  Serial.println("Please enter the desired 2* rotor position: ");
  while (Serial.available() == 0) {}
  StartRPos2 = int(Serial.parseInt());
  Serial.println(StartRPos2);
  Serial.parseInt();
  if (StartRPos2 > 3) Serial.println("Please re-enter the desired 2* rotor position(1-3): ");
  while ((StartRPos2 > 3) or (StartRPos2 < 1)) {
    while (Serial.available() == 0) {}
    StartRPos2 = int(Serial.parseInt());
  }
  Serial.println("Thanks!");
  
  //rotor n3 input
  Serial.println("Please enter the desired 3* rotor position: ");
  while (Serial.available() == 0) {}
  StartRPos3 = int(Serial.parseInt());
  Serial.println(StartRPos3);
  Serial.parseInt();
  if (StartRPos3 > 3) Serial.println("Please re-enter the desired 3* rotor position(1-3): ");
  while ((StartRPos3 > 3) or (StartRPos3 < 1)) {
    while (Serial.available() == 0) {}
    StartRPos3 = int(Serial.parseInt());
  }
  Serial.println("Thanks!");
  
}

void loop() {

  //Input Number
  Serial.println("Please enter the desired Input Number: ");
  while (Serial.available() == 0) {}
  Input = int(Serial.parseInt());
  Serial.println(Input);
  Serial.parseInt();
  if (Input > 3) Serial.println("Please re-enter the desired Input Number(1-3): ");
  while ((Input > 3) or (Input < 1)) {
    while (Serial.available() == 0) {}
    Input = int(Serial.parseInt());
  }
  Serial.println("Thanks!");

  Serial.print("Starting Input:  ");
  Serial.println(Input);
  
  Serial.print("Starting letter: ");
  if (Input == 0) Serial.println("!!!We got a problem!!!");
  if (Input == 1) Serial.println("A");
  if (Input == 2) Serial.println("B");
  if (Input == 3) Serial.println("C");

  //Setting Rotor variables
  SetRn1 = StartRPos1 + EndRPos1;
  while (SetRn1 > 3) SetRn1 = SetRn1 - 3;
  SetRn2 = StartRPos2 + EndRPos2;
  while (SetRn2 > 3) SetRn2 = SetRn2 - 3;
  SetRn3 = StartRPos3 + EndRPos3;
  while (SetRn3 > 3) SetRn3 = SetRn3 - 3;
  
  Serial.print("Setting Rotor n1: ");
  Serial.println(SetRn1);
  
  Serial.print("Setting Rotor n2: ");
  Serial.println(SetRn2);
  
  Serial.print("Setting Rotor n3: ");
  Serial.println(SetRn3);
  
  //Rotor 1 Settings IF
  if (SetRn1 == 2) Input = Input + 1;
  if (SetRn1 == 3) Input = Input + 2;
  while (Input > 3) Input = Input - 3;
  //Rotor 1 encryption
  if (Input == 1) o1 = 2;
  if (Input == 2) o1 = 3;
  if (Input == 3) o1 = 1;
  Serial.print("Number after 1* rotor encryption: ");
  Serial.println(o1);
  
  //Rotor 2 Settings IF
  if (SetRn2 == 2) o1 = o1 + 1;
  if (SetRn2 == 3) o1 = o1 + 2;
  while (o1 > 3) o1 = o1 - 3;
  //Rotor 2 encryption
  if (o1 == 1) o2 = 2;
  if (o1 == 2) o2 = 3;
  if (o1 == 3) o2 = 1;
  Serial.print("Number after 2* rotor encryption: ");
  Serial.println(o2);
  
  //Rotor 3 Settings IF
  if (SetRn3 == 2) o2 = o2 + 1;
  if (SetRn3 == 3) o2 = o2 + 2;
  while (o2 > 3) o2 = o2 - 3;
  //Rotor 3 encryption
  if (o2 == 1) o3 = 2;
  if (o2 == 2) o3 = 3;
  if (o2 == 3) o3 = 1;
  Serial.print("Number after 3* rotor encryption: ");
  Serial.println(o3);
  
  //Rotor 4 doesn't need setting IF (because it isn't variable)
  //Rotor 4 encryption
  if (o3 == 1) o4 = 2;
  if (o3 == 2) o4 = 3;
  if (o3 == 3) o4 = 1;
  Serial.print("Number after inverter encryption: ");
  Serial.println(o4);

  //Rotor 5 Settings IF
  if (SetRn3 == 2) o4 = o4 + 1;
  if (SetRn3 == 3) o4 = o4 + 2;
  while (o4 > 3) o4 = o4 - 3;
  //Rotor 5 encryption
  if (o4 == 1) o5 = 2;
  if (o4 == 2) o5 = 3;
  if (o4 == 3) o5 = 1;
  Serial.print("Number after 3* rotor backwards encryption: ");
  Serial.println(o5);

  //Rotor 6 Settings IF
  if (SetRn2 == 2) o5 = o5 + 1;
  if (SetRn2 == 3) o5 = o5 + 2;
  while (o5 > 3) o5 = o5 - 3;
  //Rotor 6 encryption
  if (o5 == 1) o6 = 2;
  if (o5 == 2) o6 = 3;
  if (o5 == 3) o6 = 1;
  Serial.print("Number after 2* rotor backwards encryption: ");
  Serial.println(o6);

  //Rotor 7 Settings IF
  if (SetRn1 == 2) o6 = o6 + 1;
  if (SetRn1 == 3) o6 = o6 + 2;
  while (o6 > 3) o6 = o6 - 3;
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
  
  EndRPos1 = EndRPos1 + 1;
  
  if (EndRPos1 > 3){
    EndRPos2 + 1;
    EndRPos1 = 0;
  }
  if (EndRPos2 > 3){
    EndRPos3 + 1;
    EndRPos2 = 0;
  }
  if (EndRPos3 > 3) EndRPos3 = 0;

  
 delay(5000);
}
