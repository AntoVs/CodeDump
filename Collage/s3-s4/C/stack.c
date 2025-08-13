#include <stdio.h>
#define MAX 128

typedef struct {int items[MAX]; int top;} Stack; 

void push(Stack *s, int val) { s->top <= MAX -1 ? s->items[++s->top] = val : printf("overflow \n"); }
int  peek(Stack *s) { return s->top >= 0 ? s->items[s->top] : printf("empty \n");       }
void show(Stack *s) { for (int i = s->top; i >= 0; i--) printf("%d \n", s->items[i]);   }
int  poop(Stack *s) { return s->top >= 0 ? s->items[s->top--] : printf("underflow \n"); }
void full(Stack *s) { s->top == MAX -1 ? printf("stack is full \n") : printf("stack is not full \n"); } 
void empt(Stack *s) { s->top == -1 ? printf("stack is empty \n") : printf("stack is not empty \n"); }

int main(void) {

  Stack s = {.top = -1 }; int ch, val;
  while(1) {
    printf("1.push 2.pop 3.peek 4.isfull 5.isempty 6.show 7.exit "); scanf("%d", &ch);
    if(ch == 1) { printf("Val: "); scanf("%d", &val); push(&s, val); }
    else if (ch == 2) { val = poop(&s); printf("%d\n", val); }
    else if (ch == 3) { val = peek(&s); printf("%d\n", val); }
    else if (ch == 4) { full(&s); }
    else if (ch == 5) { empt(&s); }
    else if (ch == 6) { show(&s); }
    else if (ch == 7) break;
    else {printf("invalid \n");}
  }
}
