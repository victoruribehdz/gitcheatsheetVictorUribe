#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc != 2) {
        printf("ERROR: You need one argument.\n");
 // this is how you abort a program
 return 1;
 }
 int i = 0;
 for(i = 0; argv[1][i] != '\0'; i++) {
    char letter = argv[1][i];
    switch(letter) {//with this you can see some cases 
        case 'a':
        case 'A':
            printf("%d: 'A'\n", i);
            break;//If the character does not satisfy the case, break and pass to other case
        case 'e':
        case 'E':
            printf("%d: 'E'\n", i);
            break;
        case 'i':
        case 'I':
            printf("%d: 'I'\n", i);
            break;
        case 'o':
         case 'O':
             printf("%d: 'O'\n", i);
            break;
        case 'u':
        case 'U':
            printf("%d: 'U'\n", i);
            break;
        case 'y':
        case 'Y':
            if(i > 2) {
                // it's only sometimes Y
                printf("%d: 'Y'\n", i);
             }
            break;
        default:
            printf("%d: %c is not a vowel\n", i, letter);
         }
     }
 return 0;
}

//          Extra Credit
//          First
int main (int argc, char *argv[]){
    if(argc != 2){//calificate if therea re more than 2 arguments or only one
        printf("ERROR: You need one argument. \n");
        return 1;
    }
    int i = 0;
    for(i = 0; argv[1][i] != '\0'; i++){
        char letter = argv[1][i];//call the variable argv and ask the argument for i
        switch (letter){//calificate the letter variable and ask each letter if is the same of vowel
        case 'a':
        case 'A':
            letter += 32;
            printf("%d: %c\n",i,letter);
            break;
        case 'e':
        case 'E':
            letter += 32;
            printf("%d: %c\n",i,letter);
            break;
        case 'i':
        case 'I':
            letter += 32;
            printf("%d: %c\n",i,letter);
            break;
        case 'o':
        case 'O':
            letter += 32;
            printf("%d: %c\n",i,letter);
            break;
        case 'u':
        case 'U':
            letter += 32;
            printf("%d: '%c'\n",i,letter);
            break;
        case 'y':
        case 'Y':
            letter += 32;
            if(i > 2){
                printf("%d: %c\n",i,letter);// if the Y is in the start it wont print
            }
            break;
        
        default:
            letter += 32;
        printf("%d: %c is not a vowel\n", i, letter);//in the deafult case the switch says 'letter' is not a vowel
            break;
        }
    }
    return 0;
}
//          Second
#include <stdio.h>
int main (int argc, char *argv[]){
    if(argc != 2){//calificate if therea re more than 2 arguments or only one
        printf("ERROR: You need one argument. \n");
        return 1;
    }
    int i = 0;
    char letter = argv[1][i];
    for(i = 0,letter = argv[1][i]; argv[1][i] != '\0'; i++,letter = argv[1][i]){
        //call the variable argv and ask the argument for i
        switch (letter){//calificate the letter variable and ask each letter if is the same of vowel
        case 'a':
        case 'A':
            printf("%d: 'A'\n",i);
            break;
        case 'e':
        case 'E':
            printf("%d: 'E'\n",i);
            break;
        case 'i':
        case 'I':
            printf("%d: 'I'\n",i);
            break;
        case 'o':
        case 'O':
            printf("%d: 'O'\n",i);
            break;
        case 'u':
        case 'U':
            printf("%d: 'U'\n",i);
            break;
        case 'y':
        case 'Y':
            if(i > 2){
                printf("%d: 'Y'\n",i);// if the Y is in the start it wont print
            }
            break;
        
        default:
        printf("%d: %c is not a vowel\n", i, letter);//in the deafult case the switch says 'letter' is not a vowel
            break;
        }
    }
    return 0;
}
//          Third
#include <stdio.h>
int main (int argc, char *argv[]){
    int i;
    int j;
    for (j = 1; j < argc; j++){
    for(i = 0; argv[j][i] != '\0'; i++){
        char letter = argv[j][i];
        switch (letter){
        case 'a':
        case 'A':
            printf("%d: 'A'\n",i);
            break;
        case 'e':
        case 'E':
            printf("%d: 'E'\n",i);
            break;
        case 'i':
        case 'I':
            printf("%d: 'I'\n",i);
            break;
        case 'o':
        case 'O':
            printf("%d: 'O'\n",i);
            break;
        case 'u':
        case 'U':
            printf("%d: 'U'\n",i);
            break;
        case 'y':
        case 'Y':
            if(i > 2){
                printf("%d: 'Y'\n",i);
            }
            break;
        
        default:
        printf("%d: %c is not a vowel\n", i, letter);
            break;
        }
    }
    }
    
    return 0;
}
//          Fourth
#include <stdio.h>
int main (int argc, char *argv[]){
    if(argc != 2){
        printf("ERROR: You need one argument. \n");
        return 1;
    }
    int i = 0;
    for(i = 0; argv[1][i] != '\0'; i++){
        char letter = argv[1][i];
        if (letter == 'a' || letter == 'A'){
            printf("%d: 'A'\n",i);
        }else if (letter == 'e' || letter == 'E'){
            printf("%d: 'E'\n",i);
        }else if (letter == 'i' || letter == 'I'){
            printf("%d: 'I'\n",i);
        }else if (letter == 'o' || letter == 'O'){
            printf("%d: 'O'\n",i);
        }else if (letter == 'u' || letter == 'U'){
            printf("%d: 'U'\n",i);
        }else if (letter == 'y' || letter == 'Y'){
            if(i > 2){
                printf("%d: 'Y'\n",i);
            }
        }
        else{
            printf("%d: %c is not a vowel\n", i, letter);
        }
    }
    return 0;
}
//          Fifth
CODE
case 'y':
case 'Y':
    if(i > 2){
        printf("%d: 'Y'\n",i);
    break;
    }