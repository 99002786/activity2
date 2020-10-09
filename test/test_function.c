#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include <function.h>
#define PROJECT_NAME "function"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_factorial(int);
void test_prime(int);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

/* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);

  CU_add_test(suite, "factorial_func", test_factorial);
  CU_add_test(suite, "prime_func", test_prme);


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
void test_add(void) {
  CU_ASSERT(30 == add(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(-3 == subtract(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == subtract(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiply(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == multiply(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == divide(2, 2));
}

void test_factorial(int) {
  CU_ASSERT(3628800 == factorial_func(10));
  CU_ASSERT(40320 == factorial_func(8));
  CU_ASSERT(6 == factorial_func(3));
  CU_ASSERT(5040 == factorial_func(7));
  CU_ASSERT(720 == factorial_func(6));

  /* Dummy fail*/
  CU_ASSERT(100 == factorial_func(5));
}

void test_prime(int) {
  CU_ASSERT(1 == prime_func(7));
  CU_ASSERT(0 == prime_func(52));
  CU_ASSERT(1 == prime_func(3));
  CU_ASSERT(0 == prime_func(12));

  /* Dummy fail*/
  CU_ASSERT(0 == prime_func(6));
}
