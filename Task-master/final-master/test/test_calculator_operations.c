#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add1(void);
void test_subtract1(void);
void test_multiply1(void);
void test_divide1(void);
void test_greater1(void);
void test_smaller1(void);
void test_primenum1(void);
void test_primenum11(void);
void test_evenodd1(void);
void test_evenodd11(void);
void test_posneg1(void);
void test_posneg11(void);
void test_factorial1(void);
void test_factorial11(void);
void test_squarearea1(void);
void test_squareperi1(void);
void test_square1(void);
void test_square11(void);
void test_cube1(void);
void test_cube11(void);
void test_reverse1(void);
void test_reverse11(void);
void test_palindrome1(void);
void test_palindrome11(void);
void test_gcd1(void);
void test_lcm1(void);
void test_modulus1(void);
void test_kilometertometer1(void);
void test_kilotocentimeter1(void);
void test_kilotomillimeter1(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add1);
  CU_add_test(suite, "subtract", test_subtract1);
  CU_add_test(suite, "multiply", test_multiply1);
  CU_add_test(suite, "divide", test_divide1);
  CU_add_test(suite, "greater", test_greater1);
  CU_add_test(suite, "smaller", test_smaller1);
  CU_add_test(suite, "primenum", test_primenum1);
  CU_add_test(suite, "primenum1", test_primenum11);
  CU_add_test(suite, "evenodd", test_evenodd1);
   CU_add_test(suite, "evenodd1", test_evenodd11);
   CU_add_test(suite, "posneg", test_posneg1);
  CU_add_test(suite, "posneg1", test_posneg11);
  CU_add_test(suite, "factorial", test_factorial1);
   CU_add_test(suite, "factorial1", test_factorial11);
   CU_add_test(suite, "squarearea", test_squarearea1);
   CU_add_test(suite, "squareperi", test_squareperi1);
   CU_add_test(suite, "square", test_square1);
   CU_add_test(suite, "square1", test_square11);
   CU_add_test(suite, "cube", test_cube1);
  CU_add_test(suite, "cube1", test_cube11);
  CU_add_test(suite, "reverse", test_reverse1);
  CU_add_test(suite, "reverse1", test_reverse11);
  CU_add_test(suite, "palindrome", test_palindrome1);
  CU_add_test(suite, "palindrome1", test_palindrome11);
   CU_add_test(suite, "gcd", test_gcd1);
  CU_add_test(suite, "lcm", test_lcm1);
  CU_add_test(suite, "modulus", test_modulus1);
   CU_add_test(suite, "kilometertometer", test_kilometertometer1);
 CU_add_test(suite, "kilotocentimeter", test_kilotocentimeter1);
   CU_add_test(suite, "kilotomillimeter", test_kilotomillimeter1);


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
void test_add1(void) {
  CU_ASSERT(30 == add1(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == add1(750, 7500));
}

void test_subtract1(void) {
  CU_ASSERT(-3 == subtract1(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == subtract1(1000, 900));
}

void test_multiply1(void) {
  CU_ASSERT(0 == multiply1(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == multiply1(2, 5));
}

void test_divide1(void) {
  CU_ASSERT(0 == divide1(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == divide1(2, 2));
}

void test_greater1(void) {
  CU_ASSERT(20 == greater1(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(30 == greater1(30, 40));
}
void test_smaller1(void) {
  CU_ASSERT(10 == smaller1(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(40 == smaller1(30, 40));
}

void test_primenum1(void)
{
   CU_ASSERT(1 == primenum1(7));
  
  /* Dummy fail*/
  CU_ASSERT(1 == primenum1(30));
}

void test_primenum11(void)
{
   CU_ASSERT(1 == primenum11(7));
  
  /* Dummy fail*/
  CU_ASSERT(1 == primenum11(30));
}

void test_evenodd1(void)
{
   CU_ASSERT(1 == evenodd1(6));
  
  /* Dummy fail*/
  CU_ASSERT(1 == evenodd1(5));
}

void test_evenodd11(void)
{
   CU_ASSERT(1 == evenodd11(6));
  
  /* Dummy fail*/
  CU_ASSERT(1 == evenodd11(5));
}
  
void test_posneg1(void)
{
   CU_ASSERT(1 == posneg1(6));
  
  /* Dummy fail*/
  CU_ASSERT(1 == posneg1(-5));
}

void test_posneg11(void)
{
   CU_ASSERT(1 == posneg11(6));
  
  /* Dummy fail*/
  CU_ASSERT(1 == posneg11(-5));
}

void test_factorial1(void)
{
   CU_ASSERT(120 == factorial1(5));
  
  /* Dummy fail*/
  CU_ASSERT(110 == factorial1(5));
}

void test_factorial11(void)
{
   CU_ASSERT(120 == factorial11(5));
  
  /* Dummy fail*/
  CU_ASSERT(110 == factorial11(5));
}

void test_squarearea1(void)
{
   CU_ASSERT(25 == squarearea1(5));
  
  /* Dummy fail*/
  CU_ASSERT(11 == squarearea1(5));
}
void test_squareperi1(void)
{
   CU_ASSERT(20 == squareperi1(5));
  
  /* Dummy fail*/
  CU_ASSERT(11 == squareperi1(5));
}
void test_square1(void)
{
   CU_ASSERT(25 == square1(5));
  
  /* Dummy fail*/
  CU_ASSERT(11 == square1(5));
}
void test_square11(void)
{
   CU_ASSERT(25 == square11(5));
  
  /* Dummy fail*/
  CU_ASSERT(11 == square11(5));
}
void test_cube1(void)
{
   CU_ASSERT(125 == cube1(5));
  
  /* Dummy fail*/
  CU_ASSERT(11 == cube1(5));
}
void test_cube11(void)
{
   CU_ASSERT(125 == cube11(5));
  
  /* Dummy fail*/
  CU_ASSERT(11 == cube11(5));
}
void test_reverse1(void)
{
   CU_ASSERT(432 == reverse1(234));
  
  /* Dummy fail*/
  CU_ASSERT(234 == reverse1(234));
}
void test_reverse11(void)
{
   CU_ASSERT(432 == reverse11(234));
  
  /* Dummy fail*/
  CU_ASSERT(234 == reverse11(234));
}
void test_palindrome1(void)
{
   CU_ASSERT(1 == palindrome1(1001));
  
  /* Dummy fail*/
  CU_ASSERT(1 == palindrome1(2345));
}
void test_palindrome11(void)
{
   CU_ASSERT(1 == palindrome11(1001));
  
  /* Dummy fail*/
  CU_ASSERT(1 == palindrome11(2345));
}
void test_gcd1(void)
{
   CU_ASSERT(1 == gcd1(2,5));
  
  /* Dummy fail*/
  CU_ASSERT(1 == gcd1(2,6));
}
void test_lcm1(void)
{
   CU_ASSERT(10 == lcm1(2,5));
  
  /* Dummy fail*/
  CU_ASSERT(11 == lcm1(2,6));
}
void test_modulus1(void)
{
   CU_ASSERT(1 == modulus1(5,2));
  
  /* Dummy fail*/
  CU_ASSERT(11 == modulus1(5,2));
}
void test_kilometertometer1(void)
{
   CU_ASSERT(5000 == kilometertometer1(5));
  
  /* Dummy fail*/
  CU_ASSERT(1000 ==kilometertometer1(5));
}
void test_kilotocentimeter1(void)
{
   CU_ASSERT(500000 == kilotocentimeter1(5));
  
  /* Dummy fail*/
  CU_ASSERT(1000 ==kilotocentimeter1(5));
}
void test_kilotomillimeter1(void)
{
   CU_ASSERT(5000000 ==kilotomillimeter1(5));
  
  /* Dummy fail*/
  CU_ASSERT(1000 ==kilotomillimeter1(5));
}


