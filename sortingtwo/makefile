all: main_number main_alpha
main_number: main_number.c quicksort.o quicksort2.o mergesort.o mergesort2.o heapsort.o radixsort.o
	gcc main_number.c quicksort.o quicksort2.o mergesort.o mergesort2.o heapsort.o radixsort.o -o main_number
main_alpha: main_alpha.c quicksorte.o mergesorte.o heapsorte.o radixsorte.o
	gcc main_alpha.c quicksorte.o mergesorte.o heapsort.o radixsorte.o -o main_alpha
quicksort.o: quicksort.h quicksort.c
	gcc -c quicksort.c -o quicksort.o
quicksort2.o: quicksort2.h quicksort2.c
	gcc -c quicksort2.c -o quicksort2.o
mergesort.o: mergesort.h mergesort.c
	gcc -c mergesort.c -o mergesort.o
mergesort2.o: mergesort2.h mergesort2.c
	gcc -c mergesort2.c -o mergesort2.o
heapsort.o: heapsort.h heapsort.c
	gcc -c heapsort.c -o heapsort.o
radixsort.o: radixsort.h radixsort.c
	gcc -c radixsort.c -o radixsort.o
quicksorte.o: quicksorte.h quicksorte.c
	gcc -c quicksorte.c -o quicksorte.o
mergesorte.o: mergesorte.h mergesorte.c
	gcc -c mergesorte.c -o mergesorte.o
heapsorte.o: heapsorte.h heapsorte.c
	gcc -c heapsorte.c -o heapsorte.o
radixsorte.o: radixsorte.h radixsorte.c
	gcc -c radixsorte.c -o radixsorte.o
clean:
	rm quicksort.o quicksort2.o mergesort.o mergesort2.o heapsort.o radixsort.o main_number quicksorte.o mergesorte.o heapsorte.o radixsorte.o  main_alpha

