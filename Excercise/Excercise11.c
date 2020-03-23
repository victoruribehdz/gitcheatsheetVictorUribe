#include <stdio.h>

int main(int argc, char *argv[])
{
 // go through each string in argv
 int i = 0;//we create an index for the future loops
 while(i < argc) {//this is a while-loop and count all arguments with argc and print each one with argv
 printf("arg %d: %s\n", i, argv[i]);
 i++;
 }
 // let's make our own array of strings
 char *states[] = {
 "California", "Oregon",
 "Washington", "Texas"
 };
 int num_states = 4;
 i = 0; //restart the index
 while(i < num_states) {//here we are going to print all states
 printf("state %d: %s\n", i, states[i]);
 i++;
 }
 return 0;
}

//          Extra Credit
//          First
int main(int argc, char * argv[]) {
    int i = argc;
    i--;
    while (i >= 0) {
        printf("arg %d: %s\n", i, argv[i]);
        i--;
    }
    char * states[] = {
        "California",
        "Washington",
        "Denver",
        "Texas"
    };
    int num_states = 0;
    i = 3;//restart the index
    while (i >= num_states) {
        printf("state %d: %s\n", i, states[i]);
        i--;
    }
    return 0;
}
//          Second
int main(int argc, char * argv[]) {
    int i = 0;
    int j = 0;
    char * states[] = {
        "California",
        "Washington",
        "Denver",
        "Texas"   
    };
    while (i < argc) {
        printf("arg %d: %s\n", i, argv[i]);
        states[j+4] = argv[j];
        j++;
        i++;
    }
    int num_states = 4+argc;
    i = 0;
    while (i < num_states) {
        printf("state %d: %s\n", i, states[i]);
        i++;
    }
    return 0;
}
//          Third
int main(int argc, char * argv[]) {
    int i = 0;
    int j = 0;
    char * states[] = {
       "California",
        "Washington",
        "Denver",
        "Texas"  
    };
    while (i < argc) {
        printf("arg %d: %s\n", i, argv[i]);
        states[j+4] = argv[j];
        j++;
        i++;
    }
    int num_states = 4+argc;
    i = 0;
    while (i < num_states) {
        printf("state %d: %s\n", i, states[i]);
        i++;
    }
    return 0;
}
//          Fourth
//Yes, the program copy my new arguments in an infinite loop and never stop