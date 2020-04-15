*/Note for Developer
var note 
salary= use for input salary
bonus = bonus of salary
salary_notax = find salary without tax
spouse = husband or wife
child = member of family
last_salary = net salary 
salary_tax = tax salary 
tax = tax rate
*/


#include<stdio.h>
int spouse,inpendent;

//Function Prototype

void intro();
void emp_crc();
void mainfunction();

//Variable 
double salary=0, bonus=0,salary_notax=0,spouse=0,child=0,tax=0,last_salary=0,salary_tax=0,family=0,salary1=0;

int main()
{
  intro();
  emp_scrc();
  mainfunction();
	

return 0;
}
void intro() //RakSmey
{
printf("Cambodia Salary tax");
}
void emp_crc() //Bunrithsothy
{
	
}
void mainfunction () //1.borey //2.Pich & Hong //3.Mr.Hao
{
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

                family = spouse + child;

                salary_notax = 150000 * family;

                salary = salary - salary_notax;


                if (salary >= 0 && salary <= 1300000)
                {
                    tax = 0.0;
                    salary_tax = salary * tax;
                    printf("Tax rate : %lf",tax);
                }
                else if (salary >= 1300001 && salary <= 2000000)
                {
                    tax = 0.05;
                    salary_tax = ((salary * tax) - 65000);
                    printf("Tax rate : %lf",tax);
                }
                else if (salary >= 2000001 && salary <= 8500000)
                {
                    tax = 0.10;
                    salary_tax = (salary * tax) - 165000;
                    printf("Tax rate : %lf",tax);
                }

                else if (salary >= 8500001 && salary <= 12500000)
                {
                    tax = 0.15;
                    salary_tax = (salary * tax) - 590000;
                    printf("Tax rate : %lf",tax);
                }
                else if (salary > 12500000)
                {
                    tax = 0.20;
                    salary_tax = (salary * tax) - 1215000;
                    printf("Tax rate : %lf",tax);
                   
                }

                salary_tax += bonus * 0.2;

                Console.WriteLine("===============");
                Console.WriteLine("Tax Of salary :{0: Riel #,##0.00}", salary_tax);
                printf("Tax Of salary : %lf",salary_tax);

                last_salary = (salary + salary_notax + bonus) - salary_tax;
                printf("Tax rate : %lf",last_salary);

            }
            else
            {
                printf("Invalid");
            }
            


        }
}


