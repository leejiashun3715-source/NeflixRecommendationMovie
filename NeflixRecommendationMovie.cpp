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

//Part2: Recommendation Logic (switch-case AND if-else)
void recommend(int type, int genre, int mood){
    cout << "\n=========================================\n";
    cout << "        NETFLIX RECOMMENDATION\n";
    cout << "=========================================\n\n";

    if(type == 1){ //TV Movies
        cout << "Category: MOVIES\n\n";
        switch (genre) {
            case 1:
                cout << (mood == 2 ? " EXTRACTION\n JOHN WICK\n"
                                   : " THE OLD GUARD\n MAD MAX\n");
                break;
            
            case 2:
                cout << (mood == 1 ? " THE ADAM PROJECT\n RED NOTICE\n"
                                   : " JUMANJI\n FREE GUY\n");
                break;
            
            case 3:
                cout << (mood == 3 ? " THE THEORY OF EVERYTHING\n A BEAUTIFUL MIND\n"
                                   : " THE IRISHMAN\n FORREST GUMP\n");
                break;

            case 4:
                cout << " THE CONJURING\n A QUIET PLACE\n";
                break;

            case 5:
                cout << " INTERSTELLAR\n INCEPTION\n";
                break;
        }
    }else { //TV Shows
        cout << " Category: TV SHOWS\n\n";
        switch (genre) {
            case 1:
                cout << " THE NIGHT AGENT\n JACK RYAN\n";
                break;
            case 2:
                cout << " BROOKLYN NINE-NINE\n THE GOOD PLACE\n";
                break;
            case 3:
                cout << " BREAKING BAD\n THE CROWN\n";
                break;
            case 4:
                cout << " THE HAUNTING OF HILL HOUSE\n FROM\n";
                break;
            case 5:
                cout << " STRANGER THINGS\n BLACK MIRROR\n";
                break;
        }
    }
}

//Part 3
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
        cout << "Invalid choice. Please enter 1–5: ";
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
        cout << "Invalid choice. Please enter 1–4: ";
    }
    return choice;
}

// Recommendation logic
void recommend(int type, int genre, int mood) {
    cout << "\n=========================================\n";
    cout << "        NETFLIX RECOMMENDATION\n";
    cout << "=========================================\n\n";

    if (type == 1) { // MOVIES
        cout << " Category: MOVIES\n\n";
        switch (genre) {
            case 1:
                cout << (mood == 2 ? " EXTRACTION\n JOHN WICK\n"
                                   : " THE OLD GUARD\n MAD MAX\n");
                break;
            case 2:
                cout << (mood == 1 ? " THE ADAM PROJECT\n RED NOTICE\n"
                                   : " JUMANJI\n FREE GUY\n");
                break;
            case 3:
                cout << (mood == 3 ? " THE THEORY OF EVERYTHING\n A BEAUTIFUL MIND\n"
                                   : " THE IRISHMAN\n FORREST GUMP\n");
                break;
            case 4:
                cout << " THE CONJURING\n A QUIET PLACE\n";
                break;
            case 5:
                cout << " INTERSTELLAR\n INCEPTION\n";
                break;
        }
    } 
    else { // TV SHOWS
        cout << " Category: TV SHOWS\n\n";
        switch (genre) {
            case 1:
                cout << " THE NIGHT AGENT\n JACK RYAN\n";
                break;
            case 2:
                cout << " BROOKLYN NINE-NINE\n THE GOOD PLACE\n";
                break;
            case 3:
                cout << " BREAKING BAD\n THE CROWN\n";
                break;
            case 4:
                cout << " THE HAUNTING OF HILL HOUSE\n FROM\n";
                break;
            case 5:
                cout << " STRANGER THINGS\n BLACK MIRROR\n";
                break;
        }
    }
}

int main() {
    char exitChoice;

    do {
        cout << "\n=========================================\n";
        cout << "   NETFLIX MOVIE & TV SHOW RECOMMENDER\n";
        cout << "=========================================\n";

        int contentType = selectContentType();
        int genre = selectGenre();
        int mood = selectMood();

        recommend(contentType, genre, mood);

        cout << "\n-----------------------------------------\n";
        cout << "Do you want to exit the program? (Y/N): ";
        cin >> exitChoice;

    } while (exitChoice == 'N' || exitChoice == 'n');

    cout << "\nThank you for using Netflix Recommendation Assistant!\n";
    cout << "Goodbye \n";
    return 0;
}


int main(){
    printf("Hello");
}


