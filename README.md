# Arduino LCD Menu Navigation Project with I2C Module 
  
 This is an Arduino project that uses an LCD screen with an I2C module and two pushbuttons to create a simple menu navigation system. The project is designed to help beginners get started with Arduino and electronics. 
  
 ## Materials 
  
 To complete this project, you will need: 
  
 - Arduino Uno board 
 - Breadboard 
 - LCD screen with I2C module (16x2) 
 - Two pushbuttons 
 - Jumper wires 
 - USB cable (for programming the Arduino) 
  
 ## Wiring 
  
 The wiring diagram for the project is as follows: 
  
 ``` 
 LCD Screen with I2C module: 
 - Connect the SDA pin to A4 on the Arduino 
 - Connect the SCL pin to A5 on the Arduino 
 - Connect the VCC pin to 5V on the Arduino 
 - Connect the GND pin to GND on the Arduino 
  
 Pushbuttons: 
 - Connect one pin of each pushbutton to GND on the Arduino 
 - Connect the other pin of the first pushbutton to digital pin 9 on the Arduino 
 - Connect the other pin of the second pushbutton to digital pin 10 on the Arduino 
 ``` 
  
 ## Code 
  
 The code for the project is written in the Arduino IDE. It creates a simple menu with four options on the LCD screen, and uses the two pushbuttons to navigate through the menu. An arrow is displayed before the selected setting name to indicate the current selection. 
  
 Note that the code uses the "LiquidCrystal_I2C" library to control the LCD screen with the I2C module. You will need to install this library in the Arduino IDE before uploading the code to your Arduino board. 
  
 ## Usage 
  
 To use the project, simply upload the code to your Arduino Uno board and connect the circuit as described above. When you power on the Arduino, the menu will appear on the LCD screen. Use the up and down pushbuttons to navigate through the menu options. The selected option will be highlighted with an arrow. 
## custem Animations
just the visit website:https://maxpromer.github.io/LCD-Character-Creator/
 ## Credits 
  
 This project was inspired by [this tutorial on LCD menu navigation ↗](https://circuitdigest.com/microcontroller-projects/arduino-lcd-menu-navigation-tutorial) from Circuit Digest. The code for the I2C module is based on the "LiquidCrystal_I2C" library by Frank de Brabander.
