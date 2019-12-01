// Nixie Tube Driver by Marcin Saj https://nixietester.com
// https://github.com/marcinsaj/Nixie-Tube-Driver
//
// Driving Nixie Tubes Example #2
//
// This example demonstrates how to control up to 6 nixie tubes.
// The control is carried out using up to six Nixie Tube Drivers in serial connection.

#define DIN_PIN   7          // HCT595 shift register serial data pin             
#define CLK_PIN   6          // Clock pin
#define EN_PIN    5          // Latch pin


// Function prototype with optional parameters
void NixieDisplay(byte digit1 = 10, byte digit2 = 10, byte digit3 = 10, byte digit4 = 10, byte digit5 = 10, byte digit6 = 10);

void setup() 
{  
    pinMode(DIN_PIN, OUTPUT);       // Nixie driver serial data input 
    digitalWrite(DIN_PIN, LOW);    
    
    pinMode(CLK_PIN, OUTPUT);       // Nixie driver data shift register CLK input 
    digitalWrite(CLK_PIN, LOW);         
  
    pinMode(EN_PIN, OUTPUT);        // Nixie driver enable input
    digitalWrite(EN_PIN, LOW);
}

void loop ()
{
  NixieDisplay(1);
//NixieDisplay(1, 2);
//NixieDisplay(1, 2, 3);
//NixieDisplay(1, 2, 3, 4);
//NixieDisplay(1, 2, 3, 4, 5);
//NixieDisplay(1, 2, 3, 4, 5, 6);   //  NixieDisplay(digit1, digit2, digit3, digit4, digit5, digit6);
  delay(1000);       
}

// Function with optional parameters 
void NixieDisplay(byte digit1, byte digit2 , byte digit3, byte digit4, byte digit5, byte digit6)
{
  StartShiftOutData();
  if (digit6 != 10) ShiftOutData(digit6);
  if (digit5 != 10) ShiftOutData(digit5);
  if (digit4 != 10) ShiftOutData(digit4);
  if (digit3 != 10) ShiftOutData(digit3);
  if (digit2 != 10) ShiftOutData(digit2);
  if (digit1 != 10) ShiftOutData(digit1);
  EndShiftOutData();
}

void StartShiftOutData()
{
  // Ground EN pin and hold low for as long as you are transmitting
  digitalWrite(EN_PIN, 0); 
  // Clear everything out just in case to
  // prepare shift register for bit shifting
  digitalWrite(DIN_PIN, 0);
  digitalWrite(CLK_PIN, 0);  
}

void ShiftOutData(byte digit)
{
  // Send data to the nixie drivers 
  for (int i = 15; i >= 0; i--)
  {
    // Set high only the bit that corresponds to the current nixie digit
    if(i == digit) digitalWrite(DIN_PIN, 1); 
    else digitalWrite(DIN_PIN, 0);
    
    // Register shifts bits on upstroke of CLK pin 
    digitalWrite(CLK_PIN, 1);
    // Set low the data pin after shift to prevent bleed through
    digitalWrite(CLK_PIN, 0);  
  }   
}

void EndShiftOutData()
{
  // Return the EN pin high to signal chip that it 
  // no longer needs to listen for data
  digitalWrite(EN_PIN, 1);
    
  // Stop shifting
  digitalWrite(CLK_PIN, 0);    
}
