#include<stdio.h>
int main(){
    char str[200];
    int i=0;
    puts("Enter text:");

    gets(str);

    int k,length = 0;
    printf("String \"%s\" is split into token:\n",str);
    while(str[i]!='\0'){
        if (str[i] == ' '){
            k=i-length;

            do{
                putchar(str[k]);
                k++;
            }
            while(str[k]!=' ');
            printf("\n");
            length = (-1);
        }
        else if (str[i+1] == '\0'){
            k=i-length;

            do{
                putchar(str[k]);
                k++;
            }while(str[k]!= '\0');
            length = 0;
        }
        length++;
        i++;
    }

return 0;
}

