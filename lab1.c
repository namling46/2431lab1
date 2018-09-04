void main(){
int a, b, c, closea, closeb, readCount, writeCount, writeCountABC, tempCount1, tempCount2;
char buffer[150];
a = creat("XYZ",0600);
b = open("Downloads/test.file",0);
if(b<0){
	printf("error with open");
	exit(0);
}
readCount = 150;
while(readCount<= 150) {
	readCount = read(b,buffer,150);
	if(readCount<0){
		printf("error with read");
		exit(0);
	}
	tempCount1 += readCount;
	writeCount = write(a, buffer, readCount);
	if(writeCount < 0) {
		printf("error with write");
		exit(0);
	}
	writeCountABC = write(a, "ABC", 3);
	if(writeCountABC < 0) {
		printf("error with write");
		exit(0);
	}
	tempCount2 += readCount + 3;
}
printf("%s\n", buffer);
closeb = close(b);
if(closeb<0) {
	printf("error with close");
	exit(0);
}
closea= close(a);
if(closea <0) {
	printf("error with close");
	exit(0);
}
printf("done");
exit(0);
}
