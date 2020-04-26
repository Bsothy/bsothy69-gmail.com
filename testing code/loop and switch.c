#include <stdio.h>
#include <stdlib.h>

int main()
{
    char spousr_str;
   int n,employee;

      printf("\n       s = dollar     r = rile");

  printf("\n Chose the currency that you want :  ");
     scanf("%c",&spousr_str);

     printf("Input number of employee: ");
	    scanf("%d",&n);

{

	for(employee=1;  employee<=n;  employee++)

    {
		printf("  Employee number %d \n", employee);
	}

        printf("  There are/is %d employee.",n);


  switch(spousr_str)
  {
      case 'R':
   case 'r':
       printf("\n            -----------------------------------------");
       printf("\n\n            And you also have chose rile currency");
       printf("\n            -----------------------------------------");
       break;
      case 'S':
   case 's':
       printf("\n            ------------------------------------------");
       printf("\n \n           And you also have chose dollar currency");
       printf("\n            ------------------------------------------");
       break;
   default:
       printf("\n");
       break;
  }
}
    return 0;
}
