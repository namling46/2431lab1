void main(){
int a, b, c, d, e;
char buffer[150];
a = creat("XYZ",0600);
b = open("Downloads/test.file",0);
if(b<0){
	printf("error with open");
	exit(0);
}
c = read(b,buffer,150);
if(c<0){
	printf("error with read");
	exit(0);
}
printf("%s\n", buffer);
d = close(b);
if(d<0) {
	printf("error with close");
	exit(0);
}
e = close(a);
if(e<0) {
	printf("error with close");
	exit(0);
}
printf("done");
exit(0);
}
