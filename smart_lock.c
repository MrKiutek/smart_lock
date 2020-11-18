#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "lib/pthread.h"
#include "features/face_reco.h"

int main(){
    printf("Hello World!\n");
    static pid_t pid = 0;

    if ((pid = fork()) == 0) {
        system("./read_rfid_uid.py");
        printf("%d", pid);
    }
    
    start_reco();
}
