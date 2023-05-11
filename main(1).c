/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#define A 8

int main()
{
  int *output=malloc(sizeof(int)*36);
  int arr[A]={1,-1,1,-1,1,-1,1,-1};
  int index=0;
  int i,j;
  for(i=0;i<8;i++)
  { 
      if(i%2!=0)
      output[index++]=arr[1];
      else
      for(j=0;j<8;j++)
      {
        output[index++]=arr[0];
      }
  }
  for(i=0;i<index;i++){
      printf("%d",output[i]);
  }
 
  return 0;
}
