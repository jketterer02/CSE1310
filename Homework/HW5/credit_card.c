//Jacob Ketterer 1001793039
#include<stdio.h>
#include<string.h>
#include<math.h>
void get_creditcard_info(char wallet[][20], int cvv[], int x)
{
    int k=0;
    int cvv_numbers[3];
    for (int i=0;i<x;i++)
    {
        do
        {
            printf("--%d. Enter credit card number: ", i+1);
            scanf("%s",wallet[i]);
            if (valid_num(wallet[i]))
            {
                break;
            }
            else
            {
                printf("Not a valid number. Enter a valid credit card number: ");
                scanf("%s",wallet[i]);
                if (valid_num(wallet[i]))
                {
                    break;
                }
                else
                {
                    printf("Please enter a valid credit card number next time!\n");
                }
            }
        }
        while (1==1);
        printf("Enter the CVV number: ");
        scanf("%d", &cvv[i]);
    }
    printf("\n--All credit cards in your wallet:");
    for (int i=0;i<x;i++)
    {
        printf("\n%d. %s",i+1,wallet[i]);
    }
}

int use_creditcard(char wallet[][20], int cvv[], int x)
{
    char ans[20];
    int cv;
    printf("\nEnter card to use: ");
    scanf("%s", ans);
    for (int j=0;j<x;j++)
    {
        if (!strcmp(wallet[j],ans))
        {
            printf("Enter CVV number: ");
            scanf("%d", &cv);
            if(cv != cvv[j])
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}
int valid_num(char wallet[])
{
    return (strlen(wallet)==16) && (wallet[0]=='5'|| wallet[0]=='4');
}
int main(int argc, char **argv)
{
    char wallet[3][20];
    int cvv_numbers[3];
    get_creditcard_info(wallet,cvv_numbers,3);
    int answer=use_creditcard(wallet,cvv_numbers,3);
    if(answer)
    {
        printf("Card accepted! \n");
    }
    else
    {
        printf("Card rejected. \n");
    }
}
