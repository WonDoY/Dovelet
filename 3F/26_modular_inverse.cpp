#include<cstdio>

int main(){
	int x,m,res;
	bool t = false;
	scanf("%d%d",&x,&m);
	// 4 x 13 = 52 
	// = 17 x 3 + 1
	// 13,4 �� 17�� ���� modular inverse
	for(int i = 1 ; i < 1000; i++){ // ����.................
		if((x*i)%m==1){
			t=true ;
			res = i;
			break;
		}
	}
	(t) ? printf("%d",res) : printf("No such integer exists.") ;
	return 0;
}