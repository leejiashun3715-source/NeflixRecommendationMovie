#include <iostream>
#include <limits>
using namespace std;

// ===== PART 1: INPUT HANDLING =====

// Clear invalid input
void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Select Movies or TV Shows
int selectContentType() {
    int choice;
    cout << "\nWhat would you like to watch?\n";
    cout << "1. Movies\n";
    cout << "2. TV Shows\n";
    cout << "Enter your choice (1-2): ";

    while (!(cin >> choice) || choice < 1 || choice > 2) {
        clearInput();
        cout << "Invalid choice. Please enter 1 or 2: ";
    }
    return choice;
}

// Select genre
int selectGenre() {
    int choice;
    cout << "\nSelect your preferred genre:\n";
    cout << "1. Action\n";
    cout << "2. Comedy\n";
    cout << "3. Drama\n";
    cout << "4. Horror\n";
    cout << "5. Sci-Fi\n";
    cout << "Enter your choice (1-5): ";

    while (!(cin >> choice) || choice < 1 || choice > 5) {
        clearInput();
        cout << "Invalid choice. Please enter 1?: ";
    }
    return choice;
}

// Select mood
int selectMood() {
    int choice;
    cout << "\nSelect your current mood:\n";
    cout << "1. Relaxing\n";
    cout << "2. Exciting\n";
    cout << "3. Emotional\n";
    cout << "4. Dark\n";
    cout << "Enter your choice (1-4): ";

    while (!(cin >> choice) || choice < 1 || choice > 4) {
        clearInput();
        cout << "Invalid choice. Please enter 1?: ";
    }
    return choice;
}

void recommend(){
    cout << "\n=========================================\n";
    cout << "        NETFLIX RECOMMENDATION\n";
    cout << "=========================================\n\n";
}

int main(){
    printf("Hello");
}
