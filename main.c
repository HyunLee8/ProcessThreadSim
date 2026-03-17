#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pcb.h"

int main(void) {
    PCB *pcb = create_process(0, 2, 10, 3, 1);
    print_pcb(pcb);
    destroy_process(pcb);
    return 0;
}