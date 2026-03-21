#include<stdio.h>
int main(){
	char s[1000];
	fgets(s,1000,stdin);
	char s2[1000];
	int i=0;
	int j=0;
	while(s[i]!='\0'){
		if(s[0]>='A' && s[0]<='Z'){
			continue;
		}
		else{
			if(s[i]>='A' && s[i]<='Z'){
				s2[j]='\n';
				j=j+1;
			}
			else{
				s2[j]=s[i];
			}
		}
		j=j+1;
		i=i+1;
	}
    s[j]='\0';
	printf("%s",s2);
}