#include <stdio.h>

struct Marks{
	int maths;
	int science;
	int english;
	
};
struct student{
	int roll_no;
	int name;
	struct Marks mark;
	
};

int main()
{
	struct student data[5];
	float avg;
	for(int i=0 ;i<5 ;i++)
	{
	    printf("Enter marks of maths of student %d :",i+1);  scanf("%d",&data[i].mark.maths);
        printf("Enter marks of science of student %d:",i+1);  scanf("%d",&data[i].mark.science);  
		printf("Enter marks of english of student %d:",i+1);  scanf("%d",&data[i].mark.english);
		printf("\n");
	}
	for(int i =0 ; i<5 ;i++)
	{
		avg=(data[i].mark.maths+data[i].mark.science+data[i].mark.english);
		avg=avg/3;
		printf("Average marks of student %d is %.2f",i+1,avg);
		printf("\n");
	}

}