#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Patron {
   char name[100];
   char pass[30];
   char email[50];
   int is_staff;
};

void add_patron(){
    struct Patron patron;
    printf("Enter Name:");
    gets(patron.name);
    printf("Enter Email:");
    gets(patron.email);
    printf("Initial Password:");
    gets(patron.pass);
    printf("Enter 1 if staff 0 otherwise:");
    scanf("%d",&patron.is_staff);
    printf("patron %s successfully added\n",patron.name);
}

int menu()
{
    int action;
    printf("Select as action:\n");
    printf("1. Add new Patron\n");
    printf("2. View Patron\n");
    printf("3. View Books\n");
    printf("4. Add new Book\n");
    printf("your action: ");
    scanf("%d",&action);
    if(action< 1 || action > 4){
        printf("Invalid Action. Try Again\n");
    }
        return action;
    }
    void execute_action(int action){
    switch(action){
    case 1:
        add_patron();
        break;
    case 2:
        printf("Here is a list of patrons\n");
        break;
    case 3:
        printf("Here is a list of all the books");
        break;
    case 4:
        printf("adding a new book\n");
        break;
    default:
        printf("Invalid action.\n");
    }
}
int main()
{
    printf("County Library System");
    printf("Welcome Mr. Titus!\n");
    execute_action(menu());
    return 0;
}
