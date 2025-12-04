#include <stdio.h>

struct Goods {
    char productName[50];
    int id;
    float cost;
};

int main() {
    struct Goods data;
    
    if (scanf("%d %f %s", &data.id, &data.cost, data.productName) != 3) {
        return 1;
    }

    printf("ID: %d, Price: %.2f, Name: %s", data.id, data.cost, data.productName);
    
    return 0;
}
