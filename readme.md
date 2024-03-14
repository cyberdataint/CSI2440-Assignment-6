# FloatConverter

## Description
FloatConverter is a simple C program that allows users to convert decimal floating-point numbers to their binary representations and vice versa.

## How to Use 

1. **Download the repository ZIP file directly to your Downloads folder:**

    To download the repository ZIP file, click [here](https://github.com/cyberdataint/CSI2440-Assignment-6/archive/main.zip).

2. **Unzip the file** 

    ```bash
    powershell -command "Expand-Archive -Force 'C:\Users\*\Downloads\CSI2440-Assignment-6-main.zip' 'C:\Users\*\Downloads'"
    ```

3. **Load into the working directory**

   ```bash
   cd 'C:\Users\*\Downloads\CSI2440-Assignment-6-main'

4. **Compile the program using the following command**
```
gcc FloatConverter.c -o FloatConverter
```
5. **Run the compiled program by executing the following command**
```
FloatConverter.exe
```
6. **Follow the on-screen prompts to pick between 1 or 2 to choose decimal to binary conversion or binary to decimal conversion.**

## Examples
Here are a few examples to test out the program:

### Decimal to Binary Conversion
1. Choose option 1 for decimal to binary conversion.
2. Enter a decimal number, such as 
```
10.5
```
3. The program will display the binary representation of the input decimal number.
```
"Binary representation: 0100 0001 0010 1000 0000 0000 0000 0000"
```
or

4. Enter a decimal number, such as

```
0.1
```

5. The program will display the binary representation of the input decimal number.

```
"Binary representation: 0011 1111 1101 1100 0000 0000 0000 0000"
```

### Binary to Decimal Conversion
1. Choose option 2 for binary to decimal conversion.
2. Enter a binary number (32 bits) representing a floating-point value, such as (Without spaces)

```
01000001001010000000000000000000
```
3. The program will display the decimal representation of the input binary number.
```
"Decimal representation: 10.500000"
```
or

4. Enter a binary number (32 bits) representing a floating-point value, such as (Without spaces)

```
01000000011101000000000000000000
```
5. The program will display the decimal representation of the input binary number.
```
"Decimal representation: 7.25"
```