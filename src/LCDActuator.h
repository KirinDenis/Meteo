#ifndef LCD_ACTUATOR
#define LCD_ACTUATOR

#include <Arduino.h>
#include "src/libraries/LiquidCrystal_I2C/LiquidCrystal_I2C.h"

#define NO_LCD_Long_Signals 4
#define NO_LCD_Short_Signals 4


bool LCD_Setup();

LiquidCrystal_I2C * LCD_Get_LCDPointer();

void LCD_Clear();

void LCD_Set_Light(bool light);

void LCD_Print_Line1(String text);
void LCD_Print_Line2(String text);
void LCD_Print_Line3(String text);
void LCD_Print_Line4(String text);

void LCD_Print_CenterLine1(String text);
void LCD_Print_CenterLine2(String text);
void LCD_Print_CenterLine3(String text);
void LCD_Print_CenterLine4(String text);

void LCD_Print_Text(int column, int row, String text);
void LCD_Print_Number(int column, int row, unsigned n, int base);
#endif