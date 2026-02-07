#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <ctype.h>
#include <math.h>
char *smash (const char *const words[/* count */], size_t count){
    char* cible=malloc(sizeof(char));
   if (count<=1){
    cible=strdup(*(words));
    return cible;
    free(cible);
   }
   char* phrase=malloc(sizeof(char));
    size_t index=0;
    cible=strdup(*(words+0));
        for (size_t z = 0; z < strlen(cible); z++){
            *(phrase+index)=*(cible+z);    
            index++;
        }
        for (size_t i = 1; i < count; i++){
        *(phrase+index)=' ';    
        index++;
        cible=strdup(*(words+i));
        for (size_t z = 0; z < strlen(cible); z++){
            *(phrase+index)=*(cible+z);    
            index++;
        }
    }
    *(phrase+index)='\0';
    return phrase;
    free(cible), free(phrase);
}
int *reverse_list(const int *array, size_t length) {
       //  <---  hajime!
  if (!array)
    return 0;
    size_t i=0,z=length-1;
    int *tableau = malloc(length* sizeof(int));
    *tableau=0;
    while (i<=length){
        tableau[i]=array[z];
        z--,i++;
    }
  return tableau;
    free(tableau);
    tableau = NULL;
}
unsigned bin_to_decimal(const char *bin){
    size_t len= strlen(bin), puissance=1,decimal=0;
    for (size_t i = 0; i <len-1; i++){
        puissance*=2;
    }
    while (*bin){
        if (*bin=='1'){
            // printf("1");
            decimal+=puissance;
        }
        *bin++,puissance/=2;
    }
	return decimal;
}
int main(int argc, char const *argv[]){
        printf("%d",bin_to_decimal("001000"));   
    return 0;
}

