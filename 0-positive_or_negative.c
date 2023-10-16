#iclude <stdlib.h>
#iclude <time.h>
int main(void)
{
  int n;
  srand(time(0));
  n=rand()-RAND_MAX / 2;
  if (n<0)
    print(n;" is negative")

      return (0);
}
