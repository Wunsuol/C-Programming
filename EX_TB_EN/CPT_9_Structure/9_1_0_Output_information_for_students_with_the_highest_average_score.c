#include <stdio.h>
struct student
{
    int num;
    char name[10];
    int computer,english,math;
    double average;
};

int main()
{
    int i,n;
    struct student max,stu;
    printf("input n:");
    scanf("%d",&n);
    printf("Input the student's number,name,and course scores\n");
    for(i=1;i<=n;i++){
        printf("No.%d:",i);
        scanf("%d %s %d %d %d",&stu.num,stu.name,&stu.math,&stu.english,&stu.computer);
        stu.average=(stu.math+stu.english+stu.computer)/3.0;
        if(i==1){
            max=stu;
        }else if(max.average<stu.average){
            max=stu;
        }
    }
    printf("num:%d,name:%s,average:%.2lf\n",max.num,max.name,max.average);
    return 0;
}