# Lab 00 - LEDs in Serial and Parallel

### How many LEDs can you hook up with a 220k resistor in serial before running out of voltage?

According to the series circuit formula，

**
U=U_1+U_2+U_3 ...U_n;
**

$$
R=R_+R_2+R_3 ...R_n;
$$

$$
I=U/R
$$

Each LED in the series circuit will take up a portion of the voltage and consume a part of the current. 

The more LEDs accumulated, the LED closer to the negative pole in the circuit will no longer light up.

That means that the voltage is exhausted.

We can imagine that the river (current) is blocked by stones (resistor), making the river unable to flow.



### How many LEDs can you hook up with a 220k resistor in parallel before running out of voltage?

According to the parallel circuit formula，

$$
R=1/R_1+1/R_2+1/R_3 ...1/R_n;
$$
The more parallel resistors in the circuit, the smaller the total resistance, and the more current that flows through each LED.

The circuit will not be exhausted. On the contrary, the brightness of each bulb will be brighter.

