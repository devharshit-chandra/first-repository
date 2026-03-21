#include<stdio.h>
int gcd(int n1,int n2){
	int c;
	for(int i=1;i<=n1;i=i+1){
		for(int j=1;j<=n2;j=j+1){
			if(n1%i==0 && n2%j==0){
				if(i==j){
					c=i;
				}
			}
		}
	}
	return c;
}
int main() {
	int n1,n2;
	scanf("%d",&n1);
	scanf("%d",&n2);
	int t=gcd(n1,n2);
	printf("%d",t);
	return 0;
}