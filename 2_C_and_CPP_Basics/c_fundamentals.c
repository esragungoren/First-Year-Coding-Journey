#include <stdio.h>
#include <string.h>
#include <math.h>

int calculateSum(int k);

int main()
{
   printf("Hello World!\n");
   printf("Tabbed\tColumns\tExample\n"); // \t for horizontal tab
   printf("\"Quotes\" inside strings\n");

   int level = 1472;             // Integer (%d)
   float xp = 87.05f;            // Floating point (%f)
   double preciseValue = 21.005; // Double precision (%lf)
   char server = 'A';            // Single character (%c)
   char nick[] = "AngryHuman";   // String (Character array - %s)
   const float PI = 3.14159;     // Constant - cannot be changed

   // %.2f limits decimal places to 2
   printf("User: %s | Level: %d | XP: %.2f\n", nick, level, xp);

   char name[25];
   int age;
   printf("Enter your name: ");
   scanf("%s", name); // For single word strings, '&' is not required for arrays

   // Professional way to handle strings with spaces:
   // fgets(name, 25, stdin);
   // name[strlen(name)-1] = '\0'; // Removes the trailing newline

   double root = sqrt(64);    // Square root
   double power = pow(2, 3);  // 2 to the power of 3
   int rounded = round(5.88); // Rounds to nearest (6)
   int up = ceil(4.26);       // Always rounds up (5)
   int down = floor(4.79);    // Always rounds down (4)

   if (age >= 18)
   {
      printf("Access granted.\n");
   }
   else if (age <= 0)
   {
      printf("Invalid age.\n");
   }
   else
   {
      printf("Access denied.\n");
   }

   char grade = 'B';
   switch (grade)
   {
   case 'A':
      printf("Excellent!\n");
      break;
   case 'B':
      printf("Well done!\n");
      break;
   default:
      printf("Keep trying.\n");
   }

   int myAge = 23;
   int *ptr = &myAge; // Pointer variable storing address of myAge

   printf("Value: %d\n", myAge);           // Prints 23
   printf("Memory Address: %p\n", &myAge); // Prints address (e.g., 0x7ffe...)
   printf("Pointer Value: %p\n", ptr);     // Same address
   printf("Dereferenced: %d\n", *ptr);     // Accesses value via address (23)

   return 0;
}

int calculateSum(int k)
{
   if (k > 0)
      return k + calculateSum(k - 1);
   return 0;
}
