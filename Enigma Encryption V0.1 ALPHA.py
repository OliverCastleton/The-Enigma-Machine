#This is a simulator of the enigma machine form WW2

#In this version we use 3 Rotors once for 3 letters(1/A -  2/B - 3/C )

start= input("Press enter to start:")

def RotorInput(RotorNumber): 
    print("Please enter the desired ", RotorNumber, "rotor position: ")
    Tnumber = int(input())
    
    while (Tnumber > 3) or (Tnumber < 1) :
        print ("Please re-enter the desired ", RotorNumber, "rotor position(1-3): ")
        Tnumber = int(input())
    if (Tnumber > 3) or (Tnumber < 1) : print("Thanks!")
    return Tnumber
def LetterInput(): 
    print ("Please enter the desired letter: ")
    Tnumber = int(input())
    while (Tnumber > 3) or (Tnumber < 1) :
        print ("Please re-enter the desired letter(1-3): ")
        Tnumber = int(input())
    if (Tnumber > 3) or (Tnumber < 1) : print("Thanks!")
    return Tnumber
def RotorSetEnc(RotorNumber):
  Tnumber = EncryptedLetter
  if (RotorNumber == 2) : Tnumber = Tnumber + 1
  if (RotorNumber == 3) : Tnumber = Tnumber + 2
  while (RotorNumber > 3) : Tnumber = Tnumber - 3
  Toutput = 0
  if (Tnumber == 1) : Toutput = 2
  if (Tnumber == 2) : Toutput = 3
  if (Tnumber == 3) : Toutput = 1
  return Toutput

PositionRotor1 = RotorInput(1)
PositionRotor2 = RotorInput(2)
PositionRotor3 = RotorInput(3)

print("How many letters do you want to encrypt")
NumberOfLoops = int(input())

while NumberOfLoops > 0 :
    InputLetterNumber = LetterInput()
    InputLetter = 0
    if InputLetterNumber == 1 : InputLetter = "A"
    if InputLetterNumber == 2 : InputLetter = "B"
    if InputLetterNumber == 3 : InputLetter = "C"
    print("Position Rotor n°1 =", PositionRotor1 )
    print("Position Rotor n°2 =", PositionRotor2 )
    print("Position Rotor n°3 =", PositionRotor3 )
    print("Input Letter Number =", InputLetterNumber )
    print("Input Letter =", InputLetter )
    
    EncryptedLetter = InputLetterNumber
    EncryptedLetter = RotorSetEnc(PositionRotor1)
    print("Letter Number After 1° Encrypion", EncryptedLetter)
    EncryptedLetter = RotorSetEnc(PositionRotor2)
    print("Letter Number After 2° Encrypion", EncryptedLetter)
    EncryptedLetter = RotorSetEnc(PositionRotor3)
    print("Letter Number After 3° Encrypion", EncryptedLetter)
    print(InputLetterNumber, "-->", EncryptedLetter)

    OutputLetter = 0
    if EncryptedLetter == 1 : OutputLetter = "A"
    if EncryptedLetter == 2 : OutputLetter = "B"
    if EncryptedLetter == 3 : OutputLetter = "C"
    print("Encrypted Letter Number =", EncryptedLetter)
    print("Encrypted Letter =", OutputLetter )

    PositionRotor1 = PositionRotor1 + 1
    if PositionRotor1 > 3 :
        PositionRotor1 = 1
        PositionRotor2 = PositionRotor2 + 1
    if PositionRotor2 > 3 :
        PositionRotor2 = 1
        PositionRotor3 = PositionRotor3 + 1
    if PositionRotor3 > 3 : PositionRotor3 = 1

    NumberOfLoops = NumberOfLoops - 1

end = input("Press enter to end:")