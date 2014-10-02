all: 
	gcc greptail.c -o greptail
	./greptail ORA test.log
	