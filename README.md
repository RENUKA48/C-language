# C-language


# Linux-2026


# Mini Shell

A Linux-based command-line shell developed in **C** to understand and implement core concepts of **Linux system programming, process management, inter-process communication, and signal handling**.

## 📌 Project Overview

Mini Shell provides a command-line interface where users can execute built-in and external Linux commands. It demonstrates how a shell creates and manages processes, executes programs, handles signals, and supports communication between processes through pipelines.

## ✨ Features

* Execute built-in commands such as:

  * `cd`
  * `pwd`
  * `echo`
  * `exit`
  * `jobs`
  * `bg`
  * `fg`
* Execute external Linux commands using `execvp()`
* Create child processes using `fork()`
* Support command pipelines using `|`
* Inter-process communication using `pipe()`
* Input/output redirection between processes using `dup2()`
* Process synchronization using `waitpid()`
* Signal handling for:

  * `SIGINT` – `Ctrl+C`
  * `SIGTSTP` – `Ctrl+Z`
  * `SIGCHLD` – child process state changes
* Basic job control using `jobs`, `bg`, and `fg`
* Customizable shell prompt using `PS1`
* Dynamic memory allocation for external command management
* Linked-list based management of stopped processes

## 🛠️ Technologies Used

* **C Programming**
* **Linux / Unix**
* **System Programming**
* **POSIX System Calls**
* **Process Management**
* **Inter-Process Communication (IPC)**
* **Signal Handling**
* **Linked Lists**
* **GCC**

## 🔧 Important System Calls / Functions

| Function                              | Purpose                                          |
| ------------------------------------- | ------------------------------------------------ |
| `fork()`                              | Creates a child process                          |
| `execvp()`                            | Executes an external program                     |
| `waitpid()`                           | Waits for a child process                        |
| `pipe()`                              | Creates communication channels between processes |
| `dup2()`                              | Redirects standard input/output                  |
| `kill()`                              | Sends signals to processes                       |
| `signal()`                            | Registers signal handlers                        |
| `open()`                              | Opens a file                                     |
| `read()`                              | Reads data from a file                           |
| `close()`                             | Closes a file descriptor                         |
| `malloc()` / `calloc()` / `realloc()` | Dynamic memory allocation                        |

## 📂 Project Structure

```text
MiniShell/
│
├── main.c
├── scan.c
├── check_cmd_type.c
├── main.h
├── ext_cmds.txt
└── README.md
```

## ⚙️ Compilation

Compile the project using GCC:

```bash
gcc main.c scan.c check_cmd_type.c -o minishell
```

## ▶️ Running the Shell

```bash
./minishell
```

Example:

```text
minishell$ pwd
/home/user/MiniShell

minishell$ ls | wc -l
10

minishell$ echo Hello
Hello
```

## 🔄 Job Control Example

Run a long-running process:

```text
minishell$ sleep 100
```

Press `Ctrl+Z` to stop it:

```text
minishell$ jobs
12345 sleep 100
```

Continue it in the background:

```text
minishell$ bg
```

Bring it back to the foreground:

```text
minishell$ fg
```

## 📚 Concepts Learned

This project provided practical experience with:

* Linux process creation and execution
* Parent-child process relationships
* Process synchronization
* File descriptors
* Pipes and IPC
* Signal handling
* Foreground and background processes
* Basic shell job control
* Dynamic memory allocation
* Linked-list implementation
* Command parsing

## 🎯 Objective

The main objective of this project is to gain hands-on experience with **Linux system programming and process management** by implementing the fundamental components of a command-line shell from scratch.
