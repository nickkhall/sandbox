#include <stdio.h>
#include <stdlib.h>

char** allocate_strs(const int* rows, const int* cols) { 
  char** t_a = NULL;                                                                                                                                       
  t_a = (char**)malloc(sizeof(char*) * *rows);                                                                                                             
  if (t_a == NULL) {                                                                                                                                       
	exit(0);                                                                                                                                               
  }                                
 for (int i = 0; i < *rows; i++) {                                                                                                                        
	*(t_a + i) =  (char*)malloc(sizeof(char*) * *cols);                                                                                                    
 }
 return t_a;                                                                                                                                              
};

void write_to_strs(char** s, const int* rows, const int* cols) {
	for (int r = 0; r < *rows; r++) {
		fgets(*(s + r), *cols, stdin);
	}
};

void print_strs(char** s, const int* rows) {
	for (int r = 0; r < *rows; r++) {
		printf("%s", *(s + r));
	}
};

int main(void) {
	int num_of_fields = 5;
	int max_str_len = 50;
	char** fields = allocate_strs(&num_of_fields, &max_str_len);
	
	write_to_strs(fields, &num_of_fields, &max_str_len);
	
	print_strs(fields, &num_of_fields);
	
	free(fields);
	
	return 0;
}

