#include <cstdio>

// Exercise 3-3
struct Bird {
    Bird* next{};
    Bird* previous{};

    void insert_after(Bird* new_bird) {
        new_bird->previous = this;
        new_bird->next = next;
        if (next != nullptr) next->previous = new_bird;
        next = new_bird;
    }

    void insert_before(Bird* new_bird) {
        new_bird->next = this;
        new_bird->previous = previous;
        if (previous != nullptr) previous->next = new_bird;
        previous = new_bird;
    }

    char prefix[2];
    short design_number;
};

int main() {
    
    // Lockhead aircraft
    Bird bird1, bird2, bird3;
    bird1.prefix[0] = 'X';
    bird1.prefix[1] = 'P';
    bird1.design_number = 49;
    bird1.insert_after(&bird2);

    bird2.prefix[0] = 'S';
    bird2.prefix[1] = 'R';
    bird2.design_number = 71;
    bird2.insert_after(&bird3);

    bird3.prefix[0] = 'Y';
    bird3.prefix[1] = 'F';
    bird3.design_number = 22;

    printf("Forward loop:\n");
    for (Bird *cursor = &bird1; cursor != nullptr; cursor = cursor->next) {
        printf("Lockheed %c%c-%d\n",
               cursor->prefix[0], cursor->prefix[1], cursor->design_number);
    }

    printf("\nBackward loop:\n");
    for (Bird *cursor = &bird3; cursor != nullptr; cursor = cursor->previous) {
        printf("Lockheed %c%c-%d\n",
               cursor->prefix[0], cursor->prefix[1], cursor->design_number);
    }
    return 0;
}