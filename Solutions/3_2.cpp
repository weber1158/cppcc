#include <cstdio>

// Exercise 3-2
char read_from(const char* c, std::size_t i) {
/*Function Documentation:
 * read_from(c, i)
 *  Reads the character at position i in a pointer that points to a char
 *
 * Inputs
 *  c -> Pointer to a char
 *  i -> Index position
*/
    return c[i];
}

void write_to(char* c, std::size_t bounds, std::size_t i, char c2) {
/*Function Documentation
 * write_to(c, bounds, i, c2)
 *  Replaces a character at position i in a pointer that points to a char
 * 
 * Input
 *  c -> Pointer to a char
 *  bounds -> size of the buffer [e.g., sizeof(c)]
 *  i -> Index position
 *  c2 -> The replacement character
*/
    if (i < bounds) {
        c[i] = c2;
    }
}

int main() {
    char lower[] = "abc?e";
    char upper[] = "ABC?E";

    char* lower_ptr = lower;
    char* upper_ptr = upper;

    printf("lower[3]: %c\n", read_from(lower_ptr, 3));
    printf("upper[3]: %c\n", read_from(upper_ptr, 3));

    write_to(lower_ptr, sizeof(lower), 3, 'd');
    write_to(upper_ptr, sizeof(upper), 3, 'D');

    printf("lower is now: %s\n", lower);
    printf("upper is now: %s\n", upper);

    return 0;
}