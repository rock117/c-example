#include <stdlib.h>
#include <pthread.h>
#include <stdio.h>



void *thr_fn(void *arg){
	int i;
	for(i=0; i<1111; i++){
        printf("sub thread %d\n", i);
        sleep(1);
	}
	return ((void *)0);
}

int main(void){
    pthread_t  threadId;
	int err = pthread_create(&threadId, NULL, thr_fn, NULL);

	sleep(3);
	int i;
	for(i=0; i<1111; i++){
        printf("main thread %d\n", i);
        sleep(1)
	}
	return 0;
}
