#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    switch(n)
    {
        case 1:
        printf("sunday");
        break;

        case 2:
        printf("monday");
        break;

        case 3:
        printf("wednesday");
        break;

        case 4:
        printf("thrusday");
        break;

        case 5:
        printf("friday");
        break;

        case 6:
        printf("saturday");
        break;

        default:
        printf("invalid input");
        break;

    
  return 0;
    }
  
}
