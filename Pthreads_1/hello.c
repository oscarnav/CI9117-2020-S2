#include <pthread.h>
#include <stdio.h>

void* helloWorld(void* args) {

    printf("Hello world from second thread\n");
    return NULL;
}


int main(void) {

    pthread_t thread;

    pthread_create(&thread, NULL, helloWorld, NULL);
    printf("Hello world from main thread\n");
    pthread_join(thread, NULL);

    return 0;
}