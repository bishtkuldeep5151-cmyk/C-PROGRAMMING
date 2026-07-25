#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FLIGHTS 5
#define MAX_SEATS 3

// Flight Structure (Array)
struct Flight {
    int id;
    char source[30];
    char destination[30];
    int seats;
};

struct Flight flights[MAX_FLIGHTS];

// Reservation Node (Linked List)
struct Reservation {
    int flightId;
    char passenger[50];
    struct Reservation *next;
};

struct Reservation *head = NULL;

// Queue Node (Waiting List)
struct Queue {
    char passenger[50];
    int flightId;
    struct Queue *next;
};

struct Queue *front = NULL, *rear = NULL;

// Add Flights
void addFlights() {
    flights[0] = (struct Flight){101, "Delhi", "Mumbai", MAX_SEATS};
    flights[1] = (struct Flight){102, "Delhi", "Chennai", MAX_SEATS};
    flights[2] = (struct Flight){103, "Mumbai", "Bangalore", MAX_SEATS};
    flights[3] = (struct Flight){104, "Hyderabad", "Delhi", MAX_SEATS};
    flights[4] = (struct Flight){105, "Kolkata", "Goa", MAX_SEATS};
}

// Display Flights
void displayFlights() {
    printf("\nAvailable Flights\n");
    printf("-------------------------------------\n");
    for(int i=0;i<MAX_FLIGHTS;i++) {
        printf("Flight ID: %d\n", flights[i].id);
        printf("Route: %s -> %s\n", flights[i].source, flights[i].destination);
        printf("Seats Available: %d\n\n", flights[i].seats);
    }
}

// Enqueue Waiting Passenger
void enqueue(char name[], int flightId) {
    struct Queue *temp = (struct Queue*)malloc(sizeof(struct Queue));
    strcpy(temp->passenger, name);
    temp->flightId = flightId;
    temp->next = NULL;

    if(rear == NULL) {
        front = rear = temp;
    } else {
        rear->next = temp;
        rear = temp;
    }
}

// Book Ticket
void bookTicket() {
    int id, found = 0;
    char name[50];

    printf("Enter Flight ID: ");
    scanf("%d", &id);

    printf("Enter Passenger Name: ");
    scanf("%s", name);

    for(int i=0;i<MAX_FLIGHTS;i++) {
        if(flights[i].id == id) {
            found = 1;
            if(flights[i].seats > 0) {
                flights[i].seats--;

                struct Reservation *temp =
                    (struct Reservation*)malloc(sizeof(struct Reservation));

                temp->flightId = id;
                strcpy(temp->passenger, name);
                temp->next = head;
                head = temp;

                printf("Reservation Successful!\n");
            } else {
                enqueue(name, id);
                printf("Flight Full! Added to Waiting Queue.\n");
            }
            break;
        }
    }

    if(!found)
        printf("Flight Not Found.\n");
}

// Display Reservations
void displayReservations() {
    struct Reservation *temp = head;

    printf("\nReservations\n");
    printf("-------------------------\n");

    while(temp != NULL) {
        printf("Passenger: %s | Flight: %d\n",
               temp->passenger, temp->flightId);
        temp = temp->next;
    }
}

// Cancel Reservation
void cancelTicket() {
    char name[50];

    printf("Enter Passenger Name: ");
    scanf("%s", name);

    struct Reservation *temp = head;
    struct Reservation *prev = NULL;

    while(temp != NULL) {
        if(strcmp(temp->passenger, name)==0) {

            if(prev == NULL)
                head = temp->next;
            else
                prev->next = temp->next;

            for(int i=0;i<MAX_FLIGHTS;i++) {
                if(flights[i].id == temp->flightId)
                    flights[i].seats++;
            }

            free(temp);
            printf("Reservation Cancelled.\n");
            return;
        }

        prev = temp;
        temp = temp->next;
    }

    printf("Passenger Not Found.\n");
}

// Display Waiting Queue
void displayQueue() {
    struct Queue *temp = front;

    printf("\nWaiting Queue\n");
    printf("-----------------------\n");

    while(temp != NULL) {
        printf("%s -> Flight %d\n",
               temp->passenger, temp->flightId);
        temp = temp->next;
    }
}

// Main
int main() {
    int choice;

    addFlights();

    while(1) {
        printf("\n===== Airline Reservation System =====\n");
        printf("1. Display Flights\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Display Reservations\n");
        printf("5. Display Waiting Queue\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                displayFlights();
                break;

            case 2:
                bookTicket();
                break;

            case 3:
                cancelTicket();
                break;

            case 4:
                displayReservations();
                break;

            case 5:
                displayQueue();
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}