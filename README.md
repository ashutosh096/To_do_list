
To-Do List Application in C++
Description

This is a simple console-based To-Do List application written in C++.
It allows users to:

Add tasks to the list
View all tasks
Delete tasks by number
Save tasks to a file so they persist after the program is closed

This project is beginner-friendly and demonstrates basic file handling, vectors, and user interaction in C++.

Features
Add Task: Enter a new task to your list.
View Tasks: Display all saved tasks.
Delete Task: Remove a task by specifying its number.
Persistent Storage: All tasks are saved in tasks.txt automatically.
Installation / Compilation
Clone or download the project files.
Make sure you have a C++ compiler installed (e.g., g++, Dev-C++, Code::Blocks).
Compile the program:
g++ -std=c++98 "to do.cpp" -o todo   # For C++98 compatible version
Run the program:
./todo       # On Linux / Mac
todo.exe     # On Windows
Usage
Run the program.
You will see the menu:
=== To-Do List Menu ===
1. View Tasks
2. Add Task
3. Delete Task
4. Exit
Enter choice:
Choose an option by entering the corresponding number.
Tasks will automatically be saved in tasks.txt and loaded next time the program runs.
File Structure
to do.cpp — Main C++ program file.
tasks.txt — File used to save your tasks (created automatically).
Notes
Compatible with C++98 and later.
Uses standard C++ libraries only.
Ideal for beginners learning file handling, vectors, and menu-driven programs.
Author

Ashutosh Mishra – C++ developer.
![image alt](https://github.com/ashutosh096/To_do_list/blob/236ba92b4487fe0b1bb7cb866e16ca6052ae8bd4/Screenshot%202026-03-28%20020647.png)
![image alt](https://github.com/ashutosh096/To_do_list/blob/236ba92b4487fe0b1bb7cb866e16ca6052ae8bd4/Screenshot%202026-03-28%20020610.png)
