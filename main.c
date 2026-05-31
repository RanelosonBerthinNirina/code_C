#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <ctype.h>
#include <stddef.h>
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
unsigned bin_to_decimal1(const char *bin){
  return strtol(bin, 0, 2);
}

int compare(const void* a,const void* b) {
  	return *(int*)a - *(int*)b;
}
bool comp(const int a[/*n*/], const int b[/*n*/], size_t n){
    if(a==NULL || b ==NULL)
        return false;
    
}
int main(int argc, char const *argv[]){
  	size_t n=4;
	const int arr[4] = {-2, -3, 9, 11};
    const int b[4]={121,81,4,9};

    int *array = malloc(sizeof(int)* n);
    for (size_t i = 0; i < n; i++){
        array[i]=abs(arr[i]);
    }
  	qsort(array, n-1, sizeof(int), compare);

    for (size_t i = 0; i < n; i++) {
        
    }
    // printf("ao");
    free(array);
    return 0;
}