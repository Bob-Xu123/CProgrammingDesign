#include <stdio.h>

/* 
int main()
{
	int x;
	int n=1;
	scanf("%d",&x);
	if (x>999) {
		n=4;
	} else if (x>99) {
		n=3;
	} else if (x>9) {
		n=2;
	} else {
		n=1;
	}
	printf("%d\n",n);

	return 0;
} */

/* 判断整数的位数 
int main()
{
	int x;
	scanf("%d",&x);
	int n=0;
	do {
		x=x/10;
		n++;
	} while (x!=0);
	printf("%d\n",n);
	
	return 0;
} */

/*
int main(){
	int count=100;
	while (count>=0) {
		printf("%d\n",count);
		count--;
	}
	printf("发射！\n");
} */

/* 求平均数 
int main(){
	int number;
	int sum=0, n=0;
	scanf("%d",&number);
	while(number!=-1){
		sum += number;
		n++;
		scanf("%d",&number);
	}
	printf("mean value = %f\n",1.0*sum/n);
	return 0;
} */

/* 判断素数
int main(){
	int x;
	int isPrime=1;
	int i;
	scanf("%d",&x);
	for (i=2; i<x; i++) {
		if (x%i == 0){
			isPrime=0;  
			break;
		}
	}
	if (isPrime==1){
		printf("%d is a prime" , x);
	} else {
		printf("%d isn't a prime",x);
	}
	return 0;
}
*/ 

/* 输出前50个素数
int main(){
	int x;
	int cnt=0;
	for(x=2; cnt<=50; x++){
		int isPrime=1;
		int i;
		for (i=2; i<x; i++) {
			if (x%i == 0){
				isPrime=0;  
				break;
			}
		}
		if (isPrime==1){
			printf("%d " , x);
			cnt++;
		}
	}
	return 0;
}
*/ 

/* 求和 1+1/2+1/3+...+1/n
int main(){
	int n;
	int i;
	double sum=0.0;
	scanf("%d",&n);
	for (i=1; i<=n; i++) {
		sum += 1.0/i;
	}
	printf("%f",sum);
	return 0;
}
*/ 

/* 求和 1-1/2+1/3-1/4...+1/n 方法1 
int main(){
	int n;
	int i;
	int sign;
	double sum=0.0;
	
	scanf("%d",&n);
	for (i=1; i<=n; i++) {
		sign=1;
		if (i%2==0) sign=-1;
		sum += 1.0/(sign*i);
	}
	printf("f(%d)=%f\n",n,sum);
	return 0;
}
*/

/* 求和 1-1/2+1/3-1/4...+1/n 方法2 
int main(){
	int n;
	int i;
	double sign=1.0;
	double sum=0.0;
	
	scanf("%d",&n);
	for (i=1; i<=n; i++) {
		sum += sign/i;
		sign=-sign;
	}
	printf("f(%d)=%f\n",n,sum);
	return 0;
}
*/

/* 求最大公约数 方法1 
int main(){
	int a,b;
	scanf("%d,%d",&a,&b);
	int i,min,ret;
	min=b;
	if (a<b) min=a;
	for (i=1; i<=min; i++) {
		if (a%i==0 && b%i==0){
			ret=i;
		}
	}
	printf("%d,%d 最大公约数是%d\n",a,b,ret);
	return 0;
}
*/

/* 求最大公约数 方法2
int main(){
	int a,b,t,aa,bb;
	scanf("%d,%d",&a,&b);
	aa=a, bb=b;
	 while(b!=0){
	 	t=a%b;
	 	a=b;
	 	b=t;
	 }
	printf("%d,%d 最大公约数是%d\n",aa,bb,a);
	return 0;
}
*/

/* 正序分解整数 
int main(){
	int a,ia=0,digit;
	scanf("%d",&a);
	//先把整数逆过来 
	while (a>0){
		digit = a%10; // 将a对10取余数得到a的末位数 
		a /= 10; // 将a对10整除，去掉a的末位数，并更新a 
		ia = ia*10 + digit;
	}
	printf("ia=%d\n",ia);
	//再依次输出逆整数的末位数 
	while(ia>0){
		digit = ia%10;
		ia /= 10;
		printf("%d ",digit);
	}
	return 0; //但是对于这个方法，当a=100的时候，只会打印出 1 
}
*/

///* 正序分解整数 方法2 
int main() {
	int a;
	// scanf("%d",&a);
	a = 100;
	int mask = 1;
	int t = a;
	while ( t>9 ) {
		t /= 10;
		mask *= 10;
	}
	printf("mask=%d\n",mask);
	int digit;
	while (mask>0) {
		digit = a/mask;
		printf("%d ",digit);
		a %= mask;
		mask /= 10;
	}
	printf("\n");
	return 0;

}
//*/
