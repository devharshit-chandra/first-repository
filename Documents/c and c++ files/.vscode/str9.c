#include<stdio.h>
int main() {
	char str[1000];
	fgets(str,1000,stdin);
	int i=0;
	while(str[i]!='\0'){
		if(i%2==0){
			if(str[i]=='z'){
				str[i]=str[i]-25;
			}
			else{
				str[i]=str[i]+1;
			}
		}
		else{
			if(str[i]=='a'){
				str[i]=str[i]+25;
			}
			else{
				str[i]=str[i]-1;
			}
		}
		i=i+1;
	}
	printf("%s",str);
	return 0;
}