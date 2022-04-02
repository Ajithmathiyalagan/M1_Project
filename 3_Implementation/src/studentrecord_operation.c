/**
 * @file studentrecord_operations.c
 * @author AJITH M(ajithmathiyalagan2001@gmail.com)
 * @brief This is the source code which contains all the functions for the project
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <studentrecord_operations.h>

/**
 * @brief prints the input name
 * @return Text file generated with user input name
 */
void SetColor(int ForgC);

/**
 * @brief set the foreground color
 * 
 */
void ClearConsoleToColors(int ForgC, int BackC);

/**
 * @brief To get any more color we need
 * 
 */
void SetColorAndBackground(int ForgC, int BackC);

/**
 * @brief To get color and background we need
 * 
 */
void gotoxy(int x, int y);

/**
 * @brief Take the cursor to particular screen
 * 
 */
void drawRectangle();

/**
 * @brief To draw a rectangle
 * 
 */
void clearWindow();

/**
 * @brief To clear the console window
 * 
 */
void window();

/**
 * @brief create a black window
 * 
 */
void get_password(char* pass);

/* Required by the unity test framework */
void get_password(char* pass)
/* Required by the unity test framework */
void print_heading(const char st[]){}

/* Start of the application test */
{
    
}