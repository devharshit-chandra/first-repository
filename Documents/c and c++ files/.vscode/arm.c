#include<stdio.h>
#include<math.h>
int arm(int n){
	int x=n;
	int y=x;
	int i=0;
	int ret=0;
	while (n>0){
		int rev=n%10;
		n=n/10;
		i=i+1;
	}
	while(y>0){
		int rev=y%10;
		ret=ret+pow(rev,i);
		y=y/10;
	}
	if(ret==x){
		return 0;
	}
	else{
		return 1;
	}
}
int main() {
	int n;
	scanf("%d",&n);
	int t=arm(n);
	if(t==0){
		printf("true");
	}
	else{
		printf("false");
	}
	return 0;
}