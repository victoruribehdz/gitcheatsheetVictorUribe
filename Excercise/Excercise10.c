#include <stdio.h>

int main(int argc, char *argv[])
{
 int i = 0;
 for(i = 1; i < argc; i++) {//this loop print all arguments from you
    printf("arg %d: %s\n", i, argv[i]);
 }
 char *states[] = {
    "California", "Oregon",
    "Washington", "Texas"
 };
 int num_states = 4;//we create an array with 4 values and we going to print each one
 for(i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
 }
 return 0;
}

//          Extra Credit
//          First
//We can enter code that we want to executed a certain number of times while the condition is met
//          Second
//For declarations it is not necessary to put semicolons, because we can join them in a single line with commas
//          Third
#include <stdio.h>
int main(int argc, char * argv[]) {
    int i = 0;
    for (i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }
    char * states[] = {
        NULL,
        "Oregon",
        "Washington",
        "Texas"
    };
    int num_states = 4;
    for (i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }
    return 0;
//          Fourth
#include <stdio.h>
int main(int argc, char * argv[]) {
    int i = 0;
    char * states[] = {
        "California",
        "Oregon",
        "Washington",
        "Texas"
    };
    states[0] = argv[1];
    argv[1] = states[1];
    for (i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }
    int num_states = 4;
    for (i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }
    return 0;
}