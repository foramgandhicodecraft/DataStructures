#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*int main(){
	//Addition of two matrices
	int a[3][3],b[3][3],i,j,c[3][3];
	printf("Enter first matrix:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter second matrix:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
}*/


/*int main(){
	//Subtraction of two matrices
	int a[3][3],b[3][3],i,j,c[3][3];
	printf("Enter first matrix:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter second matrix:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
}*/


//Multiplication of two matrices
/*int main(){
	int a[3][3],b[3][3],c[3][3];
	int i,j,k,sum;
	printf("Enter first matrix:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter second matrix:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
			sum+=a[i][k]*b[k][j];
		    }
		c[i][j]=sum;    
		sum=0;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}*/


//Array of pointers
/*int main(){
	int* city[4]={"vadodara","delhi","banglore","guwahati"};
	printf("%s",*(city));//vadodara
	printf("\n%s",*(city+1));//delhi
	printf("\n%s",*(city+2));//banglore
	printf("\n%s",*(city+3));//guwahati
	printf("\nEnter position you want to remove:");
	int p;
	scanf("%d",&p);
	int i;
	for(i=p-1;i<4;i++){
		*(city+i)=*(city+i+1);
	}
	for(i=0;i<4;i++){
		printf("\n%s",*(city+i));
	}
}*/


//Array of pointers with dynamic memory allocation
int main(){
	int** city;
	int n,i,j,m[i];
	printf("Enter the number of cities:");
	scanf("%d",&n);
	city=(int**)malloc(n*sizeof(int*));
	for(i=0;i<n;i++){
		//WORD LENGTH IS NOT REQUIRED AS STRING IS STORED IN CONTINUOUS MANNER
		//printf("Enter word length of city name:");
		//scanf("%s",&m[i]);
		city[i]=(int*)malloc(sizeof(int));
		for(j=0;j<1;j++){
			printf("Enter city name:");
			scanf("%s",*(city+i));
		}
	}
	printf("%s",*(city));
	return 0;
}
