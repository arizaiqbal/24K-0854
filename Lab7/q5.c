#include <stdio.h>

int main(){

    char word[100];
    int length = 0;

    printf("enter a string:");
    gets(word);

    while (word[length]  != '\0'){
        length++;
    }
int isPalindrome = 1;
    for (int i=0, j = length-1; i<j; i++,j--){
       if (word[i] != word[j]){
          isPalindrome = 0;
           }
    }

          if(isPalindrome){
            printf("It is a palindrome");
          }
          else{
            printf("It is not a palindrome");
          }
    return 0;
    }
  
