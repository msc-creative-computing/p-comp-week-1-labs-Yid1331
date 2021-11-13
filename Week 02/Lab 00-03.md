# Lab 00 - LEDs in Serial and Parallel

## QUESTION 01: How many LEDs can you hook up with a 220k resistor in serial before running out of voltage?

According to the series circuit formula,  


> U=U<sub>1</sub> + U<sub>2</sub> + U<sub>3</sub> ...U<sub>n</sub>

> R=R<sub>1</sub> + R<sub>2</sub2> + R<sub>3</sub> ...R<sub>n</sub>

> I=U/R


Each LED in the series circuit will take up a portion of the voltage and consume a part of the current. 

The more LEDs accumulated, the LED closer to the negative pole in the circuit will no longer light up.

That means that the voltage is exhausted.

We can imagine that the river (current) is blocked by stones (resistor), making the river unable to flow.

## QUESTION 02: How many LEDs can you hook up with a 220k resistor in parallel before running out of voltage?

According to the parallel circuit formula，

> R=1/R<sub>1</sub>+1/R<sub>2</sub>+1/R<sub>3</sub> ...1/R<sub>n</sub>

The more parallel resistors in the circuit, the smaller the total resistance, and the more current that flows through each LED.

The circuit will not be exhausted. On the contrary, the brightness of each bulb will be brighter.


