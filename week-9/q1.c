// Consider this potential hash function:

int hash(char *key, int N) {
	int h = 0;
	char *c;
	int i = 0;
	// the start of a string is equivalent to a pointer to the first character
	for (c = key; *c != '\0'; c++, i++) {
		h = h + (i * *c);
	}
	// looping through every single character in a string
	// and adding the ascii value to h

	// hash 
	return h % N;
}


// How does this function convert strings to ints?

// a good hash function is a function which can hash different keys into
// different indexes


// What are the deficiencies with this function and how can it be improved?
// anagrams (say cat and tac) will produce the same index
// to make it better, we want to make it harder for different keys to hash
// to same index

// one way to make it better is to multiply characters by their positions in
// string
