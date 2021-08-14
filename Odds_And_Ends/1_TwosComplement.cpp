/* 1. Twos Complement

How do computers store integers?

Imagine a 3 bit system:
For unsigned variables, the maximum value a computer can store is 7 (111)
i.e. 2^n - 1

If we want to store negative numbers too, then we need to sacrifice one bit to store the sign.
Therefore, we have only 2 bits left, i.e the maximum value will be 3 (011).
	000		0
	001		1
	010		2
	011		3
	100		-0
	101		-1
	110		-2
	111		-3

This seems like the most logical and simplest way to store variables. However there are two main problems.
1. Arithmetics don't work
2. Two ways to store 0, ie wasteful

One's Complement
	000		0
	001		1
	010		2
	011		3
	100		-3
	101		-2
	110		-1
	111		-0

001 (1) +
110 (-1) = 
111 (-0 = 0) => right answer

 011 (3) +
 101 (-2) =
1000		There is an overflow bit. The overflow bit is added to the LSB.
=> 001 (1) => right answer

Arithmetic works!

Problems:
1. There are still two ways to store 0, ie wasteful
2. The overflow bit can be quite troublesome.

Two's complement
	000		0
	001		1
	010		2
	011		3
	100		-4
	101		-3
	110		-2
	111		-1

001 (1) +
110 (-2)
111 (-1) => right answer

 001 (1) +
 111 (-1) = 
1000		There is an overflow bit. Discard it.
=> 000 (0) right answer!

Arithmetic works!
One more integer is stored.
Overflow bit is simply discarded.

Hence, two's complement
*/