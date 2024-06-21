#include<stdio.h>
//FACTORIAL OF A NUMBER USING RECURSION
/*int factorial(int n){
	if(n==1){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}
int main(){
	int n,answer;
	printf("Enter number of digits:");
	scanf("%d",&n);
	answer=factorial(n);
	printf("%d",answer);
	return 0;
}*/

//POWER OF A NUMBER USING RECURSION
/*int power(int base,int a){
	if(a==0){
		return 1;
	}
	else{
		return base*power(a-1);
	}
}
int main(){
	int base,a;
	printf("Enter base:\n");
	scanf("%d",&base);
	printf("Enter power:");
	scanf("%d",a);
	answer=power(base,a);
	return 0;
}*/

//FIBONACCI USING RECURSION
/*int fibonacci(int n){
	if(n==0){
		return 0;
	}
	  else if(n==1){
		   return 1;
      }
          else{
          	return fibonacci(n-1)+fibonacci(n-2);
		  }
}
int main(){
	int n,series;
	printf("Enter number of terms:");
	scanf("%d",&n);
	series=fibonacci(n);
	return 0;
}*/

//TOWER OF HANOI USING RECURSION
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}
 
int main()
{
    int n = 4; // Number of disks
    towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods
    return 0;
}
