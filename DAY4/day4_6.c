/*When the sum of the cube of the individual digits of a number  
 is equal to that number, the number is called Armstrong number. For example 153.  
Sum of its divisor is 13 + 53;+ 33; = 1+125+27 = 153*/
#include <stdio.h>

void main(){
    int num,r,sum,temp;
    int stno,enno;

    printf("Input starting number of range: ");
    scanf("%d",&stno);

    printf("Input ending number of range : ");
    scanf("%d",&enno);

    printf("Armstrong numbers in given range are: ");
    for(num=stno;num<=enno;num++){
         temp=num;
         sum = 0;

         while(temp!=0){
             r=temp % 10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
             printf("%d ",num);
    }
printf("\n");
}