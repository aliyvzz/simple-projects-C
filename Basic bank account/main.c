#include <stdio.h>
#include <stdlib.h>

void add_account(int *id, char name[]) {
    printf("Enter your id num:");
    scanf("%d", id);
    printf("\nEnter your name:");
    scanf("%s", name);
}

float money(float money_amount) {
    int choice;
    float moneyy;
    printf("1 for deposit, 0 for withdrawal.");
    scanf("%d", &choice);
    printf("\nHow much ?");
    scanf("%f", &moneyy);
    if (choice == 0) {
        money_amount -= moneyy;
    } else if (choice == 1) {
        money_amount += moneyy;
    } else {
        printf("Wrong choice !!!");
    }
    return money_amount;
}

struct client {
    char name[100];
    int id;
    float money;
};

int main(void) {
    int choice = 999;
    struct client client1;
    do {
        printf("1-Add account\n2-Add/Take money\n0-Exit \n");
        scanf("%d", &choice);
        switch (choice) {
            case 0:
                break;
            case 1:
                add_account(&client1.id, client1.name);
                client1.money = 0;
                break;
            case 2:
                client1.money = money(client1.money);
                break;
        }
    } while (choice != 0);
    printf("%d %s %f", client1.id, client1.name, client1.money);
    return 0;
}

