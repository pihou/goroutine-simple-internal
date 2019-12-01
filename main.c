#include <stdio.h>

extern void start_new_go_routine();

void main_go_routine(){
    start_new_go_routine();
}

void new_go_routine_inner(){
    printf("you can using gdb to check stack trace here\n");
}

void new_go_routine(){
    printf("start run in new_go_routine\n");
    new_go_routine_inner();
}

int main() {
    main_go_routine();
    return 0;
}

