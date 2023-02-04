 #include<stdio.h>
 #include<conio.h>
 
 int push(int n);
 int pop(void);
 
 int stack[10],top=-1;
 
int main()
 {
 	char postfix[10];
 	int i,n,x,res,y;
 	printf("Enter postfix:");
 	scanf("%s",&postfix);
 	for(i=0;postfix[i]!='\0';i++)
 	{
 		if(postfix[i]>='a'&&postfix[i]>='z')
 		{
 			printf("enter value %c",postfix[i]);
 			scanf("%d",&n);
 			push(n);
		 }
		else
		{
			x=pop();
			y=pop();
		
	    switch(postfix[i])
	    {
	    	case '+':
	    		res=y+x;
	    		push(res);
				break;
			case'-':
				res=y-x;
				push(res);
				break;
			case'*':
				res=y*x;
				push(res);
				break;
			case'/':
				res=y/x;
				push(res);
				break;
		}
	}
}
printf("result: %d",pop());
}



int push(int n)
{
	top++;
	stack[top]=n;
}


int pop(void)
{
	int x;
	x=stack[top];
	top--;
	return x;
}





