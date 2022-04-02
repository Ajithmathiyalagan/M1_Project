/**
 * @file studentrecord_operations.h
 * @author Ajith M (ajithmathiyalagan2001@gmail.com)
 * @brief Header file for Phone book Application
 * @version 0.1
 * @date 2022-04-04
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _student_record_OPERATIONS_H_
#define _student_record_OPERATIONS_H_
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
