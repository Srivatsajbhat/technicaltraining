#include<stdio.h>
#include<stdlib.h>
int compare (const void *x, const void *y)
{
  return *(int *) x - *(int *) y;
}

int main ()
{
  int arr[] = { 1, 2, 3, 4, 5, 6 };
  void *result;
  int size = sizeof (arr) / sizeof (arr[0]);
  int search_element;
  printf ("Element need to be searched : ");
  scanf ("%d", &search_element);
  result = bsearch (&search_element, arr, size, sizeof (arr[0]), compare);
    if (result) 
        printf ("Found");
    else
	    printf ("Not Found");
	    
    return 0;
    
}
