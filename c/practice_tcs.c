#include <stdio.h>
int main() {
  char str1[] = "zoho";
  char str2[] = "zoho";

  if (strcmp(str1, str2))
    printf("Strings are not same");
  else
    printf("Strings are Same");

  return 0;
}
