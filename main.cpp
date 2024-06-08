#include <iostream>
// #include <windows.h>
using namespace std;

void displayTasks (string tasks[], int countTasks)
{
    cout << "Tasks to Do: \n";
    cout << "------------------------------ \n";
    for (int i = 0; i < countTasks; i++)
    {
        cout << "Tasks " << i << " : " << tasks[i] << endl;
    }
    cout << "------------------------------ \n";
}


int main()
{

    string tasks[10] = {""};
    //counter variable -> know how many tasks we have
    int countTasks = 0;

    int option = -1;
    while (option != 0)
    {
        //we will make menu here
        cout << "--- To Do List --- \n";
        cout << "1- To Add New Task \n";
        cout << "2- To View Task \n";
        cout << "3- Delete the Task \n";
        cout << "0- Terminate the Program \n";
        cin >> option;

        switch (option)
        {
            case 1:
            {
                if (countTasks > 9)
                {
                    cout << "```Task List is Full``` \n";
                }
                else {
                    cout << "```Enter a New Task``` \n";
                    cin.ignore();
                    getline(cin,tasks[countTasks]);
                    countTasks++;
                }
                break;
            }

            case 2:
                displayTasks(tasks,countTasks);
                break;

            case 3:
            {
                int deleteTask = 0;
                cout << "Enter a Task to Delete \n";
                cin >> deleteTask;

                if (deleteTask < 0 || deleteTask > 9)
                {
                    cout << "You Entered Invalid Task Number \n";
                    break;
                }
                for (int i = deleteTask; i < countTasks; i++)
                {
                    tasks[i] = tasks[i + 1];
                }
                    countTasks = countTasks - 1;
                    break;
            }
        }
    }

    return 0;

}