# boolean
A  C++ *Boolean Expressions* parser and evaluator, with variable count upto 15 (unless specified seperately).<br>
*Currently in Beta*<br>

## Functions/Commands supported (*as of now*) :
|Command/Function|Example Input| Example Output|
|----------------|-----|------|
|**Truth Table Generator**| `print_table` <br> `(~(a+b))` |`a   b   Q `<br>`0   0   1 ` <br>`0   1   0  `<br>`1   0   0  `<br>`1   1   0  `|
|**Minterms**| `min_term` <br> `(~(a+b))`| `Min Terms :` <br> `0 0`|

## Operators supported (*as of now*)
|Binary|Unary|
|------|-----|
|**`& `**,**` .`** &nbsp; equivalent to Boolean AND <br> **`\| `**,**` +`**  &nbsp; equivalent to Boolean OR <br> **`^`** &nbsp; equivalent to Boolean XOR| **`~ `**,**` !`** &nbsp; equivalent to Boolean NOT
## How to use?
From Source : <br>
``` 
git clone https://github.com/SpoonBuoy/boolean.git 
cd boolean
make 
./boolean
[Command Input]
```
### TO DO:
___
* K-Map Generator
* Boolean Expression Simplifier
