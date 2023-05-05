#include<stdio.h>
struct student{
	char name;
	int roll;
	char branch;
};
int main()
{
	struct student s;
	scanf("%s",s.name);
	scanf("%d",&s.roll);
	scanf("%s",s.branch);
	printf("NAME : %s\n",s.name);
	printf("ROLL : %s\n",s.roll);
	printf("BRANCH : %s\n",s.name);

	
	
}
