// Test removeVowels function
//
// Richard Buckland
// 1 December 2011
//
// do not alter this file
//
// this program runs some simple tests on a removeVowel
// function.  You must pass these tests to pass the prac
// exam, plus some other tests we will run offline.

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

#define LETTER_0  'i'
#define LETTER_1  'p'
#define LETTER_2  'o'
#define LETTER_3  'o'
#define LETTER_4  'd'
#define LETTER_5  'e'

list removeVowels (list letters);
void testRemoveVowels (void);

int main (int argc, const char * argv[]) {
   testRemoveVowels();
   printf ("All tests passed.  You are Awesome!\n");
   return EXIT_SUCCESS;
}

void testRemoveVowels (void) {
   
   // create a simple list on the stack
   node letter0;
   node letter1;
   node letter2;
   node letter3;
   node letter4;
   node letter5;
   
   list inputList = &letter0;
   list outputList;
   
   letter0.value = LETTER_0;
   letter0.rest  = &letter1;
   
   letter1.value = LETTER_1;
   letter1.rest  = &letter2;
   
   letter2.value = LETTER_2;
   letter2.rest  = &letter3;
   
   letter3.value = LETTER_3;
   letter3.rest  = &letter4;
   
   letter4.value = LETTER_4;
   letter4.rest  = &letter5;
   
   letter5.value = LETTER_5;
   letter5.rest  = NULL;
   
   printf ("testing output list has vowels removed ...\n");
   outputList = removeVowels (inputList);
   
   assert (outputList == &letter1);
   assert (letter1.rest == &letter4);
   assert (letter4.rest == NULL);
   printf ("passed!\n");
   
   printf ("testing node values are not altered\n");
   assert (letter0.value  == LETTER_0);
   assert (letter1.value  == LETTER_1);
   assert (letter2.value  == LETTER_2);
   assert (letter3.value  == LETTER_3);
   assert (letter4.value  == LETTER_4);
   assert (letter5.value  == LETTER_5);
   printf ("passed!\n");   
} 
