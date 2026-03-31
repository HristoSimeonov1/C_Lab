#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 100
#define MAX_ADDR 100
#define MAX_ITEMS 1000

typedef struct {
    char name[MAX_NAME];
    double price;
    int id;
} Product;

typedef struct {
    char address[MAX_ADDR];
    int productId;
} Order;

Product products[MAX_ITEMS];
int productCount = 0;

Order pendingOrders[MAX_ITEMS];
int pendingCount = 0;

Product* findProduct(int id) {
    for (int i = 0; i < productCount; i++) {
        if (products[i].id == id) return &products[i];
    }
    return NULL;
}

void removePendingOrder(int index) {
    for (int i = index; i < pendingCount - 1; i++) {
        pendingOrders[i] = pendingOrders[i + 1];
    }
    pendingCount--;
}

int main() {
    char command[20];

    printf("=== Sweet Shop Management System ===\n");
    printf("Commands: Product | Order | END\n\n");

    while (1) {
        printf("Enter command: ");
        scanf("%s", command);

        if (strcmp(command, "END") == 0) {
            printf("Program terminated.\n");
            break;
        }

        if (strcmp(command, "Product") == 0) {
            Product p;
            printf("Product name: ");
            scanf(" %[^\n]", p.name);
            printf("Price: ");
            scanf("%lf", &p.price);
            printf("Product ID: ");
            scanf("%d", &p.id);

            products[productCount++] = p;
            printf("  >> Product '%s' added successfully!\n\n", p.name);

            for (int i = 0; i < pendingCount; i++) {
                if (pendingOrders[i].productId == p.id) {
                    printf("Client %s ordered %s\n", pendingOrders[i].address, p.name);
                    removePendingOrder(i);
                    i--;
                }
            }

        } else if (strcmp(command, "Order") == 0) {
            Order o;
            printf("Client address: ");
            scanf(" %[^\n]", o.address);
            printf("Product ID: ");
            scanf("%d", &o.productId);

            Product* p = findProduct(o.productId);
            if (p != NULL) {
                printf("Client %s ordered %s\n\n", o.address, p->name);
            } else {
                pendingOrders[pendingCount++] = o;
                printf("  >> Product not available. Order is pending!\n\n");
            }
        } else {
            printf("  >> Invalid command! Use: Product, Order or END\n\n");
        }
    }

    return 0;
}