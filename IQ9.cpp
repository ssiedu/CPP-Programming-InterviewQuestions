#include<iostream>
using namespace std;
int main()
{
	int n,num=0;
	
	cout<<"\n Enter any number to print in words : ";
	cin>>n;
	
	while( n != 0)
	{
		num = (num*10) + (n % 10);
		n /= 10;
	}
	
	while(num!=0)
	{
		switch(num%10)
		{
			case 0: cout<<"Zero ";
				    break;
			case 1: cout<<"One ";
					break;
			case 2: cout<<"Two ";
					break;
			case 3: cout<<"Three ";
					break;
			case 4: cout<<"Four ";
					break;
			case 5: cout<<"Five ";
					break;
			case 6: cout<<"Six ";
					break;
			case 7: cout<<"Seven ";
					break;
			case 8: cout<<"Eight ";
					break;
			case 9: cout<<"Nine ";
					break;
		}
		
		num = num/10;
	}
	return 0;
}
