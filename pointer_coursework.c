#include <stdio.h>
#include <string.h>
/* //观察数组的地址 
int main()
{
	int a[10];
	
	printf("%p\n",&a);
	printf("%p\n",a);
	printf("%p\n",&a[0]);
	printf("%p\n",&a[1]);
	
	return 0;
 } */
 
 /*
int main(int argc, char const *argv[])
{
	int i=10;
	int * p; // 声明p是一个指针类型的变量，*表明p是一个指针，int表明该指针指向一个int类型的变量
	p = &i; // 将变量i的地址赋值给指针p
	int *q = &i;
	printf("%d\n", *p);
	printf("%d\n", *q);
	return 0;
}*/

 /* 作为函数参数的指针，调用该函数时需要出入其他变量的地址 
 void f(int *p);
 int main()
 {
 	int i=6;
 	printf("&i = %p\n", &i);
 	f(&i);
 	return 0;
 	
 }
 void f(int *p)
 {
 	printf("p = %p\n",p);
 }
 */

/* 
int main()
{
	char i;
	i='m';
	printf("%c\n",i);
	printf("%d\n",i); //ASCII码表
	printf("%c", i+'A'-'a'); //将小写字母转化成大写字母 
	return 0;
} */

/*
int main()
{
	printf(" \" ");
	printf("\n");
	printf("123\b\n456\n");
	return 0;
} */

/*
int main(int argc, char const *argv[])
{
    char sa1[] = {'h','e','l','l','o','\0'};
    char sa2[] = {'h','e','l','l','o',0};
	char sa3[] = "this is a string";
	char * str = "this is a string"; // 字符串常量的值其实是该字符串第一个字符的地址
    printf("%s\n", sa1);
    printf("%s\n", sa2);
    printf("%s\n", sa3);
    printf("%s\n", str+1);
    printf("%s\n", "line");
    return 0;
}*/

/*
int main(int argc, char const *argv[])
{
	char str1[]="abc ";
	char str2[]="abc0";
	printf("%d\n", strcmp(str1,str2)); // 比较两个字符串，返回整数-1或0或1
	char s1[]="abcdef";
	char s2[]="xyz";
	printf("%s\n", strcpy(s1,s2)); // 将字符串s2拷贝到s1中，覆盖掉原s1，返回字符串常量s1
	printf("%d\n", strlen(s2)); // 返回字符串的长度，不包括结尾的0
	printf("%lu\n", sizeof(s2));
	return 0;
}*/

/* //指针的使用场景1：交换两个变量的值
void swap(int *pa, int *pb);
int main(int argc, char const *argv[1212])
{
	int a,b;
	scanf("%d,%d", &a,&b);
	printf("a=%d, b=%d\n", a,b);
	swap(&a,&b);
	printf("a=%d, b=%d\n", a,b);

	return 0;
}

void swap(int *pa, int *pb)
{
	int t = *pa;
	*pa = *pb;
	*pb = t;
}
*/
 
 /* //指针的使用场景2：利用指针可以从函数中带回多个值
void minmax(int a[], int len, int *min, int *max);

int main(int argc, char const *argv[])
{
	int a[] = {10,11,12,2,3,4,5,6,7,8,9};
	int min, max;
	int len = sizeof(a)/sizeof(a[0]);
	minmax(a, len, &min, &max );
	printf("min=%d, max=%d\n", min,max);
	return 0;
}

void minmax(int a[], int len, int *min, int *max)
{
	*min = *max = a[0];
	int i;
	for (i=1; i<len; i++) {
		if (a[i] < *min) *min = a[i];
		if (a[i] > *max) *max = a[i];
	}
} //注意：当把一个数值作为参数传给一个函数，在函数内部无法使用sizeof()来计算数组的占据字节大小，
  //当把数组作为函数参数时，往往必须再用另一个参数来传入数组的大小。
*/

/* // 指针的运算
int main(int argc, char const *argv[])
{
	int a[] = {0,1,2,3,4};
	int * p = a;
	printf("p = %p\n", p);
	printf("p+1 = %p\n", p+1); // 指针p加1实际上加的是一个sizeof(那个类型)
	printf("a[0] = %d, a[1] = %d\n", a[0],a[1]);
	printf("*(p) = %d, *(p+1) = %d\n", *p,*(p+1));
	return 0;
} // 如果指针不是指向一片连续分配的空间（如数组），则*(p+1)这种计算是没有意义的。
*/

/* // 动态分配内存
#include <stdlib.h>
int main(void)
{
	int number;
	printf("qing shu ru shu liang: ");
	scanf("%d", &number);
	printf("hr %d\n", number);
	int *a = (int*)malloc(number*sizeof(int));
	int i;
	for (i=0; i<number; i++){
		scanf("%d", &a[i]);
	}
	printf("output in inverse order:\n");
	for (i=number-1; i>=0; i--){
		printf("%d ", a[i]);
	}
	free(a);
	return 0;
}*/

/* //看看自己的计算机最多能分配多少内存
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	void *a;
	int cnt = 0;
	while((a = malloc(1024*1024*1024))){
		cnt++;
	}
	printf("a pace of %d G was distributed\n", cnt);
	free(a);
	return 0;
}*/

/* // 字符串数组
int main(int argc, char const *argv[])
{
	printf("please input month number: ");
	int month;
	scanf("%d", &month);
	char * a[] = {
		"January","February","March","April","May","June",
		"July","August","September","October","November","December"
	};
	printf("%s\n", a[month-1]);
	return 0;
}*/

