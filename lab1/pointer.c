/*
 * CSE 351 Lab 1 (Data Lab - Pointers)
 *
 * <Please put your name and userid here>
 *
 * pointer.c - Source file with your solutions to the Lab.
 *          This is the file you will hand in to your instructor.
 *
 * WARNING: Do not include the <stdio.h> header; it confuses the dlc
 * compiler. You can still use printf for debugging without including
 * <stdio.h>, the following function declaration should prevent a
 * compiler warning. In general, it's not good practice to ignore
 * compiler warnings, but in this case it's OK.
 */
int printf(const char *, ...);

#if 0
/*
 * Instructions to Students:
 *
 * STEP 1: Read the following instructions carefully.
 */

You will provide your solution to this homework by
editing the collection of functions in this source file.

  For 1-3, only Unary integer operations *, &, and binary integer
  operations - + * are allowed. For the last three, you may also
  use shifts (<<, >>), ~, ==, and ^.

  You may not do any of the following in this file:
  1. Use any control constructs such as if, do, while, for, switch, etc.
  2. Use the [] operator to index into arrays
  3. Define or use any macros.
  4. Define any additional functions in this file.
  5. Call any functions.
  6. Use any other operations, such as &&, ||, ?: or sizeof.

  You may assume that your machine:
  1. Uses 2s complement, 32-bit representations of integers.
  2. Performs right shifts arithmetically.
  3. Has unpredictable behavior when shifting an integer by an amount
     greater than or equal to the word size.

/*
 * STEP 2: Modify the following functions according the coding rules.
 *
 * Test the code below in your own 'main' program.
 *
 */

#endif

/*
 * Return the size of an integer in bytes.
 */
int intSize() {
  int intArray[10];
  int * intPtr1;
  int * intPtr2;
  // Write code to compute size of an integer.

  return 2;
}

/*
 * Return the size of a double in bytes.
 */
int doubleSize() {
  double doubArray[10];
  double * doubPtr1;
  double * doubPtr2;
  // Write code to compute size of a double.


  return 2;
}

/*
 * Return the size of a pointer in bytes.
 */
int pointerSize() {
  double * ptrArray[10];
  double ** ptrPtr1;
  double ** ptrPtr2;
  // Write code to compute size of a pointer.

  return 2;
}

/*
 * Modify intArray[5] to be the value 351 using only pointer arithmetic.
 */
int changeValue() {
  int intArray[10];
  int * intPtr1 = intArray;
  // Write code to change value of intArray[5] to 351 using only intPtr1 and the + operator.
  // Remember not to use constants greater than 255.

  return intArray[5];
}


/*
 * Return 1 if ptr1 and ptr2 are within the *same* 64-byte aligned  block (or
 * word) of memory. Return zero otherwise.
 * Operators / and % and loops are NOT allowed.
 */
int withinSameBlock(int * ptr1, int * ptr2) {
  return 2;
}

/*
 * Return 1 if ptr points to the beginning of an element within the specified intArray, 0 otherwise.
 */
int withinArray(int * intArray, int size, int * ptr) {
  return 2;
}
