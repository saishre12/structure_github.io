#include <stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct pn{
    char fname[50];
    char lname[50];
    char dob[10];//date of birth ddmmyyyy
    
}psn; // person structure

typedef struct sa{
    char doj[10];//date of joining ddmmyyyy
    int initial; //initial salary
    int increment; //salary increment % 
    int current; // current salary
}sal; //salary details structure

typedef struct e0{
    psn *p;
    sal *s;
    struct e0 *next;
}emp; // employee data structure


int get_psn(psn *new_psn); // asks user to fill person details 
int get_sal(sal *new_sal, psn *new_psn ); // asks user to fill person details 
int create(emp **new_emp); // creates new emplyee memory
int print(emp **new_emp); //prints the employee details
int checkpsn_name(char *name);
int check_dov(char *d,char *m,char *y);
int check_sal(int);

int main() {
emp *emp1=NULL,**new_emp; 
    new_emp = &emp1;
    create(new_emp);
    print(new_emp);
    return 0;
}

int get_psn(psn *new_psn) // asks user to fill person details 
{
    printf("\nPlease enter Employee details\n");
    printf("\nFirst name : ");
    scanf("%s",new_psn->fname);
    checkpsn_name(new_psn->fname);
    printf("\nLast name : ");
    scanf("%s",new_psn->lname);
    checkpsn_name(new_psn->lname);
    printf("\nDate of birth as dd mm yyyy : ");
    scanf("%s",new_psn->dob);
    scanf("%s",(char *)(new_psn->dob)+3);
    scanf("%s",(char *)(new_psn->dob)+6);
  
    check_dov(new_psn->dob,(char *)(new_psn->dob)+3,(char *)(new_psn->dob)+6);
return 0;
    
}

int checkpsn_name(char *name)
{
	int i;
	for(i=0;i<strlen(name);i++)
	{
		if((name[i]>=65&&name[i]<=90)||(name[i]>=97&&name[i]<=122))
		{
			//printf("Valid fname entered\n");
			break;
		}
		else
		{
			printf("Invalid name entered\n");
			printf("Re-enter first name\n");
			scanf("%s",name);
    			checkpsn_name(name);
		}
	}
}


int check_dov(char *d,char *m,char *y)
{
	emp *new_emp;
	int i;
	if((d[0]>='0'&&d[0]<='3')&&(d[1]>='0'&&d[1]<='9'))
	{
		if(d[0]=='3')
		{
			if(d[1]<='1');
			else
			goto date;
		}
		if(d[0]=='0')
		{
		if(d[1]>'0');
		else
		goto date;
		}
	if((m[0]>='0'&&m[0]<='1')&&(m[1]>='0'&&m[1]<='9'))
	{
		if(m[0]=='1')
		{
			if(m[1]<='2');
			else
			goto date;
		}
		if(m[0]=='0')
		{
			if(m[1]>'0');
			else
			goto date;
		}
	}
	if(y[0]>='1'&&y[0]<='2')
	{
		for(i=1;i<4;i++)
		{
			if(y[i]>='0'&&y[i]<='9');
			else
			break;
		}
		if(i!=4)
		goto date;
		else
		return 0;
	}
         return 0;
	}
         
   date:
        printf("Wrong date entered\n");
        printf("Re-enter date\n");
    	scanf("%s",d);
   	scanf("%s",(char *)m);
   	scanf("%s",(char *)y);
   	check_dov(d,(char*)m,(char*)y);
          
           
}

int get_sal(sal *new_sal, psn *new_psn ) // asks user to fill person details 
{
    printf("\nPlease enter Salary details for %s %s\n", new_psn->fname, new_psn->lname);
    printf("\nInitial Salary : ");
    scanf("%d",&(new_sal->initial));
   if(check_sal((new_sal->initial))<=0)
   {
   	printf("Re-enter initial sal");
   	scanf("%d",&(new_sal->initial));
   }
    printf("\nIncrement Salary %% : ");
    scanf("%d",&(new_sal->increment));
    while((new_sal->increment)<=0||(new_sal->increment>100))
    {
    	printf("Re-enter increment salary");
    	 scanf("%d",&(new_sal->increment));
    }
    
    printf("\nDate of Joining as dd mm yyyy : ");
    scanf("%s",new_sal->doj);
    scanf("%s",(char *)(new_sal->doj)+3);
    scanf("%s",(char *)(new_sal->doj)+6);
    
    check_dov(new_sal->doj,(char *)(new_sal->doj)+3,(char *)(new_sal->doj)+6);
    return 0;
}
int check_sal(int p)
{
	for(int i=0;i<p;i++)
	{
		if(p<=0)
		return -1;
	}
	 
}


int create(emp **new_emp){
    *new_emp = (emp *)malloc(sizeof(emp));
    (*new_emp)->s = (sal *)malloc(sizeof(sal));
    (*new_emp)->p = (psn *)malloc(sizeof(psn)); 
    
  get_psn((*new_emp)->p); // get person details to from user
  get_sal((*new_emp)->s,(*new_emp)->p); // get person details to from user
  printf("\nEmployee Created  ::\n");
  return 0;
}


int print(emp **new_emp){
    
    printf("\nEmployee details of Mr./Ms./Mrs. %s %s are ::\n",(*new_emp)->p->fname,(*new_emp)->p->lname);
    
    printf("\nDate of birth : %s %s %s\n",(*new_emp)->p->dob ,(char *)((*new_emp)->p->dob)+3,(char *)((*new_emp)->p->dob)+6);
                                        
    printf("\nDate of Joining : %s %s %s\n",(*new_emp)->s->doj,(char *)((*new_emp)->s->doj)+3,(char *)((*new_emp)->s->doj)+6);

    printf("\nInitial salary  : %d\n",(*new_emp)->s->initial);
    printf("\nSalary increment : %d%%\n",(*new_emp)->s->increment);
    
    return 0;
}


