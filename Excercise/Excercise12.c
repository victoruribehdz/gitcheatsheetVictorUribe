#include <stdio.h>

int main(int argc, char *argv[])
{
 int i = 0;//create an index
 if(argc == 1) {//In this part you say that if your argc is equal to 1, print you only have one argument
 printf("You only have one argument. You suck.\n");
 } else if(argc > 1 && argc < 4) {//In this part you say that if your argc did not satisfy the previous condition and you verificate if satisfy this condition
 printf("Here's your arguments:\n");
 for(i = 0; i < argc; i++) {//print argument with i index
 printf("%s ", argv[i]);
 }
 printf("\n");
 } else {// If the argc did not satisfy any previous condition print that you have many arguments
 printf("You have too many arguments. You suck.\n");
 }
 return 0;
}

//          Extra Credit
//          First
//Also of &&(and) there is ||(or) if one condicional is true all will be true
//          Second
if (argc == 1) {
        printf("You only have one argument. You suck.\n");
    } else if (argc > 1 || argc < 4) {
        printf("Here's your arguments:\n");
        for (i = 0; i < argc; i++) {
            printf("%s ", argv[i]);
        }
        printf("\n");
    } else {
        printf("You have too many arguments. You suck.\n");
    }
    return 0;
}
//          Third
int main(int argc, char * argv[]) {
    int i = 0;//is important create the index for the future loops
    int j = 0;
    char * states[] = {//we going to create a array of strings with some state names
        "California",
        "Oregon",
        "Washington",
        "Texas"
    };
    while (i < argc) {//this is a while-loop and count all arguments with argc and print each one with argv
        printf("arg %d: %s\n", i, argv[i]);
        states[j+4] = argv[j];
        j++;
        i++;
    }
    int num_states = 4+argc;//create an axuliar variable to count
    i = 0;//restart the index
    while (i < num_states) {//here we will print all states
        printf("state %d: %s\n", i, states[i]);
        i++;
    }
    return 0;
}

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
    for (i = 1; i < argc; i++) {//this loop print all arguments from you
        printf("arg %d: %s\n", i, argv[i]);
    }
    int num_states = 4;//in the last part we create an array with 4 values and we going to print each one
    for (i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }
    return 0;
}
//          Fourth
//Go back to Exercises 10 and 11, and use if-statements to make the loops exit early. You will need the break statement to do that. 
//Go read about it. Is the first test really saying the right thing? To you the "first argument" isn't the same first argument a user entered.
//Fix it. 
