# Minishell - 42 Project

Welcome to my **Minishell** project! This is a custom Unix shell implemented in C as part of the 42 Network curriculum. It supports many standard shell features and follows strict code and memory management rules.

---

## 🚀 Features

- **Custom Prompt**
- **Lexing and Parsing** of input
- **Command execution** with `fork`, `execve`, and `pipe`
- **Built-in commands**: `cd`, `echo`, `pwd`, `exit`, `export`, `unset`, `env`
- **Environment variable expansion** (e.g., `$PATH`, `$?`)
- **Heredoc support** (`<<`)
- **Redirections**: `>`, `>>`, `<`, `<<`
- **Pipes**: Connect commands with `|`
- **Quote handling** (single `'` and double `"`)
- **Signal handling** (CTRL+C, CTRL+D, CTRL+\)
- **Memory-safe implementation** (Valgrind-clean)

---

## 🛠️ Skills Learned

- Advanced **C programming**
- **Lexer / Parser** design patterns
- Implementing **finite state machines**
- Managing **processes and signals**
- Building and maintaining a **linked list-based environment system**
- Handling **file descriptors** and **pipes**
- Strict code formatting and logic under **42 Norm**
- Writing clean, modular code with **Makefiles**

---

## 📁 Structure

```
minishell/
│
├── Makefile
├── README.md
├── includes/
│   └── header.h
│
├── built-in/
│   ├── cd.c
│   ├── echo.c
│   ├── env.c
│   └── ...
│
├── lexing/
│   ├── create_token.c
│   ├── handle_operator.c
│   ├── tokenazation.c
│   └── ...
│
├── parsing/
│   ├── parse_cmd.c
│   ├── redirection.c
│   ├── remove_quotes.c
│   └── ...
│
├── execution/
│   ├── execute_command_line.c
│   ├── pipes.c
│   ├── here_doc.c
│   └── ...
│
├── expansion/
│   ├── expand.c
│   ├── expand_dollar.c
│   ├── expand_string.c
│   └── ...
│
├── syntax_checker/
│   ├── syntax_checker.c
│   ├── syntax_utils.c
│   ├── syntax_utils2.c
│   └── ...
│
├── cleanup/
│   ├── clean_up.c
│   └── ...
│
└── signals/
    ├── signals.c
    └── ...

```

---

## 🧪 How to Build & Run

```bash
# Clone the repository
$ git clone https://github.com/yourusername/minishell.git
$ cd minishell

# Compile
$ make

# Run
$ ./minishell
```

---

## 🧠 Example Commands

```bash
$ echo hello world
$ export NAME=42
$ echo $NAME
$ cat < infile | grep hello | wc > outfile
$ ls | wc -l
$ << EOF
> hello
> EOF
```

---

## 📎 Bonus/Extra

- Advanced parsing logic
- Handling tricky edge cases (quotes + variable expansions + heredoc)
- Efficient memory management and freeing

---

## 📌 GitHub
👉 [github.com/ael-ayoub/minishell](https://github.com/ael-ayoub/minishell)

---

## 👨‍💻 Author
[Ayoub aissaoui]  
42 Network Student  
Email: w542004@gmail.com

---

Thanks for checking out my Minishell project! ⭐

