/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int add1(int operand1, int operand2);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
int subtract1(int operand1, int operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
int multiply1(int operand1, int operand2);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
int divide1(int operand1, int operand2);

/**
*  check greater the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the greater operand1 or operand2
*/
int greater1(int operand1, int operand2);
int smaller1(int operand1, int operand2);
int primenum1(int operand1);
int primenum11(int operand2);
int evenodd1(int operand1);
int evenodd11(int operand2);
int posneg1(int operand1);
int posneg11(int operand2);
int factorial1(int operand1);
int factorial11(int operand2);
int squarearea1(int operand1);
int squareperi1(int operand1);
int square1(int operand1);
int square11(int operand2);
int cube1(int operand1);
int cube11(int operand2);
int reverse1(int operand1);
int reverse11(int operand2);
int palindrome1(int operand1);
int palindrome11(int operand2);
int gcd1(int operand1, int operand2);
int lcm1(int operand1, int operand2);
int modulus1(int operand1, int operand2);
int kilometertometer1(int operand1);
int kilotocentimeter1(int operand1);
int kilotomillimeter1(int operand1);

#endif  /* #define __CALCULATOR_OPERATIONS_H__ */
