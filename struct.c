#include<stdio.h>
int main()
{
    struct bank{
     int account;
     float balance;

    }checking;

    checking.account=1245;
    checking.balance=1234.89065;

    printf("Checking account %d has %f balance.\n",checking.account,checking.balance);
    return 0;
}
