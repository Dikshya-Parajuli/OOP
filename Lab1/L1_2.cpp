/*
WAP in C to display the name, address, marks and roll no of a student entered by the user using the concept
of structure
*/

#include<iostream>
using namespace std;
struct student{
    char name[20];
    char add[20];
    int roll;
    int marks;
};
int main()
{
    struct student s[50];
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the details of student %d",i+1);
        printf("\nEnter the name of student : ");
        scanf("%s",s[i].name);
        printf("Enter the address of student : ");
        scanf("%s",s[i].add);
        printf("Enter the roll of student : ");
        scanf("%d",&s[i].roll);
        printf("Enter the marks of student : ");
        scanf("%d",&s[i].marks);
    }
    for(int j=0;j<n;j++)
    {
        printf("Details of student %d",j+1);
        printf("\nThe name of student : %s",s[j].name);
        printf("\nThe address of student : %s",s[j].add);
        printf("\nThe roll no of student : %d",s[j].roll);
        printf("\nThe marks of student : %d",s[j].marks);
    }
return 0;
}