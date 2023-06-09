#include <stdio.h>
#include <string.h>

int main() {
   const char haystack[200] = "Today was a good day!";
   const char needle[200] = "good day!";
   char *ret;

   ret = strstr(haystack, needle);

   if (ret != NULL) {
      printf("A substring é: %s\n", ret);
   } else {
      printf("Substring não encontrada.\n");
   }
   
   return 0;
}