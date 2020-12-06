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
void test_factorial(void);
void test_prime(void);
void test_ANDoperator(void);
void test_ORoperator(void);
void test_NOToperator(void);
void test_NANDoperator(void);
void test_NORoperator(void);
void test_XORoperator(void);
void test_XNORoperator(void);
void test_square(void);
void test_cube(void);
void test_power(void);
void test_modulorem(void);
void test_KMtoMconv(void);
void test_METERtoKM(void);
void test_KMPHtoMPH(void);
void test_MPHtoKMPH(void);

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
  CU_add_test(suite, "factorial", test_factorial);
  CU_add_test(suite, "prime", test_prime);
  CU_add_test(suite, "ANDoperator", test_ANDoperator);
  CU_add_test(suite, "ORoperator", test_ORoperator);
  CU_add_test(suite, "NOToperator", test_NOToperator);
  CU_add_test(suite, "NANDoperator", test_NANDoperator);
  CU_add_test(suite, "NORoperator", test_NORoperator);
  CU_add_test(suite, "XORoperator", test_XORoperator);
  CU_add_test(suite, "XNORoperator", test_XNORoperator);
  CU_add_test(suite, "Square", test_square);
  CU_add_test(suite, "Cube", test_cube);
  CU_add_test(suite, "Power", test_power);
  CU_add_test(suite, "Modulus", test_modulorem);
  CU_add_test(suite, "KMtoMconv", test_modulorem);
  CU_add_test(suite, "METERtoKM", test_modulorem);
  CU_add_test(suite, "KMPHtoMPH", test_modulorem);
  CU_add_test(suite, "MPHtoKMPH", test_modulorem);


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
  CU_ASSERT_EQUAL(1000, subtraction(1500,500));
}

void test_multiplication(void) {
  CU_ASSERT(20 == multiplication(5,4));
  CU_ASSERT_EQUAL(5000, multiplication(500,10));
}

void test_division(void) {
  CU_ASSERT(1 == division(5,4));
  CU_ASSERT_EQUAL(3, division(1500,500));
}

void test_factorial(void) {
  CU_ASSERT(120 == factorial(5));
  CU_ASSERT(0 == factorial(-10));
  
}
void test_prime(void) {
  CU_ASSERT(1 == prime(2));
  CU_ASSERT(0 == prime(4));
  
}

void test_ANDoperator(void) {
  CU_ASSERT(10 == ANDoperator(10,15));
  
}

void test_ORoperator(void) {
  CU_ASSERT(29 == ORoperator(12,25));
  
}
void test_NOToperator(void) {
  CU_ASSERT(-36 == NOToperator(35));
  
}
void test_NANDoperator(void) {
  CU_ASSERT(-6 == NANDoperator(5,7));
  
}
void test_NORoperator(void) {
  CU_ASSERT(0 == NORoperator(3,4));
  
}
void test_XORoperator(void) {
  CU_ASSERT(120 == XORoperator(40,80));
  
}
void test_XNORoperator(void) {
  CU_ASSERT(-3 == XNORoperator(5,7));
  
}

void test_square(void) {
  CU_ASSERT(4 == square(2));
  
}

void test_cube(void) {
  CU_ASSERT(8 == cube(2));
  
}

void test_power(void) {
  CU_ASSERT(1024 == power(2,10));
  CU_ASSERT(1 == power(2,0));
  
}

void test_modulorem(void) {
  CU_ASSERT(1 == modulorem(10,3));
  
}

void test_KMtoMconv(void) {
  CU_ASSERT(15000 == KMtoMconv(15));
  CU_ASSERT(0 == KMtoMconv(0));  
}


void test_METERtoKM(void) {
  CU_ASSERT(15 == METERtoKM(15000));
  CU_ASSERT(0 == METERtoKM(0));  
}

void test_KMPHtoMPH(void) {
  CU_ASSERT(7.456454 == KMPHtoMPH(12));
  CU_ASSERT(0 == KMPHtoMPH(0));  
}


void test_MPHtoKMPH(void) {
  CU_ASSERT(27.358780 == MPHtoKMPH(17));
  CU_ASSERT(0 == MPHtoKMPH(0));  
}


