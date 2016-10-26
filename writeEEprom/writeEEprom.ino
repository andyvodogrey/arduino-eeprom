#include <Wire.h>

#include <Eeprom24C01_02.h>

#define EEPROM_ADDRESS  0x50

static Eeprom24C01_02 eeprom(EEPROM_ADDRESS);

void setup(){
    // Initialize serial communication.
    Serial.begin(9600);

    // Initialize EEPROM library.
    eeprom.initialize();

    const byte address = 0;

    //Write a byte at address 0 in EEPROM memory.
    //Serial.println("Write byte to EEPROM memory...");
    //eeprom.writeByte(address, 0xAA);
    // Write cycle time (tWR). See EEPROM memory datasheet for more details.
    // delay(10);
    
    // Read a byte at address 0 in EEPROM memory.

      
      byte mem[] = {0x80, 0xC0, 0xC0, 0x90, 
                    0x81, 0x83, 0x85, 0x85, 
                   
                    0x80, 0x86, 0xD0, 0x25, 
                    0x82, 0x41, 0xC5, 0xC6, 
                   
                    0x80, 0x80, 0xC0, 0x90, 
                    0x81, 0x43, 0x85, 0x85, 
                    
                    0x80, 0x46, 0xD0, 0x25, 
                    0x82, 0x01, 0xC5, 0xC6};

      //eeprom.writeBytes(64, 32, mem);

      delay(1000);
    for (int i = 0;  i< 256; i++){
      byte data = eeprom.readByte(i);
      
      // Print read byte.
      // Serial.print("Read byte = 0x");
      Serial.print(data, HEX);
      Serial.print(" ");
      if((i+1) % 16  == 0) {
        Serial.println("");  
      }
    }
}

void loop()
{

}

void caricaTredici(){
  


}
