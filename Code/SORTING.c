#include<stdio.h>

//BUBBLE SORT

/*int BubbleSort(int a[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			int flag;
			if(a[j+1]<a[j]){
				//swap
				int temp;
	            temp=a[j];
	            a[j]=a[j+1];
	            a[j+1]=temp;
				//
				flag++;
			}
			if(flag==0)//MAKING BUBBLE SORT ADAPTIVE
			break;
		}
	}
	int k=0;
	printf("The sorted list: ");
	for(k=0;k<n;k++){
		printf("%d ",a[k]);
	}
}

int main(){
	int a[5]={8,5,7,3,2};
	BubbleSort(a,5);
	return 0;
}*/

//INSERTION SORT

/*int InsertionSort(int a[],int n){
	int i;
	for(i=1;i<n;i++){
		int x,j;
		x=a[i];
		j=i-1;
		while(a[j]>x && j>-1){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
	}
	int k;
	printf("The sorted list: ");
	for(k=0;k<n;k++){
		printf("%d ",a[k]);
	}
}

int main(){
	int a[]={8,5,7,3,2};
	InsertionSort(a,5);
	return 0;
}*/

//SELECTION SORT

/*int SelectionSort(int a[],int n){
	int i,j,k;
	for(i=0;i<n-1;i++){
		for(j=k=i;j<n;j++){
			if(a[j]<a[k]){
				k=j;
			}
		}
		//SWAP
			int temp;
			temp=a[i];
			a[i]=a[k];
			a[k]=temp;
	}
	int y;
	printf("The sorted list: ");
	for(y=0;y<n;y++)
	{
		printf("%d ",a[y]);
	}
}

int main(){
	int a[]={8,5,7,3,2};
	SelectionSort(a,5);
	return 0;
}*/

//QUICK SORT

int Partition(int a[],int l,int h){
	int i=l,j=h;
	do{
		do{
		   i++;
		} while(a[i]<a[l]);
		do{
		   j--;
		   } while(a[j]>=a[l]);
		if(i<j){
			//SWAP a[j] and a[i]
			int temp;
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	}while(i<j);
	//SWAP a[l] and a[j]
	        int t;
			t=a[j];
			a[j]=a[l];
			a[l]=t;
	return j;
}

int QuickSort(int a[],int l,int h){
	int j;
	if(l<h){
	j=Partition(a,l,h);
	QuickSort(a,l,j);
	QuickSort(a,j+1,h);
}
int k;
for(k=0;k<11;k++)
	printf("%d ",a[k]);

}

int main(){
	int a[]={11,13,7,12,16,9,24,5,10,3,6332};//6332 is infinity representation
	QuickSort(a,0,10);
	int i;
	printf("The sorted list: ");
	/*for(i=0;i<11;i++){
		printf("%d ",a[i]);
	}
	return 0;*/
}


























void quick(int arr[],int low,int high)
{
	int i,j,pivot;
	while (low < high)
	{
		pivot = arr[low];
		i = arr[low];
		j = arr[high];
		while(i < j)
		{
			while (arr[i] < pivot)
			{
				i++;
			}
			while (arr[j] > pivot)
			{
				j--;
			}
			if (i < j)
			{
				//swap(arr[i],arr[j])
				int temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;//
			}
		}
		//swap(arr[j],arr[low])
		int temp;
		temp = arr[j];
		arr[j] = arr[low];
		arr[low] = temp;//
		
		quick(arr, low, j - 1);
		quick(arr, j + 1, high);
	}
}
