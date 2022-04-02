#include "unity.h"

#define PROJECT_NAME  "student_record"

/* Prototypes for all the test functions */

/**
 * @brief Testing function for student_record
 * 
 */
extern void test_studentrecord();

/* Required by the unity test framework */
void setUp(void)
{
}

/* Required by the unity test framework */
void tearDown(void)
{
}

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