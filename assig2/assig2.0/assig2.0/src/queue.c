#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int empty(struct queue_t * q) {
	return (q->size == 0);
}

void enqueue(struct queue_t * q, struct pcb_t * proc) {
	/* TODO: put a new process to queue [q] */
	if(q->size == MAX_QUEUE_SIZE)
		return;

	q->proc[q->size] = proc;
	q->size++;
}

struct pcb_t * dequeue(struct queue_t * q) {
	/* TODO: return a pcb whose prioprity is the highest
	 * in the queue [q] and remember to remove it from q
	 * */
	if(empty(q))
		return NULL;

	int i;
	int highest_prio_index = 0;

	for(i = 1; i < q->size; i++){
		if(q->proc[highest_prio_index]->priority > q->proc[i]->priority)
			highest_prio_index = i;
	}
	struct pcb_t * highest_prio_node = q->proc[highest_prio_index];

	for(i = highest_prio_index; i < q->size - 1; i++)
		q->proc[i] = q->proc[i + 1];
	q->proc[q->size - 1] = NULL;
	q->size--;

	return highest_prio_node;
}