#include<stdio.h>
int main()
{
	char ch;
	int a,b;
	scanf("%c",&ch);
	scanf("%d",&a);
	scanf("%d",&b);
	switch(ch)
	{
		case'+':
			printf("addition=%d",a+b);
			break;
			
			case'-':
				printf("subtraction=%d",a-b);
				break;
				case'*':
					printf("multiplication=%d",a*b);
					break;
					case'/':
						printf("division=%d",a/b);
						break;
						default:
						printf("invalid input");
						break;
			}
			return 0;
}
