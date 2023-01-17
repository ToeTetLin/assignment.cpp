//assignment 
//gmail check
#include"stdio.h"
struct Mail{
	char gmail[50];
};
struct Mail usermail;
void checkgmail();
int charcount(char useremail[50]);
char check[10]={'@','g','m','a','i','l','.','c','o','m'};//@gmail.com
int strcompair=0;
int main()
{
	printf("Check gmail or not \n\n");
	printf("Enter your gmail : ");
	scanf(" %[^\n]",&usermail.gmail);
	checkgmail();
}
void checkgmail()
{
	int i=0;
	int j=0;
	
	int temp=charcount(usermail.gmail);
	printf("%d \n",temp);
	for(i=temp-10;i<temp;i++)
	{
		if(usermail.gmail[i]==check[j])
		{
			strcompair++;
			j++;
		}
	}
	if(strcompair==10)
	{
		printf("Your mail is gmail sir.\n");
	}
	else
	{
		printf("Your mail isn't gmail sir\n");
	}
	
}
int charcount(char useremail[50])
{
	int countforchar=0;
	for(int i=0;i<50;i++)
	{
		if(useremail[i]=='\0')
		{
			break;
		}
		else
		{
			countforchar++;
		}
	}
	return countforchar;
}