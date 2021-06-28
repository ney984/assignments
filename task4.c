#include <stdio.h>
int main()
{
  int array1[100],array2[100],search,c,b,n,m;//initialising variables

  printf("Enter number of elements in array1\n");//taking size of array1
  scanf("%d", &n);
  printf("enter the elements of array1");//taking values for array1
  for (c = 0; c < n; c++)
    scanf("%d", &array1[c]);
    
  printf("Enter number of elements in array2\n");//taking size of array2
  scanf("%d", &m);
  printf("enter the element of array2");//taking values of array2
  for (c= 0; c < m; c++)
    scanf("%d", &array2[c]);


  printf("Enter a number to search\n");//asking for the value to search
  scanf("%d", &search);

  for ( b = 0; b< n;b++)//searching value in  array 1
  {
    if (array1[b] == search)    
    {
      printf("%d is present  in array1 .\n", search);
      break;
    }}
  for(b=0;b<m;b++)   //searching value in array 2
  {
    if (array2[b] == search)    
    {
      printf("%d is present in array2.\n", search);
      break;
    }
  }
  

  return 0;
}