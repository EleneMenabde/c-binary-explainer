#include <stdio.h>
#include <stdbool.h>
#include <strings.h>

const int TALL_LIMIT = 2;

bool is_tall(float height) {

    if (height >= TALL_LIMIT) {
        return true;
    } else {
        return false;
    }
}

bool and(bool left, bool right) {

    return left && right;
}


bool or(bool left, bool right) {

    return left || right;
}


bool xor(bool left, bool right) {

    return left != right;
}


bool nand(bool left, bool right) {

    return !(left && right);
}

int main() {

    bool elene = is_tall(2);
    bool mariam = is_tall(1.83);

    printf("elene %d\n", elene);
    printf("mariam %d\n", mariam);

    printf("\nare elene and mariam tall %d", and(elene, mariam));

    printf("\nOR %d", or(elene, mariam));

    printf("\nXOR %d", xor(elene, mariam));

    printf("\nNAND %d", nand(elene, mariam));

    return 0;
}