all: charseq indetermined_sum

clean: indetermined_sum charseq
	rm charseq indetermined_sum

charseq: charseq.c
	gcc -o charseq charseq.c

undetermined_sum: indetermined_sum.c 
	gcc -o indetermined_sum indetermined_sum.c 
