#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int wlan()
{
   char ot, c;
   char error[] = "The Wireless AutoConfig Service (wlansvc) is not running..";
   int i, ir;

   ot = system("netsh wlan show profiles > text.txt");

   FILE *ptr_file;
   char buf[100];

   ptr_file = fopen("text.txt", "r");
   if (!ptr_file)
      return 1;

   while (fgets(buf, 100, ptr_file) != NULL)

      fclose(ptr_file);

   for (ir = 0; buf[ir] != '\0'; ++ir);
      

   for (i = 0; error[i] != '\0'; ++i);
      

   printf("Length of the string: %d \n", i);
   printf("length of output: %d", ir);
   if (ir == i)
   {
      printf("\n The Wireless AutoConfig Service (wlansvc) is  running on your System.");
      remove("text.txt");
   }
   else
   {
      printf("\nThe Wireless AutoConfig Service (wlansvc) is not running on your System.");
      remove("text.txt");
   }
   return 0;
}

int main()
{

   wlan();

   return 0;
}
