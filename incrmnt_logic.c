#include<stdio.h>
int main()
{
	int i=5; //assigning value to i

/* i++ works from LHS to RHS
   ++i works from RHS to LHS
  				
here if case like this exist-> i++(1) + i++(2) then part 1 stores the increamented value as + oper. encounter another variable. 

if + oper. encounter another increment oper. then it wouldn't have stored the incremented value  
*/
			printf("\n%d\n",++i + i++ + i++ + ++i + i++);
//values on respective position:         10    6     6     9     7
//order of execution:          		(5)   (1)   (2)	  (4)   (3)

}
