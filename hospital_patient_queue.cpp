#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    int patientID;
    char patientName[50];
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue()
{
    struct Node *newNode;
    int id;
    
    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter Patient ID: ");
    scanf("%d", &id);

    printf("Enter Patient Name: ");
    scanf("%49s", newNode->patientName);

    newNode->patientID = id;
    newNode->next = NULL;

    if (rear == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }

    printf("Patient added successfully.\n");
}

void dequeue()
{
    struct Node *temp;

    if (front == NULL)
    {
        printf("Queue is empty. No patient to remove.\n");
        return;
    }

    temp = front;

    printf("Patient removed: %d - %s\n",
           temp->patientID, temp->patientName);

    front = front->next;

    if (front == NULL)
    {
        rear = NULL;
    }

    free(temp);
}

void display()
{
    struct Node *temp;

    if (front == NULL)
    {
        printf("No patients in the waiting queue.\n");
        return;
    }

    temp = front;

    printf("\nHospital Patient Waiting Queue:\n");

    while (temp != NULL)
    {
        printf("Patient ID: %d, Name: %s\n",
               temp->patientID, temp->patientName);

        temp = temp->next;
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Hospital Patient Waiting Queue =====\n");
        printf("1. Enqueue Patient\n");
        printf("2. Dequeue Patient\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}