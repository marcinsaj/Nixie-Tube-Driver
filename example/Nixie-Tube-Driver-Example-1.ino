// Nixie Tube Driver by Marcin Saj https://nixietester.com
// https://github.com/marcinsaj/Nixie-Tube-Driver
//
// Driving Nixie Tube Example #1
//
// This example demonstrates how to control a nixie tube.
// The control is carried out using the Nixie Tube Driver.

#define DIN_PIN   7          // Nixie driver (shift register) serial data input pin             
#define CLK_PIN   6          // Nixie driver clock input pin
#define EN_PIN    5          // Nixie driver enable input pin

void setup() 
{      
    pinMode(DIN_PIN, OUTPUT);
    digitalWrite(DIN_PIN, LOW);    
    
    pinMode(CLK_PIN, OUTPUT);
    digitalWrite(CLK_PIN, LOW);         
  
    pinMode(EN_PIN, OUTPUT);
    digitalWrite(EN_PIN, LOW);
}

void loop ()
{
  for(int i = 0; i <= 9; i++)
  {
    NixieDisplay(i);                // Do simple counting
    delay(1000); 
  }
}


void NixieDisplay(byte digit)
{
  // Ground EN pin and hold low for as long as you are transmitting
  digitalWrite(EN_PIN, 0); 
  // Clear everything out just in case to
  // prepare shift register for bit shifting
  digitalWrite(DIN_PIN, 0);
  digitalWrite(CLK_PIN, 0);  
  
  // Send data to the nixie driver 
  for (int i = 15; i >= 0; i--)
  {
    // Set high only the bit that corresponds to the current nixie cathode
    if(i == digit) digitalWrite(DIN_PIN, 1); 
    else digitalWrite(DIN_PIN, 0);
    
    // Register shifts bits on upstroke of CLK pin 
    digitalWrite(CLK_PIN, 1);
    //Set low the data pin after shift to prevent bleed through
    digitalWrite(CLK_PIN, 0);  
  }  

  // Return the EN pin high to signal chip that it 
  // no longer needs to listen for data
  digitalWrite(EN_PIN, 1);
    
  // Stop shifting
  digitalWrite(CLK_PIN, 0);        
}
