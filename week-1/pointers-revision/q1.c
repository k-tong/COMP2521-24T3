int main(void) {
	int a = 5;
	int b = 123;

	// &: address of
	int *pa = &a; // points to location where a is stored
	int *pb = &b;

	// *pa = ... means we update value at a pointer's address
	*pa = 6;
	*pb = 234;

	// ... = *pa, we set the value of a variable to the value at the
	// address pa
	int c = *pa;
	*pa = *pb;
	*pb = c;
    
    // what is *pb currently equal to?? 
	// equal to 6
	pa = pb;
	*pa = 345;
    // what is *pb currently equal to??
	// *pb = 345, which is different from before
	// since pa and pb point to same memory address
	// modifying *pa will change the value accessed
	// by *pb
}