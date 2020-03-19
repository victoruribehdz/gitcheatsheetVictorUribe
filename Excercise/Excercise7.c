#include <stdio.h>

int main(int argc, char * argv[]) {
    int bugs = 100;
    double bug_rate = 1.2;
    printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);

    unsigned long universe_of_defects = 1L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L * 8L;
    printf("The entire universe has %ld bugs.\n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n", expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("That is only a %e portion of the universe.\n", part_of_universe);
    
    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte;
    printf("Which means you should care %d%%.\n", care_percentage);
    return 0;
}

/*
EXTRA CREDIT
FIRST
gcc Exercise7.c 
Exercise7.c:7:83: warning: overflow in expression; result is 0 with type
      'long' [-Winteger-overflow]
  ...1L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L * ...
X>8070450532247928832
1 warning generated.
SECOND 
Generate a huge number making operations with long numbers, and this number is
the universe of defects and symbolizes and after we'll make operations with this number
THIRD
The entire universe has 8070450532247928832 bugs.
X>8070450532247928832
FOURTH
Assuming a long has the range of -2,147,483,648 to 2,147,483,647.
An unsigned long has the range of 0 to 4,294,967,295
FIFTH

*/