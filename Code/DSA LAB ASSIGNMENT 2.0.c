#include<stdio.h>
#include<string.h>
main(){
    char str[20][20];
    char b[20];
    int i,n,p,num;
    printf("Enter number of students:");
    scanf("%d",&n);
    printf("Enter names of students:");
    for(i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    //switch case
    printf("Enter 1.for insert\n2.for append\n3.for search\n4.for delete\n");
    scanf("%d",&num);
    switch(num){
        case 1:
           {
            //INSERT
            printf("\nEnter position where you want to insert:");
            scanf("%d",&p);
            n++;
            for(i=n-1;i>=p-1;i--){
                strcpy(str[i+1],str[i]);
            }
            printf("Enter string to insert:");
            scanf("%s",str[p-1]);
            printf("After inserting:\n");
            for(i=0;i<=n;i++){
                printf("%s\n",str[i]);
            }
        break;
        }
        case 2:
        {
            //APPEND
            printf("Enter position you want to append:");
            scanf("%d",&p);
            printf("Enter appending string:");
            scanf("%s",b);
            strcat(str[p-1],b);
            printf("After appending:");
            for(i=0;i<n;i++){
                printf("%s",str[i]);
            }
        break;
        }
    case 3:
    {
        //SEARCH
        break;
    }
     case 4:
     {
         //DELETE
         
         break;
     }
    }
    }
    
