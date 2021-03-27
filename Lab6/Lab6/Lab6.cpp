#include <iostream>
#include "CommandManager.h"

using namespace std;

void read_commands_until_empty(command_manager& manager)
{
    const char* args[100];
    char buffer[100];

    while (true)
    {
        cout << "Enter command or leave empty to stop: ";
        cin.getline(buffer, 100);
        unsigned int args_count = 0;

        char* ptr = strtok(buffer, " ");
        if (!ptr)
            break;
        while (ptr)
        {
            args[args_count++] = ptr;
            ptr = strtok(NULL, " ");
        }

        manager.execute_command(args, args_count);
    }
}

int main(int argc, char* argv[])
{
    command_manager manager;
    //TODO: Implement the following commands then add them using the "add_command" function from CommandManager, allocate them dynamically using new
    //TODO: for maximum score implement 5 commands
    //TimeCommand: responds to the name "time" -> shows current time
    //HelloCommand: responds to the name "hello" -> will print Hello and then the rest of arguments separated by space if there are any
    //CountCommand: responds to the name "count" -> will print "Counted X arguments" where X is the number of arguments given to the command
    //Create file: responds to the name "file" -> will create a file named with the first argument
    //Remove file: responds to the name "remove" -> remove a file named with the first argument
    //Write to file: responds to the name "write" -> write into file named with the first argument, the rest of arguments separated by space
    //Copy file: responds to the name "copy" -> copy the file named with the first argument into the file with the name of the second argument

    //HERE ADD THEM
    //manager.add_command( HERE );

    read_commands_until_empty(manager);
    return 0;
}