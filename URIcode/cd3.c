#include<stdio.h>
#include<string.h>

int main(){
    char str[200];
    int i=0;
    puts("Enter text:");

    gets(str);
    char *p;
    printf("String \"%s\" is split into token:\n",str);
    p=strtok(str,"#");
    while(p!=NULL){
        printf("%s\n",p);
        p=strtok(NULL,"#");
    }

    return 0;
}
