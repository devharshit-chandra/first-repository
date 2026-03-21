#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i=i+1){
		scanf("%d",&arr[i]);
	}
	int tc;
	scanf("%d",&tc);
	int arr2[tc];
	for(int i=0;i<tc;i=i+1){
		scanf("%d",&arr2[i]);
	}
	for(int j=0;j<tc;j=j+1){
		for(int i=0;i<n;i=i+1){
			arr[i]=arr[i]+arr[i+arr2[j]];
		}
	}
    printf("\n\n");
    for(int i=0;i<n;i=i+1){
        printf("%d ",arr[i]);
    }
	// int sum=0;
	// for(int i=0;i<n;i=i+1){
	// 	sum=sum+arr[i];
	// }
	// printf("%d",sum);
	// return 0;
}