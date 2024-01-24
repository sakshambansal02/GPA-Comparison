#include "gpa.h"

// return: struct person
// param: (struct person p1, struct person p2)
// TODO: create a function that returns the person who has a higher GPA.
// TODO: if GPAs are equal, then return the first person (the first parameter).
// TODO: this function can only be called in the file where it is declared.
static struct person compareTo(struct person p1, struct person p2) {
  if (p1.GPA>=p2.GPA){
    return p1;
  }
  return p2;
}



// return: void
// param: (struct person persons[], int len)
// TODO: create a function that returns the person who has the highest GPA.
// TODO: update the value of the_person in the main.c file to this person.
// TODO: this function must be callable from other modules.
extern void find_the_person(struct person persons[], int len) {
extern struct person the_person;
the_person = persons[0];
for (int i=1; i<len; i++){
    the_person = compareTo(the_person, persons[i]);
  }
}