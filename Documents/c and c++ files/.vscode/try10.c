#include<stdio.h>
void odd_even(int n){
	int arr[n];
	for(int i=0;i<n;i=i+1){
		int c;
		scanf("%d",&c);
		int odd=0;
		int even=0;
		while (c>0){
			int rev=c%10;
			if (rev%2==0){
				even=even+rev;
			}
			else{
				odd=odd+rev;
			}
			c=c/10;
		}
		for(int i=0;i<n;i=i+1){
			if(odd%3==0 || even%4==0){
				arr[i]=0;
			}
			else{
				arr[i]=1;
			}
		}
	}
	for(int i=0;i<n;i=i+1){
		if(arr[i]==0){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	odd_even(n);
	return 0;
}