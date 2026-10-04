# C programming & operating system Lectures with labs.

This repository contains detailed notes, explanations, and practical labs for the **ST5039CMD – Programming and Operating System** course.

---

## Course Content

### Lectures
| Lecture | Topic |
|---------|-------|
| 1 | C Programming Basics, Compilation & Process Concept |

### Labs
| Lab | Topic |
|-----|-------|
| Lab 2 | C Libraries, Linking & ELF Executable Structure |
| Lab 3 | Investigating Process Lifecycles and OS Interaction |

---

## Learnings objective.

- What is an operating system.
- what is the structure of C program and its compilation stages (Preprocessing, Compilation, Assembly and Linking).
- How does the C program link with the OS.
- How to retrieve and interpret process IP (PID) and parent process ID (PPID) using the system calls. 
- Difference between Static and Dynamic linking.
- Understanding key ELF executable using tools like readelf and ldd.

---


---

## How to Use

```bash
# Clone the repository
git clone https://github.com/Arch-x86/Programming-and-Operating-System.git
cd Programming-and-Operating-System

# Browse lecture notes
ls Lectures/

# Go to a lab and compile examples
cd Labs/Lab_3_Process_Lifecycles
gcc task1_alive.c -o task1
./task1 &
```


