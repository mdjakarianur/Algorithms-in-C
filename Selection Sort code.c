/* Selection sort code */
#include <stdio.h>

int main()
{
  int array[100], n, c, d, swap, min_pos;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

      for (c = 0 ; c < n - 1; c++)
      {
        min_pos = c;
        for (d = c + 1; d < n; d++)
        {
          if (array[d] < array[min_pos])
            min_pos = d;
        }
        if(min_pos !=c )
        {
            swap       = array[c];
            array[c]   = array[min_pos];
            array[min_pos] = swap;
        }
      }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c < n; c++)
     printf("%d\n", array[c]);

  return 0;
}

