#include<stdio.h>
#include<stdbool.h>

char get_capital_letter(char* string){
  char first_character = string[0];

  if(first_character >= 65 && first_character <= 90) return first_character;
  else{
    if(first_character == 0) return 0;
    else return get_capital_letter(string+1);
  }
}

bool is_there_capital_0(char* string){
  char first_character = string[0];
  if(first_character >= 65 && first_character <= 90) return true;
  else{
    if(first_character == 0) return false;
    else return is_there_capital_0(string+1);
  }
}


bool is_capital_char(char character){
  return (character >= 65 && character <= 90);
}

bool is_there_capital_1(char* string){
  return (string[0] != 0) && (is_capital_char(string[0]) || is_there_capital_1(string+1));
}

int main()
{
  char ch[] = "tesTstring";
  printf("first capital letter is %c \n", get_capital_letter(ch));
  printf("is there captial version 0 : %s \n", is_there_capital_0(ch) ? "true" : "false");
  printf("is there captial version 1 : %s \n", is_there_capital_1(ch) ? "true" : "false");
  return 0;
}
