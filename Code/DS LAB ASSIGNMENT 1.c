#include<stdio.h>
struct abc{
	int a;
	int arr[5];
	char str[5];
};
union def{
	int b;
	int arr2[5];
	char str2[5];
};
main(){
	/*primitive data type=integer,float etc.
	non primitive data type=array,string*/
	struct abc s1;
	union def u1;
	int c;
	int arr3[5];
	char str3[5];
	int *p1,*p2,*p3,*p4,*p5,*p6;
	char *p7,*p8,*p9;
	p1=&s1.a;
	p2=&s1.arr;
	p3=&u1.b;
	p4=&c;
	p5=&arr3;
	p6=&u1.arr2;
	p7=&s1.str;
	p8=&u1.str2;
	p9=&str3;
	printf("The address of int variable is:%d %u %x",p4,p4,p4);
	printf("\nThe address of array is:%d %u %x",p5,p5,p5);
	printf("\nThe address of atring is:%d %u %x",p9,p9,p9);
    printf("\nThe address of structure int is:%d %u %x",p1,p1,p1);
    printf("\nThe address of union int is:%d %u %x",p3,p3,p3);
    printf("\nThe address of structure array is:%d %u %x",p2,p2,p2);
    printf("\nThe address of union array is:%d %u %x",p6,p6,p6);
    printf("\nThe address of structure string is:%d %u %x",p7,p7,p7);
    printf("\nThe address of union string is:%d %u %x",p8,p8,p8);

}
