#include<cstdio>
//#define EOF -1
//int main(){
//	int a,b, n;
//	float ra,rb,Ra,Rb;
//	float res;
//	scanf("%d",&n);
//	while(n!=EOF){	
//		res=0;
//		scanf("%d%d",&a,&b);
//		if(n&1){
//			// equal dir
//			if(a==b){
//				res = -1;
//			}else{
//				 
//				ra = Ra = (1/100.0)*(10.0/a);
//				rb = Rb = (1/100.0)*(10.0/b);
//				while(1){
//					printf("%.2f %.2f\n",ra ,rb);
//					ra += Ra;
//					rb += Rb;
//					if(ra==rb){
//						res = ra;
//						break;
//					}
//				}
//			}
//			
//		}else if(!(n&1)){
//			// not eq dir
//			res = (float)(a*b)/(a+b);
//		}
//		if(res >= 0){
//			printf("%.2f\n",res);
//		}else if(res < 0){
//			printf("-1");
//		}
//
//		scanf("%d",&n);
//	}
//	return 0;
//}
int swap(double *a, double *b){
	int temp = *a;
	*a = *b;
	*b = temp;
	return 0;
}
int main(){
	// 10 km �̵��� ���� 
	// ���Ϲ��� 1 , �ݴ���� 0 
	// input, �ڱ� �����ð�, �ٸ� ���� �ð�
	int dir;
	double a, b;
	double time;
	while(scanf("%d %lf %lf", &dir, &a, &b) != EOF){
		//scanf("%d",&dir);
		//if(dir==-1){
		//	break;
		//}
		//scanf("%lf%lf", &a, &b);
		 
	// km / time = velo 
	// 10 = �� * 10 / �̵��Ÿ� 
	// �ӵ�? velocity = distance / time ; 
	// linear �ϰ� 
	// �ɸ��ð� / distance / velocity = time ;
	// ������������ �д� �ð��� ���� �� ����.
	// 10km / input min = velocity; // �д��̵��Ÿ� 
	// 10 / 15 = 2/3 �д� 0.66666 ... km �̵� 
	// �ð����� ȯ�� 
	// 10 / 13 = 0.7692.... km �̵� 
	// �ð��� ����������. 
	
	if(dir&1){
		(a<b)? true : swap(&a,&b);
		if(a==b) {
			time = -1;
		}else{
			time = 10 / ((10/a)-(10/b));
		}
	}else if(!(dir&1)){
		time = 10 / ((10/a)+(10/b));
	}
	if(time < 0){
		printf("-1\n");
	}else{
		printf("%.2lf\n",time);
	}
	}
	
	// equal
	// ��������a 15 ���� y = (10/15)x
	// ��������b 13 ���� y = (10/13)x
	// y = ( (10/15) - (10/13) ) t 
	// ����������� 
	// �Ÿ��� ���� : 10 ; 10 - ( (10/13) - (10/15) ) t 
	// y ���Ÿ� x �ð� 
	// �ð� ���� 2�� 
	// �ӵ��� 
	

	
	
	return 0;
}