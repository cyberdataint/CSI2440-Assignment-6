#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef union {
    float f;
    uint32_t u;
} FloatConverter;

void decimalToBinary(float decimal);
void binaryToDecimal(const char *binary);

// Function to convert decimal to binary
void decimalToBinary(float decimal) {
    FloatConverter converter;
    converter.f = decimal;
    
    // Print binary representation
    printf("Binary representation: ");
    for (int i = 31; i >= 0; i--) {
        uint32_t mask = 1u << i;
        putchar((converter.u & mask) ? '1' : '0');
        
        // Insert a space for readability
        if (i % 4 == 0)
            putchar(' ');
    }
    printf("\n");
}

// Function to convert binary to decimal
void binaryToDecimal(const char *binary) {
    uint32_t binaryInt = strtol(binary, NULL, 2);
    FloatConverter converter;
    converter.u = binaryInt;
    printf("Decimal representation: %f\n", converter.f);
}

int main() {
    char choice;
    printf("Choose conversion:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    scanf(" %c", &choice);

    if (choice == '1') {
        float decimal;
        printf("Enter a decimal number: ");
        scanf("%f", &decimal);
        decimalToBinary(decimal);
    } else if (choice == '2') {
        char binary[33];
        printf("Enter a binary number (32 bits): ");
        scanf("%s", binary);
        binaryToDecimal(binary);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
