#include "CUnit/Basic.h"
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator.h>
#define PROJECT_NAME   "Scientific Calculator"

/* Prototypes for all the test functions */

//void test_login(void);
void test_addition(void);
void test_subtraction(void);
void test_multiplication(void);
void test_division(void);
/* Start of the application test */
int main() {
  
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/
  //CU_add_test(suite, "login", test_login);
  CU_add_test(suite, "addition", test_addition);
  CU_add_test(suite, "subtraction", test_subtraction;
  CU_add_test(suite, "multiplication", test_multiplication);
  CU_add_test(suite, "division", test_division);

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
<<<<<<< HEAD

}
/*

void test_temperature(void) {
  CU_ASSERT(1 == temp_check());
  CU_ASSERT(1 == temp_check());
}
=======
  CU_ASSERT(-2 == addition(5,-7));
>>>>>>> 5247f4dbc181c1e6a1d6c564d2117383ffcd5bac

}
