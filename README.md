<p align="center">
  <img width="160" height="70" src="https://miro.medium.com/v2/resize:fit:250/format:webp/1*P1FKnYJTJxW87fe71611dg.png">
  <h1 align="center">Simple Shell (C language)</h1>
<br>

Welcome to our student project aimed at creating a simplified shell in C language.<br>
<br> This project marks the culmination of our first semester at the Holberton School of Thonon-les-Bains *(France)*, and it is our most significant assignment yet :rocket:
<br>
<br>
We encourage you to take a few minutes to explore what our program can do. Below, you'll find all the relevant details and features of our shell. Thank you for your interest!
<br>
<br>

![alt text](<./pictures/print_screen_our_shell.png>)

<br>

<h2><em>-- DESCRIPTION --</em></h2>

<br>

*What is a Shell :question:* <br>
A shell is a command interpreter for UNIX systems. It provides an interface for users to enter commands, allowing them to instruct the computer to perform specific tasks. <br> <br>
**The primary goal of our custom shell is to gain a deeper understanding of how an official UNIX shell operates.**
<br>
<br>

###  A quick look at our approach :
<br>

We needed to work with system environment variables to make sure our program could locate the root **PATH** first.
<br>

The **PATH** variable contains the root subfolders where our functions should look for specific commands to execute based on user input.

<br>
<br>

<h2><em>-- REQUIREMENTS AND INSTALLATION --</em></h2>

<br>

- Use a **Linux** distribution *(Ubuntu 20 is highly recommended)*

- Clone our repository in the folder of your choice by following the next steps : 
<br>

```bash 
sudo apt-get install git  // (if git is not installed)
cd /$FolderOfYourChoice$/
git clone https://github.com/cosmos510/holbertonschool-simple_shell.git
```

<br>

<h2><em>-- FLOWCHART --</em></h2>

<br>

![alt text](<./pictures/flowchart.png>)

<br>

<h2><em>-- USAGE --</em></h2>
<br>

 Compile the files using this command in your main terminal: 
<br>

```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh```

- Run the program this way : 

```./hsh```

- The prompt *" : ) "* is running and waits for your commands  :

<br>

```bash 
root@f833c6a99731:~/holbertonschool-simple_shell# ./hsh
:) 
```
<br>

- Exit the program using this command : 
`exit`

<br>

&#8594; **Our Shell** is allowed to run many commands such as `ls -l`, `cat`, `pwd` and many more.

<br>

**Please see two examples below :**
<br>

*List* of the directories and files filtered by time : **command** `ls -lt`

<br>

```bash 
root@f833c6a99731:~/holbertonschool-simple_shell# ./hsh
:) ls -lt
total 60
-rw-r--r-- 1 root root  2307 Apr 22 12:43 README.md
-rwxr-xr-x 1 root root 15024 Apr 22 12:38 hsh
drwxr-xr-x 2 root root  4096 Apr 22 09:20 pictures
-rw-r--r-- 1 root root   711 Apr 22 08:12 check_path.c
-rw-r--r-- 1 root root   514 Apr 21 07:09 _getnev.c
-rw-r--r-- 1 root root   384 Apr 21 07:09 _printev.c
-rw-r--r-- 1 root root   671 Apr 21 07:09 main.c
-rw-r--r-- 1 root root   558 Apr 21 07:09 new_env.c
-rw-r--r-- 1 root root  1188 Apr 21 07:09 prompt.c
-rw-r--r-- 1 root root   418 Apr 21 07:09 read-lines.c
-rw-r--r-- 1 root root   619 Apr 21 07:09 shell.h
-rw-r--r-- 1 root root   567 Apr 21 07:09 tokenize.c
```
<br>

*Create* a file : **command** `touch` + *nameOfFile*

```bash
-rw-r--r-- 1 root root   619 Apr 21 07:09 shell.h
-rw-r--r-- 1 root root   567 Apr 21 07:09 tokenize.c
:) touch shell_in_c_is_fun.c
```
<br>

<h2><em>-- BUILD-INS --</em></h2>

These two build-Ins commands are supported by our shell : 

- `env` : print out the environment variables of the system.

<br>

```bash
root@f833c6a99731:~/holbertonschool-simple_shell# ./hsh
:) env
```
<br>

- `exit` : exit program successfully.

<br>

```bash
root@f833c6a99731:~/holbertonschool-simple_shell# ./hsh
:) mkdir SIMPLE_SHELL
:) exit
root@f833c6a99731:~/holbertonschool-simple_shell# 
```
<br>

<h2><em>-- INTERACTIVE AND NON-INTERACTIVE MODES --</em></h2>

<br>

Our shell is able to work as both interactive and non-interactive modes.

*Exemples :*

- ***Interactive*** 

<br>

```bash
root@f833c6a99731:~/holbertonschool-simple_shell# ./hsh
:) ls
:) README.md SIMPLE_SHELL check_path.c  main.c  new_env.c  prompt.c  read-lines.c  shell.h  shell_in_c_is_fun.c  tokenize.c
```
<br>

- ***Non-Interactive*** 

<br>

```bash
root@f833c6a99731:~/holbertonschool-simple_shell# touch foo | ./hsh 
root@f833c6a99731:~/holbertonschool-simple_shell# 
```
<br>

The file `foo` has been successfully created in the current folder `holberton-simple_shell` ! 

<br>

<h2><em>-- MANUAL --</em></h2>
<br>

You can find more features and information through the manual of our program.
Once the prompt launched, simply use the following command : 

```bash
root@f833c6a99731:~/holbertonschool-simple_shell# ./hsh
:) man ./man_1_simple_shell 
```

<br>
<h2><em>-- AUTHORS --</em></h2>


[Maxime Martin](https://github.com/cosmos510/) <br>
[Emmanuel Meynetgauthier](https://github.com/8690holbertonstudents) <br>
[Douglas Dachicourt](https://github.com/Douglas-Dachicourt) <br>


*#C23* cohort from *Thonon-les-Bains* :fr:
