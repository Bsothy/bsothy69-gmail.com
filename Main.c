
//Note for developer 


//*//Note for Developer
//var note 
//salary= use for input salary
//bonus = bonus of salary
//salary_notax = find salary without tax
//spouse = husband or wife
//child = member of family
//last_salary = net salary 
//salary_tax = tax salary 
//tax = tax rate
//spouse_str = for string of spouse 
//*/



#include<stdio.h>
#include<string.h>
//int spouse,inpendent,total;

//Function Prototype

void intro();
void emp_scrc();
void mainfunction();

//Variable 
char spouse_str;
double salary=0, bonus=0,salary_notax=0,spouse=0,child=0,tax=0,last_salary=0,salary_tax=0,family=0,salary1=0;

int main()
{
  intro();
  emp_scrc();
	print(" Please choose 1 or 2\n 1. Riel\n 2. USD\n");
	switchf
  mainfunction();
	

return 0;
}
void intro() //RakSmey
{
printf("Cambodia Salary tax\n");
printf("Developed by Group 2\n");

}
void emp_scrc() //Bunrithsothy
{
	
}
void mainfunction () //1.borey //2.Pich & Hong //3.Mr.Hao
{
	
	printf("Enter Salary :");
	scanf("%lf",&salary);
	
	printf("Enter Bonus of salary :");
	scanf("%lf",&bonus);
	
	printf("Do you have Husband or Wife? (Y/N) \n");
	scanf(" %c",&spouse_str);
	
	printf("Enter Child :");
	scanf("%lf",&child);
	
	switch(spouse_str)
	{
		case 'y':
			{
				spouse =1;
				break;
			}
		case 'n':
			{
				spouse =0;
				break;
			}
		case 'Y':
			{
				spouse =1;
				break;	
			}
		case 'N':
			{
				spouse =0;
				break;
			}
	}	
 if (salary >= 0 && bonus >=0)
            {
                if (child >= 9)
                    child = 9;
                else if (child <= 0)
                    child = 0;
                if (spouse >= 0)
                    spouse = 1;
                else
                    spouse = 0;
                    
                family = spouse + child; //sum husband or wife and childs //family member cal

                salary_notax = 150000 * family; //find salary without tax

                salary = salary - salary_notax;


                if (salary >= 0 && salary <= 1300000)
                {
                    tax = 0.0;
                    salary_tax = salary * tax;
                    //printf("Tax rate : %lf",tax);
                }
                else if (salary >= 1300001 && salary <= 2000000)
                {
                    tax = 0.05;
                    salary_tax = ((salary * tax) - 65000);
                    //printf("Tax rate : %lf",tax);
                }
                else if (salary >= 2000001 && salary <= 8500000)
                {
                    tax = 0.10;
                    salary_tax = (salary * tax) - 165000;
                    //printf("Tax rate : %lf",tax);
                }
                else if (salary >= 8500001 && salary <= 12500000)
                {
                    tax = 0.15;
                    salary_tax = (salary * tax) - 590000;
                    //printf("Tax rate : %lf",tax);
                }
                else if (salary > 12500000)
                {
                    tax = 0.20;
                    salary_tax = (salary * tax) - 1215000;
                    //printf("Tax rate : %lf",tax);  
                }
                salary_tax += bonus * 0.2;
				
				printf("\n");
              	printf("=================\n");
              	printf("Tax rate : %lf \n",tax);  
                printf("Tax Of salary : %lfRiels\n", salary_tax);
               /// printf("Tax Of salary : %lfRiel\n",salary_tax);

                last_salary = (salary + salary_notax + bonus) - salary_tax;
                printf("Your Net Salary is :  %lfRiel\n",last_salary);
            }
            else
            {
                printf("Invalid");
            }
        }



