#include <stdio.h>

void Enqueue(int val, int * front, int * rear, int * arr, int size){
  if ( (*front) == ((*rear) + 1) % size){
    printf("Stack Overflow!"); // If this is full
  }
  else {
    arr[(*rear)++] = val;
  }
}

void showState(int* arr, int size) {
    printf("[");
    int i, corr=0, n;

    for (i = 0; i < size; i++)
        printf(" %d", arr[i]);

}


void Dequeue(int val, int * front, int * rear, int * arr, int size){

  if ( *front == *rear ) {
    printf("Stack Underflow!"); // If it's empty
  } else{
    printf("%d", arr[(*front)--]);
  }

}

int main(){
  int arr[20];
  int front = 0;
  int back = 0;

  int inp, val;
  printf("1)  Enqueue \n");
  printf("2)  Dequeue \n");
  printf("3)  Display Front Element \n");
  printf("4)  Display All \n");
  printf("5)  Exit \n");
  printf("Choose a number: ");
  scanf("%d", &inp);

  while(noexit) {

  switch(inp){

    case 1:
      printf("Enter a number to enqueue");
      scanf("%d", &val);
      Enqueue( val, &front, &back, arr, 20);
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      showState(arr, 20);
      break;
  }

  }
  return 0;
}
