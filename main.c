#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>

#define THREADS 70

long memoria_compartilhada = 0;

void *threadFunc(void *arg)
{   
	int a, b;
    for (long j = 0; j < 100000; j++) {	
		a = memoria_compartilhada;
		b = 1; 
        memoria_compartilhada = a + b;
    }
}

int main(int argc, char *argv[]) {
    pthread_t t[THREADS];
    int s;

    for (int i = 0; i < THREADS; ++i) {
        s = pthread_create(&t[i], NULL, threadFunc, NULL);
    }

    for (int i = 0; i < THREADS; ++i) {
        s = pthread_join(t[i], NULL);
    }

    printf("Valor da memória compartilhada: %ld\n", memoria_compartilhada);
}