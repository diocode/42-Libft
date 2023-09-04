![banners-08](https://github.com/diocode/42-Libft/assets/107859177/cc145406-c7f8-47ca-b22d-b7a450a8b0b3)

<p align="center">
	<img src="https://img.shields.io/badge/status-finished-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/badge/evaluated-05%20%2F%2012%20%2F%202022-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/badge/score-125%20%2F%20100-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/github/last-commit/diocode/philosophers?color=%2312bab9&style=flat-square"/>
	<a href='https://www.linkedin.com/in/diogo-gsilva' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-100000?style=flat-square&logo=Linkedin&logoColor=white&labelColor=0A66C2&color=0A66C2'/></a>
</p>

<p align="center">
	<a href="#about">About</a> •
	<a href="#how-to-use">How to use</a> •
	<a href="#norminette">Norminette</a>
</p>

## ABOUT ([Subject](/.github/en.subject.pdf))

This text outlines the requirements for a programming project, which involves recreating a set of functions from the standard C library (libc) with the same prototypes and behaviors as the originals. The only difference is that these functions will have names starting with the 'ft_' prefix. Here's a summary of the key points:

**Mandatory Part:**

Recreate several standard libc functions with 'ft_' prefixes.
Functions to be implemented include those for character manipulation (e.g., toupper, isdigit), string manipulation (e.g., strlen, strncmp), memory manipulation (e.g., memset, memcpy), and more.
Ensure the implementations adhere to the behavior described in their respective man pages.
Use malloc for implementing functions that require dynamic memory allocation (e.g., calloc, strdup).
Create and declare a custom structure called t_list for linked lists with members content (data in the node) and next (pointer to the next node or NULL).
Implement a Makefile rule for compiling and creating a library file (libft.a) containing these functions.

**Bonus Part (Optional):**

Develop additional functions to manipulate linked lists using the t_list structure.
Add a make bonus rule to include the bonus functions in the libft.a library.

In summary, this project involves recreating standard libc functions with 'ft_' prefixes, ensuring their functionality matches the originals. Additionally, there is an optional bonus part that includes creating functions to manipulate linked lists. The goal is to create a custom library (libft.a) with these functions for later use.

<a href="/.github/en.subject.pdf">Click here</a> for the subject of this project.

<br>

## HOW TO USE
#### 1º - Clone the repository
```bash
$ git clone git@github.com:diocode/42-Libft.git
```
#### 2º - Use the functions
To use the libft's functions, you will need to compile your code using this library.

<br>

## NORMINETTE
At 42 School, projects are generally expected to adhere to the Norm, the school's coding standard:

```
- No for, do while, switch, case or goto are allowed
- No more than 25 lines per function and 5 functions per file
- No assigns and declarations in the same line (unless static)
- No more than 5 variables in 1 function
... 
```

* [Norminette](https://github.com/42School/norminette) - Tool by 42, to respect the code norm. `GitHub`
* [42 Header](https://github.com/42Paris/42header) - 42 header for Vim. `GitHub`
