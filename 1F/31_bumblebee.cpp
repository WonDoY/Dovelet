#include<cstdio>

int main(){
	int a,b,x,l;
	double dist = 0;
	// 1<= a,b < x < l <= 40000
	// �ε����������� �̵��Ÿ�
	scanf("%d%d%d%d",&a,&b,&x,&l);
	dist = l/(double)(a+b)*x;
	
	
	printf("%.6lf",dist);
	return 0;
}