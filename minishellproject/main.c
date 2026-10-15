
   
   Title of the Project: Mini Shell
  
   Description:  Developed a Linux-based Mini Shell in C that simulates core functionalities of a command-line interpreter. Implemented built-in and 
                 external command execution using process creation and system calls such as fork(), execvp(), and waitpid(). Added support for command 
                 pipelines using pipe() and dup2(), signal handling for SIGINT, SIGTSTP, and SIGCHLD, customizable prompts using PS1, and basic job 
                 control features including jobs, bg, and fg. Used dynamic memory allocation and linked lists to manage external commands and stopped processes.*/



#include "main.h"

// Store the shell prompt
char prompt[50] = "minishell$";

// Store the list of external commands
char **external_commands;

// Store the exit status of the last executed command
int status;

int main()
{
    // Clear the terminal screen
    system("clear");

    // Allocate memory for the external command list
    external_commands = calloc(100, sizeof(char *));

    if (external_commands == NULL)
    {
        perror("malloc");
        return 1;
    }

    // Read external commands from the command file
    extract_external_commands(external_commands);

    char input_string[100];

    // Start reading and executing user commands
    scan_input(prompt, input_string);

    // Free memory allocated for each external command
    for(int i = 0; external_commands[i] != NULL; i++)
    {
        free(external_commands[i]);
    }

    // Free the external command list
    free(external_commands);

    return 0;
}
