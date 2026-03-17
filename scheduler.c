#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scheduler.h"
#include "pcb.h"

Scheduler *createScheduler() {
    Scheduler *s = malloc(sizeof(Scheduler));

    s->head = 0;
    s->tail = 0;
    s->size = 0;

    return s;
}

void enqueue(Scheduler *s, PCB *pcb) {
    s->queue[s->tail] = pcb;
    s->tail++;
    s->size++;
}

PCB *dequeue(Scheduler *s) {
    if (s->size == 0) {
        return NULL;
    } else {
        PCB *pcb = s->queue[s->head];
        s->head++;
        return pcb;
    }
}

int is_empty(Scheduler *s) {
    if (s->size == 0) {
        return 1;
    } else {
        return 0;
    }
}


