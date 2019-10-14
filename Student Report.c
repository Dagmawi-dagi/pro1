#include <stdio.h>

struct stud
{
    int Credit,i, n;
    char Name[20], Grade[10], ID[20], Code[10], Coursename[20];
} s[20] ;
void main()
{
    int i, n;
    printf("Enter the number of students : ") ;
    scanf("%d", &n) ;
    for(i = 0 ; i < n ; i++)
    {
	printf("\nEnter ID : ") ;
        scanf("%s",&s[i].ID) ;
	printf("\nEnter Name : ") ;
        scanf("%s",&s[i].Name) ;
	printf("\nEnter Grade : ") ;
        scanf("%s",&s[i].Grade) ;
	printf("\nEnter Course name : ") ;
        scanf("%s",&s[i].Coursename) ;
	printf("\nEnter Code : ") ;
        scanf("%s",&s[i].Code) ;
	printf("\nEnter Credit : ") ;
        scanf("%d",&s[i].Credit) ;
    }

for(i = 0 ; i < n ; i++)
    {
	printf("\n\n\n\n\n\n-----------------------Axum University-----------------------\n");	

	printf("-----------------------Student Grade Report-----------------------\n");	
	    printf("Name:\t") ;
		printf("%s\n",
		s[i].Name);
	   
	    printf("\nID:\t") ;
		printf("%s\n",
		s[i].ID);

printf("-----------------------------------------------------------------");

	    printf("\nCode \t \t Grade\t\n") ;
	   
		printf("%s \t\t %s \n",
		s[i].Code,s[i].Grade);
	   


printf("-----------------------------------------------------------------\n");
printf("-----------------------Course Matrix-----------------------------\n");
printf("-----------------------------------------------------------------\n");

		printf("Code \t\tCourse name\t \t Credit\n\n") ;
	    printf("%s \t\t %s \t \t \t   %d \n",
		s[i].Code,s[i].Coursename,s[i].Credit);
	    

printf("-----------------------------------------------------------------\n");
printf("-----------------------Thank you-----------------------------\n");
printf("-----------------------------------------------------------------\n\n\n\n\n\n");



}


}
