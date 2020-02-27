#include<stdio.h>

struct Student
{
	char name[30];
	char usn[11];
	int marks[3];
	float avg;
};

struct Student s[10];

void read_data(int i)
{
		printf("Enter the details of the %d Student\n", (i+1));
		printf("Enter the Name\n");
		scanf("%s", s[i].name);
		printf("Enter the USN\n");
		scanf("%s", s[i].usn);
		printf("Enter the Marks of 3 Subjects(out of 100)\n");
		scanf("%d%d%d", &s[i].marks[0], &s[i].marks[1], &s[i].marks[2] );
		s[i].avg = (s[i].marks[0] + s[i].marks[1] + s[i].marks[2])/3.0;
}


void display_data(int i)
{
	printf("Name = %s\n", s[i].name);
	printf("USN = %s\n", s[i].usn);
	printf("Average = %f\n", s[i].avg);
}

void main()
{
	float total_avg=0.0;	
	int n, i;
	
	printf("Enter the no. of students\n");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		read_data(i);
	}
	
	for(i=0; i<n; i++)
	{
		total_avg = total_avg + s[i].avg;
	}
	total_avg = total_avg / n;
	
	printf("Overall Average = %f\n", total_avg);
	
	printf("---------------------------------------------\n");
	printf("Details of Students Above Average\n");
	printf("---------------------------------------------\n");
	for(i=0; i<n; i++)
	{
		if(s[i].avg > total_avg)
		{
			display_data(i);
			printf("##################\n");
		}	
	}	
	printf("---------------------------------------------\n");
	printf("Details of Students Below Average\n");
	printf("---------------------------------------------\n");
	for(i=0; i<n; i++)
	{
		if(s[i].avg < total_avg)
		{
			display_data(i);
			printf("##################\n");
		}	
	}	
	
}
