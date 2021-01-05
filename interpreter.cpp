#include <iostream>
#include <fstream>

char input[] = "foostring", mall[512] = {}, *i_ptr = input, *p_ptr = mall;
std::ifstream myfile("test.bf");
std::string temp;

void Interpreter(char *curr){
    for (; *curr && *curr != ']'; curr++){
        (*((p_ptr += *curr == '>') -= *curr == '<') -= *curr == '-') += *curr == '+';
        *curr == '.' && std::cout << *p_ptr;   
        switch (*curr){
        case ',':   *p_ptr = *i_ptr++; break;
        case '[':   for (curr += 1; *p_ptr;){Interpreter(curr);}
                    for (int d = 0; *curr != ']' || d--; curr++){d += (*curr == '[');} break;
        }
    }
}

int main(){
    myfile >> temp;
    char prog[temp.length()];
    strcpy(prog, temp.c_str());
    Interpreter(prog);
}