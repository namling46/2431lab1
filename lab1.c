#include <sys/types.h>

#include <unistd.h>
void main(){
int XYZID, testfileID, closeTestfile, closeXYZ, readCount, writeCount, writeCountABC, testfileCount, XYZCount, WWWid, XXXid, closeWWW, closeXXX, temp;
char buffer[150];
char buffer2[120];
XYZID = creat("XYZ",0600);
testfileID = open("Downloads/test.file",0);
if(testfileID<0){
	printf("error with open");
	exit(0);
}
readCount = 150;
while(readCount == 150) {
	readCount = read(testfileID,buffer,150);
	if(readCount<0){
		printf("error with read");
		exit(0);
	}
	testfileCount += readCount;
	writeCount = write(XYZID, buffer, readCount);
	if(writeCount < 0) {
		printf("error with write");
		exit(0);
	}
	writeCountABC = write(XYZID, "ABC", 3);
	if(writeCountABC < 0) {
		printf("error with write");
		exit(0);
	}
	XYZCount += readCount + 3;
	
}
printf("Number of characters read from test.file: %d\n", testfileCount);
printf("Number of characters written into XYZ: %d\n", XYZCount);

XXXid = creat("XXX", 0600);
WWWid = creat("WWW", 0600);
temp = lseek(XYZID, 0, SEEK_SET);
if(temp = -1) {
	printf("error moving pointer");
	exit(0);
}
readCount = read(XYZID,buffer2,120);
	if(readCount<0){
		printf("error with read");
		exit(0);
	}
writeCount = write(XXXid, buffer2, readCount);
	if(writeCount < 0) {
		printf("error with write");
		exit(0);
	}

closeWWW = close(WWWid);
if(closeWWW<0) {
	printf("error with close");
	exit(0);
}
closeXXX = close(XXXid);
if(closeXXX<0) {
	printf("error with close");
	exit(0);
}
closeXYZ = close(XYZID);
if(closeXYZ<0) {
	printf("error with close");
	exit(0);
}
closeTestfile = close(testfileID);
if(closeTestfile <0) {
	printf("error with close");
	exit(0);
}
printf("done");
exit(0);
}
