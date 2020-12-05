#include "CUnit/Basic.h"
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator.h>
#define PROJECT_NAME   "Scientific Calculator"

/* Prototypes for all the test functions */

//void test_login(void);
void test_addition(void);
<<<<<<< HEAD
/* void test_temperature(void);
void test_sanitize_check(void); */
=======
void test_subtraction(void);
void test_multilication(void);
>>>>>>> 732f2b7586668546ef65440b140fbcb6b30b77a8

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
  CU_add_test(suite, "phone", test_phone);
  CU_add_test(suite, "temperature", test_temperature);
  CU_add_test(suite, "sanitize", test_sanitize_check);


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

}
/*

void test_temperature(void) {
  CU_ASSERT(1 == temp_check());
  CU_ASSERT(1 == temp_check());
}

void test_sanitize_check(void) {
  CU_ASSERT(1 == sanitize());
  CU_ASSERT(1 == sanitize());
}
*/