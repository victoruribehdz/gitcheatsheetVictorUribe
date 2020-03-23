#include <stdio.h>

int main(int argc, char *argv[])
{
 */ we are going to create three variables, a variable to area with 5 elements, a variable with only the name and a variable
 with the full name
 */
 int areas[] = {10, 12, 13, 14, 20};
 char name[] = "Zed";
 char full_name[] = {'Z', 'e', 'd', ' ', 'A', '.', ' ', 'S', 'h', 'a', 'w', '\0' };
 printf("The size of an int: %ld\n", sizeof(int)); //It is going to print the size of an intger number
 printf("The size of areas (int[]): %ld\n", sizeof(areas)); //this array contain 5 int and it is going to print the number 20
 printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int)); //Here shows the number of the elements dividing to the size of a integer number
 printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]); //Here we can show the value in the 0 place and the 1 in the "areas" array
 //in the following prints is the same thing, but with the variable name
 printf("The size of a char: %ld\n", sizeof(char));
 printf("The size of name (char[]): %ld\n", sizeof(name));
 printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));
 //again but with the variable full name
 printf("The size of full_name (char[]): %ld\n", sizeof(full_name)); 
 printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));
 printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name); //print the name and after the full name values
 return 0;
}

//          Extra Credit
//          first
areas[0]=100;
areas[1]=175;
areas[2]=25;
//          second
name[0]='V';
name[1]='I';
name[2]='C';
name[3]='T';
name[4]='O';
name[5]='R';
full_name[0] = 'V';
full_name[1] = 'R';
full_name[2] = 'U';
full_name[3] = 'H';
//          third
areas[0] = 100;
name[0] = areas[0];
//          fourth
*/ 4 bytes = 4 × 8 = 32 bits
with 32 bits it can be represent in 2^32=4294967296 values:
only positives (whole numbers without simbols): from 0 to 4294967295
positive and negatives (integer numbers with simbols): from -2147483648 to 2147483647
8 bytes = 8 × 8 = 64 bits
*/