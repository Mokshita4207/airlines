#include <stdio.h>

#define ROWS 5  // Number of rows in the flight
#define COLS 6  // Number of seats per row

void displaySeats(char seats[ROWS][COLS]) {
    printf("\nSeat Map:\n");
    printf("   1  2  3  4  5  6\n");
    for (int i = 0; i < ROWS; i++) {
        printf("%d: ", i + 1);
        for (int j = 0; j < COLS; j++) {
            printf("%c  ", seats[i][j]);
        }
        printf("\n");
    }
}

int bookSeat(char seats[ROWS][COLS]) {
    int row, col;
    printf("Enter row (1-%d): ", ROWS);
    scanf("%d", &row);
    printf("Enter seat number (1-%d): ", COLS);
    scanf("%d", &col);

    if (row < 1 || row > ROWS || col < 1 || col > COLS) {
        printf("Invalid seat number. Please try again.\n");
        return 0;
    }

    if (seats[row - 1][col - 1] == 'B') {
        printf("Sorry, this seat is already booked.\n");
        return 0;
    }

    seats[row - 1][col - 1] = 'B';
    printf("Seat %d-%d successfully booked!\n", row, col);
    return 1;
}

int main() {
  printf("Welcome to airlines");

    // Initialize seat map, 'A' means available, 'B' means booked
    char seats[ROWS][COLS] = {
        {'A', 'A', 'A', 'A', 'A', 'A'},
        {'A', 'A', 'A', 'A', 'A', 'A'},
        {'A', 'A', 'A', 'A', 'A', 'A'},
        {'A', 'A', 'A', 'A', 'A', 'A'},
        {'A', 'A', 'A', 'A', 'A', 'A'}
    };

    int choice, result;
    while (1) {
        printf("\nFlight Seat Booking System\n");
        printf("1.mumbai to delhi\n");
        printf("2.mumbai to goa\n");
printf("3.delhi to shri-nagar\n");
printf("4.ahemdabad to madras\n");
printf("5.surat to agra\n");
        printf("enter 0 for complete\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
            printf("you are booking flight from mumbai to delhi\n");
            printf("6. View Seats\n");

        printf("7. Book Seat\n");
        if(choice=6){displaySeats(seats);}
        else{result = bookSeat(seats);
                if (result) {
                    displaySeats(seats);
                }}
        printf("Enter your choice: ");
        scanf("%d", &choice);
            break;
            case 2:
            printf("you are booking flight from mumbai to goa\n");
printf("6. View Seats\n");

        printf("7. Book Seat\n");
        if(choice=6){displaySeats(seats);}
        else{result = bookSeat(seats);
                if (result) {
                    displaySeats(seats);
                }}
            break;
            case 3:
            printf("you are booking flight from delhi to shri-nagar\n");
printf("6. View Seats\n");

        printf("7. Book Seat\n");
        if(choice=6){displaySeats(seats);}
        else{result = bookSeat(seats);
                if (result) {
                    displaySeats(seats);
                }}
            break;
            case 4:
            printf("you are booking flight from ahemdabad to madras\n");
printf("6. View Seats\n");

        printf("7. Book Seat\n");
        if(choice=6){displaySeats(seats);}
        else{result = bookSeat(seats);
                if (result) {
                    displaySeats(seats);
                }}
            break;
            case 5:
            printf("you are booking flight from surat to agra\n");
printf("6. View Seats\n");

        printf("7. Book Seat\n");
        if(choice=6){displaySeats(seats);}
        else{result = bookSeat(seats);
                if (result) {
                    displaySeats(seats);
                }}
            break;
            case 6:
                displaySeats(seats);
                break;
            case 7:
                result = bookSeat(seats);
                if (result) {
                    displaySeats(seats);
                }
                break;
            case 0:
                printf("Exiting system.\n");

                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
    return 0;
}




