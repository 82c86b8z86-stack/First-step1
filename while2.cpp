#include<stdio.h>
#include <cstdlib>
int main()
{
    int id = 123456;
    int pw = 123456;
    int user_id = 0;
    int user_pw = 0;
    printf("Enter your ID and password: ");
    scanf("%d %d",&user_id,&user_pw);
    while(user_id!=id|| user_pw!=pw)
    {
        printf("Invalid ID or password. Please try again.\n");
        printf("Enter your ID and password: ");
        scanf("%d %d",&user_id,&user_pw);
    }
    printf("welcome\n");
    system("pause");
    return 0;
}