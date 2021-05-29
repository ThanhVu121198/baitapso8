// tim so trong mang co gia tri nho hon va gan x nhat
#include<stdio.h>
int main(){
	int i,n,j,temp;
	int a[1000];
	printf("Nhap so phan tu trong mang: ");
	scanf("%d",&n);
	printf("Nhap gia tri cua mang:\n");
	for(i=0;i<n;i++){
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%5d",a[i]);
	}
	int x,tcd;
	printf("\nNhap x: ");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(x==a[i]&&a[i-1]<x){
			tcd=a[i-1];
		}
	}printf("so trong mang co gia tri nho hon x va gan x la: %d",tcd);
}

