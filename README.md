# Iodine-131-Decay-Calculator-Prototype-1

A CLI simulation (or rather a _calculator_) to determine the final mass of the substance iodine-131 after a period of elapsed time.

## Keynote to know
- Iodine-131 has a half-life of 8 days.

## How does it work?
It takes inputs of the initial mass in _grams_ and the duration of elapsed time in _days_, then calculates them using the formula:

$$N(t) = N_0 \left(\frac{1}{2}\right)^{\frac{t}{t_{1/2}}}$$

> - $N(t)$ is the final mass
> - $N_0$ is the initial mass
> - $t$ is the elapsed time
> - $t_{1/2}$ is the half-life of the substance

Finally, it prints out the final amount of mass remaining.

## How to use it?
1. Run the `main` file by `./main` on your terminal
2. Enter the initial mass (e.g. `10` for 10 grams)
3. Enter the elapsed time (e.g. `16` for 16 days)
4. Read the output