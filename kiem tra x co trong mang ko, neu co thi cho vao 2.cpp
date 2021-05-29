//Nhap 1 mang n so nguyen , moi lan nhap kiem tra xem so do co trong mang chua neu chua thi cho vao mang
#include<stdio.h>
int main(){
	int n,i;
	int a[1000];
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d",&n);
	int x;
	printf("Nhap x: ");
	scanf("%d",&x);
	a[0]=x;
	printf("a[0]: %d\n",x);
	for(i=1;i<n;i++){
		if(a[i]!=x){
			printf("a[%d]: ",i);
			scanf("%d",&a[i]);
		}if(a[i]==x){
			do{
				printf("Da co %d moi nhap lai\n",a[i]);
				printf("a[%d]: ",i);
				scanf("%d",&a[i]);
			}
			while(a[i]==x);
			
			
		}
		}
		for(i=0;i<n;i++){
			printf("%5d",a[i]);
		}
	}
	
