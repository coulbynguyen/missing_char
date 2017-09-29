#include <stdio.h>
#include <stdlib.h>

char findMissingLetter(char array[], int arrayLength){
  int i;
  for(i = 0; i < arrayLength-1; i++){
  	if(array[i+1] - array[i] != 1){
    	return array[i]+1;
    }
  }
}

int main(){
  int arrayLength = 4;
  char array[] = {'a', 'b', 'c', 'e'};
  char missing;

  missing = findMissingLetter(array, arrayLength);
  printf("Missing letter is %c\n", missing);

  //Below is code if you want to get user input
  // printf("ENTER SIZE OF ARRAY PLEASE MAKE IT THE SIZE GREATER THAN 2, I REALLY DONT WANT TO MAKE A CONDITIONAL TO CHECK VALID NUMBER\n");
  // scanf("%d\n", &arrayLength);
  // array = malloc(sizeof(char)*(arrayLength));
  // for(i = 0; i < arrayLength; i++){
  //   printf("Enter consecutive characters but skip over 1 character and make sure the character you want to skip isnt the last or the first\n");
  //   scanf("%c\n", &array[i]);
  // }
  // findMissingLetter(array, arrayLength);
  // free(array);

  return 0;
}
