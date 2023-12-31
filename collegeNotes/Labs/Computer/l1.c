#include <stdio.h>

void push(int* arr, int val, int size, int* point) {
    if (*point == size - 1)
        printf("Stack overflow!");

    else
        arr[++(*point)] = val;
}
void pop(int* arr, int size, int* point) {
    if (*point == -1)
        printf("Stack underflow!");

    else {
        printf("%d", arr[(*point)]);
        arr[(*point)--] = 0;
    }
}

void peek(int* arr, int size, int* point) {
    if (*point == -1)
        printf("Stack underflow!");

    else
        printf("%d", arr[*point]);
}

void showState(int* point, int* arr, int size) {
    printf("[");
    int i, corr=0, n;

    for (i = 0; i < size; i++)
        printf(" %d", arr[i]);

    printf("]\n");
    /* printf(" "); */

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
        /* printf("corr: %d\n", corr); */

        for (j=0; j<corr; j++) {
            /* printf("%d\n", j); */

            printf(" ");
        }

    }

    printf("^");
}

int main() {
    int point = -1;
    int inp, noexit = 1, val;
    char exitence;
    int arr[20];

    while (noexit) {

        printf("Choose a number.\n");
        printf("1) Push value\n");
        printf("2) Pop value\n");
        printf("3) Peek value\n");
        printf("4) Display Stack\n");
        printf("> ");
        scanf("%d", &inp);

        switch (inp) {
        case 1:
            scanf("%d", &val);
            push(arr, val, 10, &point);
            break;

        case 2:
            pop(arr, 10, &point);
            break;

        case 3:
            peek(arr, 10, &point);
            break;

        case 4:
            showState(&point, arr, 10);
            break;
        }

        printf("\nDo we exit?(y/n) ");
        getchar();
        scanf("%c", &exitence);
        noexit = exitence == 'y' ? 0 : 1;
    }

    return 0;
}
