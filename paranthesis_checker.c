#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_SIZE 100

// Improved stack implementation
struct Stack {
    int top;
    char items[MAX_SIZE];
};

void initialize(struct Stack *s) {
    s->top = -1;
}

void push(struct Stack *s, char c) {
    if (s->top >= MAX_SIZE - 1) {
        printf("Stack is full\n");
    } else {
        s->items[++(s->top)] = c;
    }
}

char pop(struct Stack *s) {
    if (s->top == -1) {
        printf("Stack is empty\n");
        return '\0';
    } else {
        return s->items[(s->top)--];
    }
}

bool isMatchingPair(char opening, char closing) {
    if (opening == '(' && closing == ')')
        return true;
    else if (opening == '{' && closing == '}')
        return true;
    else if (opening == '[' && closing == ']')
        return true;
    else
        return false;
}

bool checkBalancedParentheses(char exp[]) {
    struct Stack s;
    initialize(&s);
    int i;
    for (i = 0; i < strlen(exp); i++) {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
            push(&s, exp[i]);
        } else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            if (s.top == -1 || !isMatchingPair(pop(&s), exp[i])) {
                return false;
            }
        }
    }
    return s.top == -1;
}

int main() {
    char exp[MAX_SIZE];
    printf("Enter the expression: ");
    fgets(exp, MAX_SIZE, stdin);

    if (checkBalancedParentheses(exp)) {
        printf("Parentheses are matched\n");
    } else {
        printf("Parentheses are not matched\n");
    }
    return 0;
}
