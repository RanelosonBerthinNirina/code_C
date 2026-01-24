#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

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
int main(int argc, char const *argv[]){
    const char *const words[] = {"a", "b", "c", "d"};
    printf(".%s.",smash(words,4));
    return 0;
}

