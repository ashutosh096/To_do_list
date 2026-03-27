#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

vector<string> tasks;

// Function to load tasks from file
void loadTasks() {
    ifstream infile("tasks.txt");
    string task;
    while (getline(infile, task)) {
        tasks.push_back(task);
    }
    infile.close();
}

// Function to save tasks to file
// Save tasks to file
void saveTasks() {
    ofstream outfile("tasks.txt");
    for (size_t i = 0; i < tasks.size(); i++) {
        outfile << tasks[i] << endl;
    }
    outfile.close();
}

// View tasks
void viewTasks() {
    if (tasks.empty()) {
        cout << "No tasks yet!" << endl;
    } else {
        cout << "Your Tasks:" << endl;
        for (size_t i = 0; i < tasks.size(); i++) {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }
}

// Function to add a new task
void addTask() {
    string task;
    cout << "Enter task: ";
    cin.ignore();
    getline(cin, task);
    tasks.push_back(task);
    saveTasks();
    cout << "Task added!" << endl;
}

// Function to delete a task
void deleteTask() {
    int index;
    viewTasks();
    if (tasks.empty()) return;

    cout << "Enter task number to delete: ";
    cin >> index;
    if (index > 0 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + index - 1);
        saveTasks();
        cout << "Task deleted!" << endl;
    } else {
        cout << "Invalid task number!" << endl;
    }
}

int main() {
    loadTasks();
    int choice;

    do {
        cout << "\n=== To-Do List Menu ===" << endl;
        cout << "1. View Tasks" << endl;
        cout << "2. Add Task" << endl;
        cout << "3. Delete Task" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: viewTasks(); break;
            case 2: addTask(); break;
            case 3: deleteTask(); break;
            case 4: cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}
