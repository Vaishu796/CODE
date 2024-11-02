#include <stdio.h>
#include <math.h>

double sigmoid(double x) {
    return 1.0 / (1.0 + exp(-x));
}

int main() {
    double x;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    double result = sigmoid(x);
    printf("Sigmoid(%d) = %d\n", x, result);
    
    return 0;
        
}
