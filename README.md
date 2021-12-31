# boolean
A  C++ *Boolean Expressions* parser and evaluator, with variable count upto 15 (unless specified seperately).<br>
*Currently in Beta*<br>

## Functions/Commands supported (*as of now*) :
|Command/Function|Example Input| Example Output|
|----------------|-----|------|
|**Truth Table Generator**| `>>> truth_table [Input Expression]` <br> `>>> truth_table ~(a+b)`|` a b Q` <br> `0 0 1` <br> `0 1 0` <br> `1 0 0` <br> `1 1 0` |
|**Minterms**| `>>> min_terms [Input Expression]` <br> `>>> min_terms ~(a+b)`| `Minterms:` <br> `0`|

## Operators supported (*as of now*)
|Binary|Unary|
|------|-----|
|**`& `**,**` .`** &nbsp; equivalent to Boolean AND <br> **`\| `**,**` +`**  &nbsp; equivalent to Boolean OR <br> **`^`** &nbsp; equivalent to Boolean XOR| **`~ `**,**` !`** &nbsp; equivalent to Boolean NOT
## How to use?
From Source : <br>
``` 
git clone https://github.com/arslnn/boolean.git 
cd boolean
./solve
>>> [Command Input]
```
### TO DO:
___
* K-Map Generator
* Boolean Expression Simplifier


