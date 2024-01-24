

#include <iostream>
#include <string>

using namespace std;

// Declaration of the structure candidate
struct candidate {
	string top;
	string inter;

	// Array within the structure
	char marks[6][200];
};

// Function to displays the content of
// the structure variables
void display(struct candidate a1)
{

	printf("Top Position : %d\n", a1.top);
	printf("Second Position : %c\n", a1.inter);
	printf("Departments:\n");
	int i;
	int len = sizeof(a1.marks) / sizeof(char);

	// Accessing the contents of the
	// array within the structure
	for (i = 0; i < len; i++) {
		printf("i+1 %d : %.2f\n", i + 1, a1.marks[i]);
	}
}

// Driver Code
int main()
{
	// Initialize a structure
	struct candidate A = { "PC - presi","MD - VPF", {'A','T'} };
	struct candidate B = { "PC - presi","RM - VPF", {'O & R','SD'}};
	struct candidate C = { "PC - presi","R - VPM", {'C','D','Dp'} };
	struct candidate D = { "PC - presi","NY - VPP", {'p','R & I'} };
	struct candidate E = { "PC - presi","SM - VPMF", {'F','A','T','PE'} };
	struct candidate F = { "PC - presi","AH - VPE", {'S','E','S','M','T'} };


	// Function to display structure
	display(A);
	return 0;
}
