# brainfuck-mini-interpreter
The repository contains a compact implementation (25 lines of C-flavored C++ code) of what I called 'interpreter' for Brainfuck. Compressing the length of the code inevitably reduces the readability and maintainability. I made this project as a mere challenge, and I may make a more sophisticated and detailed version in the future.

# How to use

1.  If your current path is brainfuck-mini-interpreter/README.md, please go back to the previous page by clicking this link (https://github.com/Erics-Lab/brainfuck-mini-interpreter).
2.  Give the little green button on the top right corner with the label 'Code' a push, a dialog should show up. Press 'Download ZIP' in the dialog.
3.  Once the zip file is downloaded, open it with your archive manager and extract the files to a arbitrary destination (I would extract the files to the Desktop).
4.  Open the terminal (If you don't know how to open the terminal, feel free to use the built-in search function in your system to find it.). Type the following:

```bash
cd Desktop/brainfuck-mini-interpreter
```
  From there, you could type the following if you want to compile it by yourself,
```bash
g++ interpreter.cpp
```
```bash
./a.out
```
  Or you can just run the object file I provided by typing,
```bash
./a.out
```
5.  The output should be:

```bash
Hi. This is a Brainfuck "Interpreter" made without having any purpose or practicality.
```
  
  You can always change the output by modifying the brainfuck code in ```test.bf```.
