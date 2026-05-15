#include <stdio.h>
#include <string.h>

#define SIZE 5

// Queue for active orders
char queue[SIZE][50];
int front = -1;
int rear = -1;

// Stack for delivered history
char stack[SIZE][50];
int top = -1;

// Add order to queue
void placeOrder()
{
    if (rear == SIZE - 1)
    {
        printf("Order Queue Full\n");
    }
    else
    {
        char order[50];

        printf("Enter Customer Order: ");
        scanf("%s", order);

        if (front == -1)
        {
            front = 0;
        }

        rear++;

        strcpy(queue[rear], order);

        printf("Order Added Successfully\n");
    }
}

// Process and deliver order
void deliverOrder()
{
    if (front == -1 || front > rear)
    {
        printf("No Orders Available\n");
    }
    else
    {
        printf("Delivered Order: %s\n", queue[front]);

        // Save in stack
        top++;
        strcpy(stack[top], queue[front]);

        front++;
    }
}

// Display active orders
void displayQueue()
{
    if (front == -1 || front > rear)
    {
        printf("No Active Orders\n");
    }
    else
    {
        printf("\nActive Orders:\n");

        for (int i = front; i <= rear; i++)
        {
            printf("%s\n", queue[i]);
        }
    }
}

// Display delivery history
void displayHistory()
{
    if (top == -1)
    {
        printf("No Delivery History\n");
    }
    else
    {
        printf("\nRecent Delivery History:\n");

        for (int i = top; i >= 0; i--)
        {
            printf("%s\n", stack[i]);
        }
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n===== FOOD DELIVERY SYSTEM =====\n");

        printf("1. Place Order\n");
        printf("2. Deliver Order\n");
        printf("3. Show Active Orders\n");
        printf("4. Show Delivery History\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                placeOrder();
                break;

            case 2:
                deliverOrder();
                break;

            case 3:
                displayQueue();
                break;

            case 4:
                displayHistory();
                break;

            case 5:
                printf("Program Ended\n");
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}
