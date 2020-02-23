#include <stdio.h>
#include <stdlib.h>

char *contains (char *array, int c) {
    int i = 0;
    while(array[i] != '\0'){
        if (array[i] == c){
            return array + i;
        }
        i++;
    }

    if(c == '\0') {
        return array + i;
    }
    return NULL;
}

int main(){

    char str[] = "aaabbaaaabbcccccaaaddbdbbbbee";
    char *p;

    p = str;
    
    while((p = contains(p, 'b'))!=NULL){
        printf("Found at %ld\n", p-str); 
        p++;
    }
    return 0;
}