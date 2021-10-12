#include <msp430.h> 
#include "LCD_I2C.H"

/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	lcd_init(0x27);//Initialize the LCD as slave with I2C Slave address as 0x27
	set_backlight();//Turn on the backlight
	lcd_setcursor(0,2);//Set the position of the Cursor
	lcd_print("Sanjeeve R");//Print the String Sanjeeve R. The String must be enclosed within double brackets.
	return 0;
}
