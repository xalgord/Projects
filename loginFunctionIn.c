#include <stdio.h>
#include <string.h>

struct Accounts
{
    char name[30], username[30], email[30], password[30];
} data[10];

int i = 0, j = 0, auth = 0;

int createAccount()
{
    printf("Name: ");
    scanf(" %s", data[i].name);
    printf("Username: ");
    scanf(" %s", data[i].username);
    printf("Email: ");
    scanf(" %s", data[i].email);
    printf("Password: ");
    scanf(" %s", data[i].password);
    i++;
}

int Login()
{
    char loginEmail[30], loginPassword[30];

    printf("Email: ");
    scanf(" %s", loginEmail);
    printf("Password: ");
    scanf(" %s", loginPassword);

    for (j = 0; j <= i; j++)
    {
        if (strcmp(data[j].email, loginEmail) == 0 && strcmp(data[j].password, loginPassword) == 0)
        {
            auth++;
        }
    }

    if (auth == 0)
    {
        printf("\nInvalid username or password");
    }
    else
    {
        printf("\nLogged in Successfully");
    }
}

int main()
{
    int a = 0, num;
    char option;
    while (a != 1)
    {
        printf("\n------------------------------------------------------");
        printf("\n1> Create Account.");
        printf("\n2> Login.");
        printf("\n------------------------------------------------------");

        printf("\n\nChoose a option: ");
        scanf("%d", &num);
        if (num == 1)
        {
            createAccount();
        }
        else if (num == 2)
        {
            Login();
        }
        else
        {
            printf("Invalid Input!");
        }

        printf("\nDo you want to continue?(y/n): ");
        scanf(" %c", &option);

        if (option == 'n')
        {
            break;
        }
        else
        {
            continue;
        }
    }
    return 0;
}
