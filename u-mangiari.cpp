// ============================================================
//  'U Mangiari — Restaurant Reservation System
//  Authors: Flavio Lanzafame, Carmelo Vicari
//  Date:    28/10/2025
// ============================================================

#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {

    // ------------------------------------------------------------
    //  TABLE DATA
    //  10 tables with different seat counts — fixed configuration
    // ------------------------------------------------------------

    const int MAX_TABLES = 10;
    const int tableSeats[MAX_TABLES] = {2, 3, 4, 4, 5, 5, 6, 7, 8, 8};
    bool isOccupied[MAX_TABLES] = {false};

    // ------------------------------------------------------------
    //  RESERVATION DATA
    //  Parallel arrays — one entry per reservation
    // ------------------------------------------------------------

    string guestName[MAX_TABLES];
    int    guestCount[MAX_TABLES];
    int    assignedTable[MAX_TABLES];
    string specialNotes[MAX_TABLES];

    int reservationCount = 0;
    int choice;

    do {
        // Main menu
        cout << "\n====== 'U MANGIARI ======\n";
        cout << "1. Make a reservation\n";
        cout << "2. View reservations\n";
        cout << "3. View table status\n";
        cout << "0. Exit\n";
        cout << "=========================\n";

        // Read and validate menu choice
        do {
            cout << "Choose an option (0-3): ";
            if (!(cin >> choice) || choice < 0 || choice > 3) {
                cout << "  Error: enter a number between 0 and 3.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                choice = -1;
            }
        } while (choice < 0 || choice > 3);

        // ------------------------------------------------------------
        //  CASE 1 — Make a reservation
        // ------------------------------------------------------------

        if (choice == 1) {

            if (reservationCount >= MAX_TABLES) {
                cout << "  All tables are already reserved.\n";
            } else {

                // Collect guest name
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "  Guest name: ";
                getline(cin, guestName[reservationCount]);

                // Collect and validate guest count
                int guests = 0;
                do {
                    cout << "  Number of guests: ";
                    if (!(cin >> guests) || guests < 1 || guests > 20) {
                        cout << "  Error: enter a number between 1 and 20.\n";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        guests = 0;
                    }
                } while (guests < 1 || guests > 20);
                guestCount[reservationCount] = guests;

                // Find the first available table with enough seats
                int tableIndex = -1;
                for (int i = 0; i < MAX_TABLES; i++) {
                    if (!isOccupied[i] && tableSeats[i] >= guests) {
                        tableIndex = i;
                        break;
                    }
                }

                if (tableIndex == -1) {
                    cout << "  Sorry, no table available for " << guests << " guests.\n";
                } else {

                    // Collect special requests
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "  Special requests (allergies, birthday, etc.) — press Enter to skip: ";
                    getline(cin, specialNotes[reservationCount]);
                    if (specialNotes[reservationCount].empty())
                        specialNotes[reservationCount] = "None";

                    // Save reservation and mark table as occupied
                    isOccupied[tableIndex]          = true;
                    assignedTable[reservationCount] = tableIndex + 1; // 1-based
                    reservationCount++;

                    // Confirmation message
                    cout << "\n  Reservation confirmed!\n";
                    cout << "  Table " << tableIndex + 1
                         << " (" << tableSeats[tableIndex] << " seats)"
                         << " — " << guestName[reservationCount - 1]
                         << " (" << guests << " guests)\n";
                }
            }
        }

        // ------------------------------------------------------------
        //  CASE 2 — View all reservations
        // ------------------------------------------------------------

        else if (choice == 2) {
            cout << "\n--- RESERVATIONS ---\n";
            if (reservationCount == 0) {
                cout << "  No reservations yet.\n";
            } else {
                for (int i = 0; i < reservationCount; i++) {
                    cout << "  " << i + 1 << ". "
                         << "Table " << assignedTable[i]
                         << " | " << guestName[i]
                         << " | " << guestCount[i] << " guests"
                         << " | Notes: " << specialNotes[i] << "\n";
                }
            }
        }

        // ------------------------------------------------------------
        //  CASE 3 — View table status
        // ------------------------------------------------------------

        else if (choice == 3) {
            cout << "\n--- TABLE STATUS ---\n";
            for (int i = 0; i < MAX_TABLES; i++) {
                cout << "  Table " << i + 1
                     << " (" << tableSeats[i] << " seats) — "
                     << (isOccupied[i] ? "OCCUPIED" : "available") << "\n";
            }
        }

        else if (choice == 0) {
            cout << "\nGoodbye! A presitu!\n";
        }

    } while (choice != 0);

    return 0;
}
