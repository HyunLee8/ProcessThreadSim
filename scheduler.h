#ifndef SCHEDULER_SCHEDULER_H
#define SCHEDULER_SCHEDULER_H
#include "pcb.h"
#define MAX_PCBs 256

typedef struct {
    PCB *queue[MAX_PCBs];
    int head;
    int tail;
    int size;
} Scheduler;

Scheduler *createScheduler();

void enqueue(Scheduler *s, PCB *pcb);
PCB *dequeue(Scheduler *s);

int is_empty(Scheduler *s);
void print_queue(Scheduler *s);

#endif //SCHEDULER_SCHEDULER_H