# include <stdio.h>
# include<stdlib.h>
# include<string.h>

// int main(){
//     FILE *fptr;
//     fptr = fopen("s.txt","w");
//     fprintf(fptr,"hello world\n");
//     fprintf(fptr,"hi i am subho");
//     fclose(fptr);
// }

int main(){
    FILE *fptr;
    fptr = fopen("s.txt","w");
    fprintf(fptr,"hello\n");
    fprintf(fptr,"hi form c");
    fclose(fptr);
    fptr = fopen(".txt","r");
    char s[200];
    
    while(fgets(s,100,fptr));
    printf("%s",s); 
}

