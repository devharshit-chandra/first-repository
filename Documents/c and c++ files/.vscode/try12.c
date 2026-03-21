#include<stdio.h>
int main(){
	char s[1000];
	fgets(s,1000,stdin);
	char s2[1000];
    int i=0;
    int j=0;
	while(s[i]='\0'){
        s2[j]=s[j]+s[i];
        s[j+1]=s[j+1]+(char)(s[i+1]-s[i]);
        j=j+2;
        i=i+1;
    }
    printf("%s",s2);
}
