# LCD_I2C_MSP430F2553
16X2 LCD with MSP430G2553 using I2C Protocol

# Vanakkam!
This is a library which can be used to interface 16X2 LCD driven by Hitachi HD44780 Driver with MSP430G2553.
But it could support almost all dimensions of LCD with Hitachi HD44780 Drivers.
This library is tested to be working successfully on Texas Instruments Code Composer Studio Version: 10.3.1.00003.

 The Connection is as follows:
 ***********************************
    LCD      GPIO PIN ON CONTROLLER/BOARD  
    VCC -->  5V                      
    GND -->  GND                     
    SDA -->  P1.7                    
    SCL -->  P1.6                    
 ***********************************
* Usage:
    * Copy and paste LCD_I2C.H and LCD_I2C.C at the directory of your main function.
    * An example program is provided to illustrate the available functions.

The available functions are:
* void lcd_init(Slave Address);
         //Initialize the LCD with its I2C Address as per the datasheet.
* void lcd_print(String);
        //Print the String on the LCD. 
* void lcd_setcursor(row,column);
        //Place the cursor to the values defined as per the arguments "row" and "column".
* void set_backlight();
        //Set backlight of the LCD by software. If backlight is not required, simply don't use this function :-).
