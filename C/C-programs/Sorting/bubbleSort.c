#include<stdio.h>

int main(){

   int count, temp, i, j, numbers[30];
   //max limit of this program is 30 can be increased by increasing size of array

   printf("How many numbers you want to sort?: ");
   scanf("%d",&count);

   printf("Enter %d numbers: ",count);

   for(i=0;i<count;i++)
   scanf("%d",&numbers[i]);

  

for (i = 0 ; i < count - 1; i++)
  {
    for (j = 0 ; j < count - i - 1; j++)
    {
      if (number[j] > numbers[j+1]) 
      {
        temp         = numbers[j];
        numbers[j]   = numbers[j+1];
        numbers[j+1] = temp;
      }
    }
  }

   printf("Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",numbers[i]);

   return 0;
}