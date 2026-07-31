#include <iostream>
#include <vector>
#include <string>
using namespace std;

void addTask(vector<string>& tasks)
{
    string task;

    cout << "Enter task: ";
    cin.ignore();
    getline(cin, task);

    tasks.push_back(task);
    cout << "Task added: \"" << task << "\"" << endl;
}

void viewTasks(const vector<string>& tasks)
{
    if (tasks.empty())
    {
        cout << "Your to-do list is empty." << endl;
        return;
    }

    cout << "Your Tasks:" << endl;

    for (int i = 0; i < tasks.size(); i++)
    {
        cout << i + 1 << ". " << tasks[i] << endl;
    }
}

void deleteTask(vector<string>& tasks)
{
    if (tasks.empty())
    {
        cout << "Your to-do list is empty." << endl;
        return;
    }

    viewTasks(tasks);

    int choice;
    cout << "Enter task number to delete: ";
    cin >> choice;

    if (choice < 1 || choice > tasks.size())
    {
        cout << "Invalid task number." << endl;
    }
    else
    {
        cout << "Task \"" << tasks[choice - 1] << "\" has been removed." << endl;
        tasks.erase(tasks.begin() + choice - 1);
    }
}

int main()
{
    vector<string> tasks;
    int choice;

    do
    {
        cout << "\n============================" << endl;
        cout << "     TO-DO LIST MENU" << endl;
        cout << "============================" << endl;
        cout << "1. Add task" << endl;
        cout << "2. View tasks" << endl;
        cout << "3. Delete task" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                deleteTask(tasks);
                break;
            case 4:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}