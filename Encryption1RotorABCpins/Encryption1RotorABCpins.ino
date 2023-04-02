//Pins
int A = 1;
int B = 2;
int C = 3;
int D = 4;
int E = 5;
int F = 6;
int G = 7;
int H = 8;
int I = 9;
int J = 10;
int K = 11;
int L = 12;
int M = 13;
int N = 14;
int O = 15;
int P = 16;
int Q = 17;
int R = 18;
int S = 19;
int T = 20;
int U = 21;
int V = 22;
int W = 23;
int X = 24;
int Y = 25;
int Z = 26;
int space = 27;

int Al = 28;
int Bl = 29;
int Cl = 30;
int Dl = 31;
int El = 32;
int Fl = 33;
int Gl = 34;
int Hl = 35;
int Il = 36;
int Jl = 37;
int Kl = 38;
int Ll = 39;
int Ml = 40;
int Nl = 41;
int Ol = 42;
int Pl = 43;
int Ql = 44;
int Rl = 45;
int Sl = 46;
int Tl = 47;
int Ul = 48;
int Vl = 49;
int Wl = 50;
int Xl = 51;
int Yl = 52;
int Zl = 53;
int SPACEl = 54;

//Variables
int Input = 1;

int SetRn1 = 1;
int SetRn2 = 1;
int SetRn3 = 1;

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

  pinMode(A, INPUT);
  pinMode(B, INPUT);
  pinMode(C, INPUT);
  pinMode(D, INPUT);
  pinMode(E, INPUT);
  pinMode(F, INPUT);
  pinMode(G, INPUT);
  pinMode(H, INPUT);
  pinMode(I, INPUT);
  pinMode(J, INPUT);
  pinMode(K, INPUT);
  pinMode(L, INPUT);
  pinMode(M, INPUT);
  pinMode(N, INPUT);
  pinMode(O, INPUT);
  pinMode(P, INPUT);
  pinMode(Q, INPUT);
  pinMode(R, INPUT);
  pinMode(S, INPUT);
  pinMode(T, INPUT);
  pinMode(U, INPUT);
  pinMode(V, INPUT);
  pinMode(W, INPUT);
  pinMode(X, INPUT);
  pinMode(Y, INPUT);
  pinMode(Z, INPUT);
  pinMode(SPACEl, INPUT);

  pinMode(Al, INPUT);
  pinMode(Bl, INPUT);
  pinMode(Cl, INPUT);
  pinMode(Dl, INPUT);
  pinMode(El, INPUT);
  pinMode(Fl, INPUT);
  pinMode(Gl, INPUT);
  pinMode(Hl, INPUT);
  pinMode(Il, INPUT);
  pinMode(Jl, INPUT);
  pinMode(Kl, INPUT);
  pinMode(Ll, INPUT);
  pinMode(Ml, INPUT);
  pinMode(Nl, INPUT);
  pinMode(Ol, INPUT);
  pinMode(Pl, INPUT);
  pinMode(Ql, INPUT);
  pinMode(Rl, INPUT);
  pinMode(Sl, INPUT);
  pinMode(Tl, INPUT);
  pinMode(Ul, INPUT);
  pinMode(Vl, INPUT);
  pinMode(Wl, INPUT);
  pinMode(Xl, INPUT);
  pinMode(Yl, INPUT);
  pinMode(Zl, INPUT);
  pinMode(SPACEl, INPUT);

}

void loop() {

  if (A == 1) Input = 1;

  Serial.print("Starting Input:  ");
  Serial.println(Input);

  Serial.print("Starting letter: ");
  if (Input == 0) Serial.println("!!!We got a problem!!!");
  if (Input == 1) Serial.println("A");
  if (Input == 2) Serial.println("B");
  if (Input == 3) Serial.println("C");
  if (Input == 4) Serial.println("D");
  if (Input == 5) Serial.println("E");
  if (Input == 6) Serial.println("F");
  if (Input == 7) Serial.println("G");
  if (Input == 8) Serial.println("H");
  if (Input == 9) Serial.println("I");
  if (Input == 10) Serial.println("J");
  if (Input == 11) Serial.println("K");
  if (Input == 12) Serial.println("L");
  if (Input == 13) Serial.println("M");
  if (Input == 14) Serial.println("N");
  if (Input == 15) Serial.println("O");
  if (Input == 16) Serial.println("P");
  if (Input == 17) Serial.println("Q");
  if (Input == 18) Serial.println("R");
  if (Input == 19) Serial.println("S");
  if (Input == 20) Serial.println("T");
  if (Input == 21) Serial.println("U");
  if (Input == 22) Serial.println("V");
  if (Input == 23) Serial.println("W");
  if (Input == 24) Serial.println("X");
  if (Input == 25) Serial.println("Y");
  if (Input == 26) Serial.println("Z");
  if (Input == 27) Serial.println("|");


  //Rotor 1 Settings IF
  if (SetRn1 == 2) Input = Input + 1;
  if (SetRn1 == 3) Input = Input + 2;
  if (SetRn1 == 4) Input = Input + 3;
  if (SetRn1 == 5) Input = Input + 4;
  if (SetRn1 == 6) Input = Input + 5;
  if (SetRn1 == 7) Input = Input + 6;
  if (SetRn1 == 8) Input = Input + 7;
  if (SetRn1 == 9) Input = Input + 8;
  if (SetRn1 == 10) Input = Input + 9;
  if (SetRn1 == 11) Input = Input + 10;
  if (SetRn1 == 12) Input = Input + 11;
  if (SetRn1 == 13) Input = Input + 12;
  if (SetRn1 == 14) Input = Input + 13;
  if (SetRn1 == 15) Input = Input + 14;
  if (SetRn1 == 16) Input = Input + 15;
  if (SetRn1 == 17) Input = Input + 16;
  if (SetRn1 == 18) Input = Input + 17;
  if (SetRn1 == 19) Input = Input + 18;
  if (SetRn1 == 20) Input = Input + 19;
  if (SetRn1 == 21) Input = Input + 20;
  if (SetRn1 == 22) Input = Input + 21;
  if (SetRn1 == 23) Input = Input + 22;
  if (SetRn1 == 24) Input = Input + 23;
  if (SetRn1 == 25) Input = Input + 24;
  if (SetRn1 == 26) Input = Input + 25;
  if (SetRn1 == 27) Input = Input + 26;
  
  //Rotor 2 Settings IF
  if (SetRn2 == 2) Input = Input + 1;
  if (SetRn2 == 3) Input = Input + 2;
  if (SetRn2 == 4) Input = Input + 3;
  if (SetRn2 == 5) Input = Input + 4;
  if (SetRn2 == 6) Input = Input + 5;
  if (SetRn2 == 7) Input = Input + 6;
  if (SetRn2 == 8) Input = Input + 7;
  if (SetRn2 == 9) Input = Input + 8;
  if (SetRn2 == 10) Input = Input + 9;
  if (SetRn2 == 11) Input = Input + 10;
  if (SetRn2 == 12) Input = Input + 11;
  if (SetRn2 == 13) Input = Input + 12;
  if (SetRn2 == 14) Input = Input + 13;
  if (SetRn2 == 15) Input = Input + 14;
  if (SetRn2 == 16) Input = Input + 15;
  if (SetRn2 == 17) Input = Input + 16;
  if (SetRn2 == 18) Input = Input + 17;
  if (SetRn2 == 19) Input = Input + 18;
  if (SetRn2 == 20) Input = Input + 19;
  if (SetRn2 == 21) Input = Input + 20;
  if (SetRn2 == 22) Input = Input + 21;
  if (SetRn2 == 23) Input = Input + 22;
  if (SetRn2 == 24) Input = Input + 23;
  if (SetRn2 == 25) Input = Input + 24;
  if (SetRn2 == 26) Input = Input + 25;
  if (SetRn2 == 27) Input = Input + 26;
  
  //Rotor 3 Settings IF
  if (SetRn3 == 2) Input = Input + 1;
  if (SetRn3 == 3) Input = Input + 2;
  if (SetRn3 == 4) Input = Input + 3;
  if (SetRn3 == 5) Input = Input + 4;
  if (SetRn3 == 6) Input = Input + 5;
  if (SetRn3 == 7) Input = Input + 6;
  if (SetRn3 == 8) Input = Input + 7;
  if (SetRn3 == 9) Input = Input + 8;
  if (SetRn3 == 10) Input = Input + 9;
  if (SetRn3 == 11) Input = Input + 10;
  if (SetRn3 == 12) Input = Input + 11;
  if (SetRn3 == 13) Input = Input + 12;
  if (SetRn3 == 14) Input = Input + 13;
  if (SetRn3 == 15) Input = Input + 14;
  if (SetRn3 == 16) Input = Input + 15;
  if (SetRn3 == 17) Input = Input + 16;
  if (SetRn3 == 18) Input = Input + 17;
  if (SetRn3 == 19) Input = Input + 18;
  if (SetRn3 == 20) Input = Input + 19;
  if (SetRn3 == 21) Input = Input + 20;
  if (SetRn3 == 22) Input = Input + 21;
  if (SetRn3 == 23) Input = Input + 22;
  if (SetRn3 == 24) Input = Input + 23;
  if (SetRn3 == 25) Input = Input + 24;
  if (SetRn3 == 26) Input = Input + 25;
  if (SetRn3 == 27) Input = Input + 26;
  
  //Rotor 5 Settings IF
  if (SetRn3 == 2) Input = Input + 1;
  if (SetRn3 == 3) Input = Input + 2;
  if (SetRn3 == 4) Input = Input + 3;
  if (SetRn3 == 5) Input = Input + 4;
  if (SetRn3 == 6) Input = Input + 5;
  if (SetRn3 == 7) Input = Input + 6;
  if (SetRn3 == 8) Input = Input + 7;
  if (SetRn3 == 9) Input = Input + 8;
  if (SetRn3 == 10) Input = Input + 9;
  if (SetRn3 == 11) Input = Input + 10;
  if (SetRn3 == 12) Input = Input + 11;
  if (SetRn3 == 13) Input = Input + 12;
  if (SetRn3 == 14) Input = Input + 13;
  if (SetRn3 == 15) Input = Input + 14;
  if (SetRn3 == 16) Input = Input + 15;
  if (SetRn3 == 17) Input = Input + 16;
  if (SetRn3 == 18) Input = Input + 17;
  if (SetRn3 == 19) Input = Input + 18;
  if (SetRn3 == 20) Input = Input + 19;
  if (SetRn3 == 21) Input = Input + 20;
  if (SetRn3 == 22) Input = Input + 21;
  if (SetRn3 == 23) Input = Input + 22;
  if (SetRn3 == 24) Input = Input + 23;
  if (SetRn3 == 25) Input = Input + 24;
  if (SetRn3 == 26) Input = Input + 25;
  if (SetRn3 == 27) Input = Input + 26;
  
  //Rotor 6 Settings IF
  if (SetRn2 == 2) Input = Input + 1;
  if (SetRn2 == 3) Input = Input + 2;
  if (SetRn2 == 4) Input = Input + 3;
  if (SetRn2 == 5) Input = Input + 4;
  if (SetRn2 == 6) Input = Input + 5;
  if (SetRn2 == 7) Input = Input + 6;
  if (SetRn2 == 8) Input = Input + 7;
  if (SetRn2 == 9) Input = Input + 8;
  if (SetRn2 == 10) Input = Input + 9;
  if (SetRn2 == 11) Input = Input + 10;
  if (SetRn2 == 12) Input = Input + 11;
  if (SetRn2 == 13) Input = Input + 12;
  if (SetRn2 == 14) Input = Input + 13;
  if (SetRn2 == 15) Input = Input + 14;
  if (SetRn2 == 16) Input = Input + 15;
  if (SetRn2 == 17) Input = Input + 16;
  if (SetRn2 == 18) Input = Input + 17;
  if (SetRn2 == 19) Input = Input + 18;
  if (SetRn2 == 20) Input = Input + 19;
  if (SetRn2 == 21) Input = Input + 20;
  if (SetRn2 == 22) Input = Input + 21;
  if (SetRn2 == 23) Input = Input + 22;
  if (SetRn2 == 24) Input = Input + 23;
  if (SetRn2 == 25) Input = Input + 24;
  if (SetRn2 == 26) Input = Input + 25;
  if (SetRn2 == 27) Input = Input + 26;
  
  //Rotor 7 Settings IF
  if (SetRn1 == 2) Input = Input + 1;
  if (SetRn1 == 3) Input = Input + 2;
  if (SetRn1 == 4) Input = Input + 3;
  if (SetRn1 == 5) Input = Input + 4;
  if (SetRn1 == 6) Input = Input + 5;
  if (SetRn1 == 7) Input = Input + 6;
  if (SetRn1 == 8) Input = Input + 7;
  if (SetRn1 == 9) Input = Input + 8;
  if (SetRn1 == 10) Input = Input + 9;
  if (SetRn1 == 11) Input = Input + 10;
  if (SetRn1 == 12) Input = Input + 11;
  if (SetRn1 == 13) Input = Input + 12;
  if (SetRn1 == 14) Input = Input + 13;
  if (SetRn1 == 15) Input = Input + 14;
  if (SetRn1 == 16) Input = Input + 15;
  if (SetRn1 == 17) Input = Input + 16;
  if (SetRn1 == 18) Input = Input + 17;
  if (SetRn1 == 19) Input = Input + 18;
  if (SetRn1 == 20) Input = Input + 19;
  if (SetRn1 == 21) Input = Input + 20;
  if (SetRn1 == 22) Input = Input + 21;
  if (SetRn1 == 23) Input = Input + 22;
  if (SetRn1 == 24) Input = Input + 23;
  if (SetRn1 == 25) Input = Input + 24;
  if (SetRn1 == 26) Input = Input + 25;
  if (SetRn1 == 27) Input = Input + 26;
  
  Serial.print("Setting Rotor n1: ");
  Serial.println(SetRn1);

  Serial.print("Setting Rotor n2: ");
  Serial.println(SetRn2);

  Serial.print("Setting Rotor n3: ");
  Serial.println(SetRn3);


  Serial.print("Input before overflow protection: ");
  Serial.println(Input);
  //overflow protetion setting
  if (Input > 27) Input = Input - 27;
  if (Input > 27) Input = Input - 27;
  if (Input > 27) Input = Input - 27;
  if (Input > 27) Input = Input - 27;
  if (Input > 27) Input = Input - 27;
  if (Input > 27) Input = Input - 27;
  if (Input > 27) Input = Input - 27;

  Serial.print("Input after overflow protection: ");
  Serial.println(Input);

  //Rotor 1 encryption
  if (Input == 1) o1 = 2;
  if (Input == 2) o1 = 3;
  if (Input == 3) o1 = 4;
  if (Input == 4) o1 = 5;
  if (Input == 5) o1 = 6;
  if (Input == 6) o1 = 7;
  if (Input == 7) o1 = 8;
  if (Input == 8) o1 = 9;
  if (Input == 9) o1 = 10;
  if (Input == 10) o1 = 11;
  if (Input == 11) o1 = 12;
  if (Input == 12) o1 = 13;
  if (Input == 13) o1 = 14;
  if (Input == 14) o1 = 15;
  if (Input == 15) o1 = 16;
  if (Input == 16) o1 = 17;
  if (Input == 17) o1 = 18;
  if (Input == 18) o1 = 19;
  if (Input == 19) o1 = 20;
  if (Input == 20) o1 = 21;
  if (Input == 21) o1 = 22;
  if (Input == 22) o1 = 23;
  if (Input == 23) o1 = 24;
  if (Input == 24) o1 = 25;
  if (Input == 25) o1 = 26;
  if (Input == 26) o1 = 27;
  if (Input == 27) o1 = 1;
  Serial.print("Number after 1* rotor encryption: ");
  Serial.println(o1);

  //Rotor 2 encryption
  if (o1 == 1) o2 = 2;
  if (o1 == 2) o2 = 3;
  if (o1 == 3) o2 = 4;
  if (o1 == 4) o2 = 5;
  if (o1 == 5) o2 = 6;
  if (o1 == 6) o2 = 7;
  if (o1 == 7) o2 = 8;
  if (o1 == 8) o2 = 9;
  if (o1 == 9) o2 = 10;
  if (o1 == 10) o2 = 11;
  if (o1 == 11) o2 = 12;
  if (o1 == 12) o2 = 13;
  if (o1 == 13) o2 = 14;
  if (o1 == 14) o2 = 15;
  if (o1 == 15) o2 = 16;
  if (o1 == 16) o2 = 17;
  if (o1 == 17) o2 = 18;
  if (o1 == 18) o2 = 19;
  if (o1 == 19) o2 = 20;
  if (o1 == 20) o2 = 21;
  if (o1 == 21) o2 = 22;
  if (o1 == 22) o2 = 23;
  if (o1 == 23) o2 = 24;
  if (o1 == 24) o2 = 25;
  if (o1 == 25) o2 = 26;
  if (o1 == 26) o2 = 27;
  if (o1 == 27) o2 = 1;
  Serial.print("Number after 2* rotor encryption: ");
  Serial.println(o2);

  //Rotor 3 encryption
  if (o2 == 1) o3 = 2;
  if (o2 == 2) o3 = 3;
  if (o2 == 3) o3 = 4;
  if (o2 == 4) o3 = 5;
  if (o2 == 5) o3 = 6;
  if (o2 == 6) o3 = 7;
  if (o2 == 7) o3 = 8;
  if (o2 == 8) o3 = 9;
  if (02 == 9) o3 = 10;
  if (o2 == 10) o3 = 11;
  if (o2 == 11) o3 = 12;
  if (o2 == 12) o3 = 13;
  if (o2 == 13) o3 = 14;
  if (o2 == 14) o3 = 15;
  if (o2 == 15) o3 = 16;
  if (o2 == 16) o3 = 17;
  if (o2 == 17) o3 = 18;
  if (o2 == 18) o3 = 19;
  if (o2 == 19) o3 = 20;
  if (o2 == 20) o3 = 21;
  if (o2 == 21) o3 = 22;
  if (o2 == 22) o3 = 23;
  if (o2 == 23) o3 = 24;
  if (o2 == 24) o3 = 25;
  if (o2 == 25) o3 = 26;
  if (o2 == 26) o3 = 27;
  if (o2 == 27) o3 = 1;
  Serial.print("Number after 3* rotor encryption: ");
  Serial.println(o3);

  //Rotor 4 encryption
  if (o3 == 1) o4 = 2;
  if (o3 == 2) o4 = 3;
  if (o3 == 3) o4 = 4;
  if (o3 == 4) o4 = 5;
  if (o3 == 5) o4 = 6;
  if (o3 == 6) o4 = 7;
  if (o3 == 7) o4 = 8;
  if (o3 == 8) o4 = 9;
  if (o3 == 9) o4 = 10;
  if (o3 == 10) o4 = 11;
  if (o3 == 11) o4 = 12;
  if (o3 == 12) o4 = 13;
  if (o3 == 13) o4 = 14;
  if (o3 == 14) o4 = 15;
  if (o3 == 15) o4 = 16;
  if (o3 == 16) o4 = 17;
  if (o3 == 17) o4 = 18;
  if (o3 == 18) o4 = 19;
  if (o3 == 19) o4 = 20;
  if (o3 == 20) o4 = 21;
  if (o3 == 21) o4 = 22;
  if (o3 == 22) o4 = 23;
  if (o3 == 23) o4 = 24;
  if (o3 == 24) o4 = 25;
  if (o3 == 25) o4 = 26;
  if (o3 == 26) o4 = 27;
  if (o3 == 27) o4 = 1;
  Serial.print("Number after inverter encryption: ");
  Serial.println(o4);

  //Rotor 5 encryption
  if (o4 == 1) o5 = 2;
  if (o4 == 2) o5 = 3;
  if (o4 == 3) o5 = 4;
  if (o4 == 4) o5 = 5;
  if (o4 == 5) o5 = 6;
  if (o4 == 6) o5 = 7;
  if (o4 == 7) o5 = 8;
  if (o4 == 8) o5 = 9;
  if (o4 == 9) o5 = 10;
  if (o4 == 10) o5 = 11;
  if (o4 == 11) o5 = 12;
  if (o4 == 12) o5 = 13;
  if (o4 == 13) o5 = 14;
  if (o4 == 14) o5 = 15;
  if (o4 == 15) o5 = 16;
  if (o4 == 16) o5 = 17;
  if (o4 == 17) o5 = 18;
  if (o4 == 18) o5 = 19;
  if (o4 == 19) o5 = 20;
  if (o4 == 20) o5 = 21;
  if (o4 == 21) o5 = 22;
  if (o4 == 22) o5 = 23;
  if (o4 == 23) o5 = 24;
  if (o4 == 24) o5 = 25;
  if (o4 == 25) o5 = 26;
  if (o4 == 26) o5 = 27;
  if (o4 == 27) o5 = 1;
  Serial.print("Number after 3* rotor backwards encryption: ");
  Serial.println(o5);

  //Rotor 6 encrytion
  if (o5 == 1) o6 = 2;
  if (o5 == 2) o6 = 3;
  if (o5 == 3) o6 = 4;
  if (o5 == 4) o6 = 5;
  if (o5 == 5) o6 = 6;
  if (o5 == 6) o6 = 7;
  if (o5 == 7) o6 = 8;
  if (o5 == 8) o6 = 9;
  if (o5 == 9) o6 = 10;
  if (o5 == 10) o6 = 11;
  if (o5 == 11) o6 = 12;
  if (o5 == 12) o6 = 13;
  if (o5 == 13) o6 = 14;
  if (o5 == 14) o6 = 15;
  if (o5 == 15) o6 = 16;
  if (o5 == 16) o6 = 17;
  if (o5 == 17) o6 = 18;
  if (o5 == 18) o6 = 19;
  if (o5 == 19) o6 = 20;
  if (o5 == 20) o6 = 21;
  if (o5 == 21) o6 = 22;
  if (o5 == 22) o6 = 23;
  if (o5 == 23) o6 = 24;
  if (o5 == 24) o6 = 25;
  if (o5 == 25) o6 = 26;
  if (o5 == 26) o6 = 27;
  if (o5 == 27) o6 = 1;
  Serial.print("Number after 2* rotor backwards encryption: ");
  Serial.println(o6);

  //Rotor 7 encryption
  if (o6 == 1) o7 = 2;
  if (o6 == 2) o7 = 3;
  if (o6 == 3) o7 = 4;
  if (o6 == 4) o7 = 5;
  if (o6 == 5) o7 = 6;
  if (o6 == 6) o7 = 7;
  if (o6 == 7) o7 = 8;
  if (o6 == 8) o7 = 9;
  if (o6 == 9) o7 = 10;
  if (o6 == 10) o7 = 11;
  if (o6 == 11) o7 = 12;
  if (o6 == 12) o7 = 13;
  if (o6 == 13) o7 = 14;
  if (o6 == 14) o7 = 15;
  if (o6 == 15) o7 = 16;
  if (o6 == 16) o7 = 17;
  if (o6 == 17) o7 = 18;
  if (o6 == 18) o7 = 19;
  if (o6 == 19) o7 = 20;
  if (o6 == 20) o7 = 21;
  if (o6 == 21) o7 = 22;
  if (o6 == 22) o7 = 23;
  if (o6 == 23) o7 = 24;
  if (o6 == 24) o7 = 25;
  if (o6 == 25) o7 = 26;
  if (o6 == 26) o7 = 27;
  if (o6 == 27) o7 = 1;
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
  if (Output == 4) Serial.println("D");
  if (Output == 5) Serial.println("E");
  if (Output == 6) Serial.println("F");
  if (Output == 7) Serial.println("G");
  if (Output == 8) Serial.println("H");
  if (Output == 9) Serial.println("I");
  if (Output == 10) Serial.println("J");
  if (Output == 11) Serial.println("K");
  if (Output == 12) Serial.println("L");
  if (Output == 13) Serial.println("M");
  if (Output == 14) Serial.println("N");
  if (Output == 15) Serial.println("O");
  if (Output == 16) Serial.println("P");
  if (Output == 17) Serial.println("Q");
  if (Output == 18) Serial.println("R");
  if (Output == 19) Serial.println("S");
  if (Output == 20) Serial.println("T");
  if (Output == 21) Serial.println("U");
  if (Output == 22) Serial.println("V");
  if (Output == 23) Serial.println("W");
  if (Output == 24) Serial.println("X");
  if (Output == 25) Serial.println("Y");
  if (Output == 26) Serial.println("Z");
  if (Output == 27) Serial.println("|");

  SetRn1 = SetRn1 + 1;
  if (SetRn1 > 27) {
    SetRn1 = 1;
    SetRn2 + 1; 
  }
  if (SetRn2 > 27) {
    SetRn2 = 1;
    SetRn3 + 1; 
  }
  if (SetRn3 > 27) SetRn3 = 1;

  delay(3000);

}
