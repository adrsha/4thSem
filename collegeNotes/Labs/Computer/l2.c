#include <iso646.h>
#include <stdio.h>

void enqueue(int* queue, int* pos, int maxsize, int val ) {

    if (*pos == maxsize-1)
        printf("Stack Overflow!");

    else {
        // shift all elements to right
        int i;

        for (i=*pos ; i >= 0 ; i--)
            queue[i+1] = queue[i] ;

        queue[0] = val;
        (*pos)++;
    }

}

void dequeue(int* queue, int* pos) {

    if (*pos == -1)
        printf("Stack Underflow!") ;

    else
        printf("Dequeued: %d", queue[(*pos)--]);

}

void peek(int* queue, int* pos) {

    if (*pos == -1)
        printf("Stack Empty!") ;

    else
        printf("The Peek: %d", queue[(*pos)]);

}

void showState(int* point, int* arr, int size) {
    printf("[");
    int i, corr=0, n;

    for (i = 0; i < size; i++)
        printf(" %d", arr[i]);

    printf("]\n");

    for (i = 0; i < (*point)+1; i++) {
        //count no of digits in arr[point]
        n = arr[i];
        corr=0;

        while (n!=0) {
            n=n/10;
            corr++;
        }

        int j;

        printf(" ");

        for (j=0; j<corr; j++)
            printf(" ");

    }

    printf("^");
}

int main() {
    char existence;
    int maxsize = 10, val ;
    int queue[20], noexit=1, inp, pos=-1;

    while (noexit) {
        printf("\nChoose a number.\n") ;
        printf("1) Enqueue a value. \n");
        printf("2) Dequeue a value. \n");
        printf("3) Peek Front Value. \n");
        printf("4) Display all Elements. \n");

        scanf("%d", &inp);

        switch (inp) {
        case 1:
            printf("Value to Enqueue: ");
            scanf("%d", &val);

            enqueue(queue, &pos, maxsize, val);
            break;

        case 2:
            dequeue(queue, &pos);
            break;

        case 3:
            peek(queue, &pos);
            break;

        case 4:
            showState(&pos, queue, maxsize);
            break;
        }

    printf("\nDo we exit?(y/n) ");
    getchar();
    scanf("%c", &existence);
    noexit = existence == 'y' ? 0 : 1;

    }

    return 0;
}
