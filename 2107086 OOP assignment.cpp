#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

// Define a class called StudentDatabase to manage student data using an unordered_map.
class StudentDatabase {
private:
    // An unordered_map with integer keys (student IDs) and float values (student grades).
    unordered_map<int, float> studentGrades;

public:
    // Function to insert a student into the database.
    void insertStudent(int id, float grade) {
        // Add the student's ID and grade to the unordered_map.
        studentGrades[id] = grade;
        // Print a message indicating that the student has been inserted.
        cout << "Student with ID " << id << " and grade " << grade << " inserted." << endl;
    }

    // Function to delete a student from the database based on their ID.
    void deleteStudent(int id) {
        // Find the student in the unordered_map using their ID.
        auto it = studentGrades.find(id);
        if (it != studentGrades.end()) {
            // If the student is found, erase their entry from the map.
            studentGrades.erase(it);
            // Print a message indicating that the student has been deleted.
            cout << "Student with ID " << id << " deleted." << endl;
        } else {
            // If the student is not found, print a message indicating that.
            cout << "Student with ID " << id << " not found." << endl;
        }
    }

    // Function to search for a student in the database by their ID.
    void searchStudent(int id) {
        // Find the student in the unordered_map using their ID.
        auto it = studentGrades.find(id);
        if (it != studentGrades.end()) {
            // If the student is found, print their ID and grade.
            cout << "Student with ID " << id << " has a grade of " << it->second << "." << endl;
        } else {
            // If the student is not found, print a message indicating that.
            cout << "Student with ID " << id << " not found." << endl;
        }
    }

    // Function to update the grade of an existing student based on their ID.
    void updateGrade(int id, float newGrade) {
        // Find the student in the unordered_map using their ID.
        auto it = studentGrades.find(id);
        if (it != studentGrades.end()) {
            // If the student is found, update their grade with the newGrade value.
            it->second = newGrade;
            // Print a message indicating that the grade has been updated.
            cout << "Grade updated successfully." << endl;
        } else {
            // If the student is not found, print a message indicating that.
            cout << "Student with ID " << id << " not found." << endl;
        }
    }

    // Function to display all students in the database.
    void displayAllStudents() {
        // Print a header for the student database.
        cout << "Student Database:" << endl;
        // Iterate through the unordered_map and print each student's ID and grade.
        for (const auto& entry : studentGrades) {
            cout << "ID: " << entry.first << ", Grade: " << entry.second << endl;
        }
    }

    // Function to display the number of students in the database.
    void displaySize() {
        // Get the number of students in the unordered_map using size() and print it.
        cout << "Number of students in the database: " << studentGrades.size() << endl;
    }

    // Function to clear the entire student database.
    void clearDatabase() {
        // Clear the unordered_map using clear().
        studentGrades.clear();
        // Print a message indicating that the database has been cleared.
        cout << "Database cleared." << endl;
    }
};

// The main function where the program execution starts.
int main() {
    // Create an instance of the StudentDatabase class to manage student data.
    StudentDatabase database;
    int choice;

    // Display a menu and perform user-selected operations until the user chooses to exit.
    do {
        cout << "Menu:" << endl;
        cout << "1. Insert Student" << endl;
        cout << "2. Delete Student" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Update Grade" << endl;
        cout << "5. Display All Students" << endl;
        cout << "6. Display Size" << endl;
        cout << "7. Clear Database" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Perform the selected operation based on the user's choice.
        switch (choice) {
            case 1: {
                int id;
                float grade;
                cout << "Enter student ID: ";
                cin >> id;
                cout << "Enter student grade: ";
                cin >> grade;
                database.insertStudent(id, grade);
                break;
            }
            case 2: {
                int id;
                cout << "Enter student ID to delete: ";
                cin >> id;
                database.deleteStudent(id);
                break;
            }
            case 3: {
                int id;
                cout << "Enter student ID to search: ";
                cin >> id;
                database.searchStudent(id);
(id);
                break;
            }
            case 4: {
                int id;
                float newGrade;
                cout << "Enter student ID to update: ";
                cin >> id;
                cout << "Enter new grade: ";
                cin >> newGrade;
                database.updateGrade(id, newGrade);
                break;
            }
            case 5:
                database.displayAllStudents();
                break;
            case 6:
                database.displaySize();
                break;
            case 7:
                database.clearDatabase();
                break;
            case 8:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
                break;
        }
    } while (choice != 8);

    return 0;
}
