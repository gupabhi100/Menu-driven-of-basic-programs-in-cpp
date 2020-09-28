#include<iostream>
#include<cmath>
using std::cout;
using namespace std;
int count(int );
int sumod(int );
int rev(int );
int arm(int );
int perfect(int );
int real_rev(int ,int);
 int per_square(int );
 int prime(int);
 int composite(int);
 int power_of_2(int );
 int lcm(int , int );
 int hcf(int,int);
int swap_bitwise(int ,int);
 int greatest_among_3(int ,int ,int );
 int leap_year(int);
 int fib(int);
 int fact(int);
 int ascii_value(int);
 int binary_decimal(int);
int  power_of_3(int );
 
int main()
{
	int n,ch,num,temp;
	cout<<"Enter the number "<<endl;
	cin>>n;
	while(1)
	{
		cout<<"Enter 1 to count the number of didgits "<<endl;
		cout<<"Enter 2 to find the sum of digits "<<endl;
		cout<<"Enter 3 to find the reverse of a number  "<<endl;
		cout<<"Enter 4 to find the difference of a real number and a reverse number "<<endl;
		cout<<"Enter 5  to find the armstrong of a number "<<endl;
		cout<<"Enter 6 to find a number is perfect or not  "<<endl;
		cout<<"Enter 7 to find a number is perfect square or not   "<<endl;
		cout<<"Enter 8 to find a  number is prime or not "<<endl;
		cout<<"Enter 9 to find a number is composite or not  "<<endl;
		cout<<"Enter 10 to find a number is a power of 2 or not  "<<endl;
		cout<<"Enter 11 to find the lcm of a number  "<<endl;
		cout<<"Enter 12 to find the hcf of a number"<<endl;
		cout<<"Enter 13 to find the power of 3 using bit wise operator  "<<endl;
		cout<<"Enter 14 to swap the number using one variable or using bit wise operator  "<<endl;
		cout<<"Enter 15 to find the greatest between three numbers  "<<endl;
		cout<<"Enter 16 to find the leap year"<<endl;
		cout<<"Enter 17 to find the fibonacci series upto a number  "<<endl;
		cout<<"Enter 18 to find the factorial of a number  "<<endl;
		cout<<"Enter 19 to find the ascii value of a number "<<endl;
		cout<<"Enter 20 to convert a binary number to a decimal number "<<endl;
	
		cin>>ch;
		switch(ch)
		{
			case 1: count(n);
			break;
			
			case 2: sumod(n);
			break;
			
			case 3:rev(n);
			break;
			
			case 4:
			{
			cout<<"Enter another number "<<endl;
			cin>>temp;
			real_rev(n,temp);
			break; 
			}
		
			case 5: arm(n);
			break;
			 
			case 6: perfect(n);
			break;
			
			case 7: per_square(n);
			break;
			
			case 8: prime(n);
			break;
			
			case 9: composite(n);
			break;
			
			case 10: power_of_2(n);
			break;
			
			case 11:
			{ 
			cout<<"Enter another number"<<endl;
			cin>>num;
			lcm(n,num);
			break;	
			}
			
		
			
			case 12:
				{ 
			cout<<"Enter another number"<<endl;
			cin>>num;
			hcf(n,num);
			break;	
				}
			
			 case 13: power_of_3(n);
			 break;
			 
			 case 14: 
			 	 {
			 	cout<<"Enter the numbers ";
			 	cin>>n;
			 	cin>>num;
			 	swap_bitwise(n,num);
			 	break;
				}	
			 
			 case 15: 
			 {
			 	cout<<"Enter the numbers ";
			 	cin>>n;
			 	cin>>num;
			 	cin>>temp;
			 	greatest_among_3(n,num,temp);
			 	break;
			 }
			 
			 case 16:leap_year(n);
			 break;
			 
			 case 17:fib(n);
			 break;
			 
			 case 18: fact(n);
			 break;
			 
			 case 19:ascii_value(n);
			 break;
			 
			 case 20:binary_decimal(n);
			 break;
			 
			
		
		
				
		}
	
		
	}
}




int count(int n)
{
	int count=0;
	while(n>0)
	{
		n=n/10;
		count++;
	}
	cout<<"the no of digit is "<<count<<endl;
	return 0;
	
}

int sumod(int n)
{
	
	int sum=0,a;
	while(n>0)
	{
		a=n%10;
		sum=sum+a;
		n=n/10;
	}
	cout<<"the sum of the digit is "<<sum<<endl;
	
}

int rev(int n)
{
	int rev=0,a;
	while(n>0)
	{
		a=n%10;
		rev=rev*10+a;
		n=n/10;
	}
 cout<<"the reverse of the  number is "<<rev<<endl;
 	
}

real_rev(int n,int temp)
{  
    int rev=0,a;
    int temp1=n;
	while(n>0)
	{
		a=n%10;
		rev=rev*10+a;
		n=n/10;
	}	
	temp=temp1-rev;
	cout<<"the diff is "<<temp;
	
}
 int arm(int n)
 {
 	int a,arm=0;
 	int temp=n;
 	while(n>0)
 	{
 		a=n%10;
 		arm=a*a*a+arm;
 		n=n/10;
 		
	 }
	 if(temp==arm)
	 cout<<"the number is  armstrong"<<arm;
	 else 
	 cout<<"the number is not armstrtong "<<arm<<endl;
 }


int perfect(int n)
{
	int i,per;
	int temp=n;
{
	
	for(i=1;i<=n;i++)
	{
	if(n%i==0)
	{
		per=per+i;
		}	
	}
	if(temp==per)
	cout<<"the number is perfect "<<per<<endl;
	else
	cout<<"the number is not perfect "<<endl;
	return 0;
} 
}
 int per_square(int n)
 {
 		
	float b= (float)sqrt(n);
	
	int c=b;
	if(c==b)
	cout<<"The number  %d is perfect square\n"<<endl;
	else 
	cout<<"The number %d  is not perfect \n"<<endl;
	return 0;
 }

int prime(int n)
{ int i;
	for(i=2;i<=(sqrt(n));i++)
	{
		if(n%i==0)
		break;
	}
	if(i>sqrt(n))
	cout<<"The number is prime "<<n<<endl;
	else 
	cout<<"The number is not prime "<<n<<endl;
	return 0;
}

int composite(int n)
{ int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		break;
	}
	if(i>sqrt(n))
	cout<<"The number is not composite  "<<n<<endl;
	else 
	cout<<"The number is composite  "<<n<<endl;
	return 0;
}

int power_of_2(int n)
{
	int flag =0,a;
	while(n!=1)
	{
		if(n==0)
		{
		
		flag=1;
		break;
	}
		
		if(n%2!=0)
		{
		
		flag=1;
		break;
	}
		
		a=a/2;
		}
		if(flag==0)
		cout<<"The number is power of 2"<<endl;
		else 
		cout<<"the number is not the power of 2"<<endl;
		return 0;
		
}

int lcm(int x, int y)
{
	int a,b;
	a=x;
	b=y;
	while(a!=b)
	{
	
	if(a<b)
	{
		a=a+x;
	
	}

	else 
	{ 
		b=b+y;
	

	}	
	cout<<"The lcm is "<<a<<endl;	
return 0;
}

}
int hcf(int x,int y)
{
	while(x!=y)
	{
		if(x>y)
		x=x-y;
	
	else 
	
		y=y-x;
		
	
	cout<<"the hcf is" <<x<<endl;
	return 0;
}
}

swap_bitwise(int x,int y)
 {
 	{
	 
 	x=x^y;
 	y=x^y;
 	x=x^y;
 	
 }
 cout<<"The  values of x and y are swapped "<<x<<"\t"<<y<<endl;
 
 return 0;
}

int greatest_among_3(int a,int b,int c)

{

	a>b?(a>c?cout<<"a is greater":cout<<"b is graeter\n"):(b>c?cout<<"b is graeter":cout<<"c is greater"<<endl);
return 0;

}

int leap_year(int y)
{
	

	if((y%100!=0&&y%4==0)||y%400==0)
	{
		cout<<"The year  is leap year "<<y<<endl;
		
	}
	else 
	cout<<"The year is not leap year \n"<<y<<endl;
	return 0;
}

int fib(int n)
{
	int fib1=0,fib2=1,fib;
	cout<<fib1<<"\t"<<fib2;
	while(n>0)
	{
		fib=fib1+fib2;
		fib1=fib2;
		fib2=fib;
		cout<<fib<<"\t";
		n--;
	}

return 0;	
}
int fact(int n)
{
	 int fact=1;
	while(n>0)
	{
		fact=fact*n;
		n--;
	}
	cout<<"the factorial is "<<fact<<endl;
	return 0;
}

ascii_value(int n)
{
  cout<<char(n)	<<endl;
  return 0;
}

binary_decimal(int n)
{
	int a,b,dec=0,i;
		while(n>0)
	{

	a=n%10;
	b=a*i;
	dec=dec+b;
	i=i*2;
	n=n/10;
	} 
	cout<<"The corresponding decimal value is "<<dec<<endl;
	return 0;
}


int power_of_3(int n)
{
	int flag =0,a;
	while(n!=1)
	{
		if(n==0)
		{
		
		flag=1;
		break;
	}
		
		if(n%2!=0)
		{
		
		flag=1;
		break;
	}
		
		a=a/3;
		}
		if(flag==0)
		cout<<"The number is power of 3"<<endl;
		else 
		cout<<"the number is not the power of 3"<<endl;
		return 0;
}
