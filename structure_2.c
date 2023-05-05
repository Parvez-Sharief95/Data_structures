#include<stdio.h>
//structure is a user def sata type
//int ,float, char, double, have limitations
//string can store mixed datatype 
//creat structure or blueprint or metadata
struct student{
	char roll[20];
	char name[20];
	int age;
	float cgpa;
};

int main()
{
	struct student s1; // structure varaible
	scanf("%s", s1.roll);
	scanf("%s",s1.name);
	scanf("%d", &s1.age);
	scanf("%f", &s1.cgpa);
	printf("%s %s %d %.2f",s1.roll,s1.name ,s1.age,s1.cgpa);
}
