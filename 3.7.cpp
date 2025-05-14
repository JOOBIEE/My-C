//REcruitmennt Policy
#include<stdio.h>
#include<stdbool.h>

int main()
{
	int age;						//Applicant Age
	int college;					//College Attended
	int subject;					// Course Studied.
	bool interview = false;			//True for accept, FAlse for reject
	
	//GEt applicant information
	printf("\nWhat College?  1 for HArvard, 2 For Yale, 3 for other: ");
	scanf("%d", &college);
	printf("\nWhat Subject? 1 for Chemistry, 2 For Economics, 3 for Others: ");
	scanf("%d", &subject);
	printf("\nHow old is applicant: ");
	scanf("%d",&age);
	
	//Checklist
	if((age>25 && subject ==1) && (college ==3 || college ==1))
	interview = true;
	
	if(college ==2 && subject ==1)
	interview = true;
	
	if(college ==1 && subject ==2 && !(age<28))
	interview = true;
	
	if(college == 2 &&(subject ==2 ||subject ==3)&&age>25)
	interview = true;
	
	//Deciion for interview
	if(interview)
	printf("\n\nGive interview\n");
	else
	printf("\n\nReject\n");
	return 0;
	
	 
}
