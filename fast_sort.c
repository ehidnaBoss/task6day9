#include <stdio.h>
#define NUM_AR 10
int input(int *array);
void sort(int *array);
void insert_sort(int *array);
void output(int *array);

int main() {
    int data[NUM_AR];
    if (input(data)) {
        printf("n/a");
        return 0;
    }
    sort(data);
    output(data);
    printf("\n");
    insert_sort(data);
    output(data);
    return 0;
}

int input(int *array) {
    for (int i = 0; i < NUM_AR; i++) {
        if (scanf("%d", array++) != 1) {
            array[0] = '\n';
            return 1;
        }
    }
    if (getchar() != '\n') {
        array[0] = '\n';
        return 1;
    }
    return 0;
}

void sort(int *array) {
    for (int i = NUM_AR - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void insert_sort(int *array){
    for (int i = NUM_AR - 1; i > 0; i--){
        int k = i;
        while ((k > 0)   && (array[i-1] > array[k]))
        {
            int temp = array[k-1];
            array[k-1] = array[k];
            array[k] = temp;
            k -= 1;
        }
    }
}

void output(int *array) {
    for (int i = 0; i < NUM_AR; i++) {
        printf("%d ", array[i]);
    }
}
