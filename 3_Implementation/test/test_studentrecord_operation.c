#include "unity.h"
#include "studentrecord_operations.h"

#define PROJECT_NAME "student_record"

/* Prototypes for all the test functions */

/**
 * @brief Testing function for student_record
 * 
 */

/**
 * @brief Testing function for name
 * 
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
int main(void)
{
    /* Initiate the Unity Test Framework */
    UnityBegin(NULL);

    /* Run Test functions */
    RUN_TEST(test_studentrecord);
    
     /* Close the Unity Test Framework */
    return (UnityEnd());
}