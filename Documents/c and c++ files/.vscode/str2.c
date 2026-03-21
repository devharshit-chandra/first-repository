#include <stdio.h>
int main (){
    char arr[100];
    fgets(arr, 100, stdin);
    printf("%s", arr);
    int i=0;
    int size=0;
    while(arr[i]!='\0'){
        i++;
        size++;
    }
    printf("%d\n",size);
    return 0;
}