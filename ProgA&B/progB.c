#include<stdio.h>
#include<stdlib.h>

int main() {

    char * filename = "useless.txt";
    char myArray[256];
    int justRoute[33] = {0};
    FILE *file;

	file = fopen(filename, "r");
    if(file == NULL)
    {
        perror("Error opening file");
      	return(-1);
   }

    while((fgets(myArray, 256, file))!=NULL) {
        justRoute[(int) myArray[0] % 33] += 1;
    }
    
	int i;
    for(i = (int)'a'; i <= (int)'z'; i++){
        if(justRoute[(char) i % 33] > 0) {
            printf("count = %d, char = %c\n", justRoute[(char) i % 33], (char)i);
        }
    }
    fclose(file);
}