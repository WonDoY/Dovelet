#include<cstdio>

int main(){
	int y,m,d;
	scanf("%d%d%d",&y,&m,&d);
	printf("%s",(((y+m+d)%10)==0)? "�������!":"����ϼ���!");
	return 0;

}