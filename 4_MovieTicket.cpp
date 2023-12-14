#include <iostream>
#include <vector>

using namespace std;

// Define constants
const int NUM_ROWS = 5;
const int NUM_COLS = 10;

// Function prototypes
void displayMovies();
void displaySeats(char cinemaSeats[][NUM_COLS]);
bool isSeatAvailable(char cinemaSeats[][NUM_COLS], int row, int col);
void bookSeat(char cinemaSeats[][NUM_COLS], int row, int col);
float calculateTotalCost(int numTickets);

int main() {
    char cinemaSeats[NUM_ROWS][NUM_COLS]; // 2D array to represent seats
    int selectedMovie;
    int selectedRow, selectedCol;
    int numTickets;

    // Initialize cinemaSeats array (all seats available)
    for (int i = 0; i < NUM_ROWS; ++i) {
        for (int j = 0; j < NUM_COLS; ++j) {
            cinemaSeats[i][j] = 'O'; // 'O' represents an available seat
        }
    }

    do {
        // Display movie listings
        displayMovies();

        // Get user input for movie selection
        cout << "Select a movie (1-3, 0 to exit): ";
        cin >> selectedMovie;

        if (selectedMovie == 0) {
            cout << "Exiting program. Goodbye!" << endl;
            break;
        }

        // Display available seats for the selected movie
        displaySeats(cinemaSeats);

        // Get user input for seat selection
        cout << "Enter row and column for your seat (e.g., 1 3): ";
        cin >> selectedRow >> selectedCol;

        // Validate seat selection
        if (selectedRow < 1 || selectedRow > NUM_ROWS || selectedCol < 1 || selectedCol > NUM_COLS) {
            cout << "Invalid seat selection. Please try again." << endl;
            continue;
        }

        // Check seat availability
        if (!isSeatAvailable(cinemaSeats, selectedRow - 1, selectedCol - 1)) {
            cout << "Seat not available. Please choose another seat." << endl;
            continue;
        }

        // Book the selected seat
        bookSeat(cinemaSeats, selectedRow - 1, selectedCol - 1);

        // Get the number of tickets
        cout << "Enter the number of tickets: ";
        cin >> numTickets;

        // Calculate and display the total cost
        float totalCost = calculateTotalCost(numTickets);
        cout << "Total cost: $" << totalCost << endl;

        cout << "Thank you for booking with us!" << endl;

    } while (true);

    return 0;
}

void displayMovies() {
    cout << "Movie Listings:" << endl;
    cout << "1. Tiger 3" << endl;
    cout << "2. THE KASHMIR FILES" << endl;
    cout << "3. GADAR 2" << endl;
}

void displaySeats(char cinemaSeats[][NUM_COLS]) {
    cout << "Seat Map:" << endl;
    for (int i = 0; i < NUM_ROWS; ++i) {
        for (int j = 0; j < NUM_COLS; ++j) {
            cout << cinemaSeats[i][j] << " ";
        }
        cout << endl;
    }
}

bool isSeatAvailable(char cinemaSeats[][NUM_COLS], int row, int col) {
    return cinemaSeats[row][col] == 'O';
}

void bookSeat(char cinemaSeats[][NUM_COLS], int row, int col) {
    cinemaSeats[row][col] = 'X'; // 'X' represents a booked seat
}

float calculateTotalCost(int numTickets) {
    const float TICKET_PRICE = 10.0;
    return numTickets * TICKET_PRICE;
}