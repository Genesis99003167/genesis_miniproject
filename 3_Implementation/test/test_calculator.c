#include "CUnit/Basic.h"
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator.h>
#define PROJECT_NAME   "Scientific Calculator"

/* Prototypes for all the test functions */

void test_addition(void);
void test_subtraction(void);
void test_multiplication(void);
void test_division(void);
void test_ANDoperator(void);




/* Start of the application test */
int main() {
  
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/
  
  CU_add_test(suite, "addition", test_addition);
  CU_add_test(suite, "subtraction", test_subtraction);
  CU_add_test(suite, "multiplication", test_multiplication);
  CU_add_test(suite, "division", test_division);
  CU_add_test(suite, "ANDoperator", test_ANDoperator);

  
/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}


/* Write all the test functions */


void test_addition(void) {
  CU_ASSERT(9 == addition(5,4));
  CU_ASSERT(-2 == addition(5,-7));

}

void test_subtraction(void) {
  CU_ASSERT(1 == subtraction(5,4));
  CU_ASSERT(-9 == subtraction(-5,4));
}

void test_multiplication(void) {
  CU_ASSERT(20 == multiplication(5,4));
}

void test_division(void) {
  CU_ASSERT(1 == division(5,4));
}

void test_ANDoperator(void) {
  CU_ASSERT(10 == ANDoperator(10,15));
  
}