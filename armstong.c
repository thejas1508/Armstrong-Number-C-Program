#include <stdio.h> 
#include <stdlib.h> 
int main()
{
int Num,digits,temp; 
int sum = 0;
printf("Enter the Armstong Number :"); 
scanf("%d",&Num);
temp=Num; 
while(Num>0)
{
digits=Num%10; 
sum=sum+(digits*digits*digits); 
Num=Num/10;
}
if(temp==sum)
  printf("The Entered Number is a Armstrong Number. "); 
else
  printf("The Entered Number is Not a Armstrong Number.");
}
