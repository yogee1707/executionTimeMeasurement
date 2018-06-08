# executionTimeMeasurement

All of these experiments are performed in accordance with the paper titled *"Accurate Measurement of Small Execution Times – Getting Around Measurement Errors"*, can be downloaded from [here](https://uwaterloo.ca/embedded-software-group/publications/accurate-measurement-small-execution-times-getting-around).

>This repository is mercurial in nature, and constantly getting updated with new results.

**Test Hardware**

For deriving following result I've used Arduino Nano, running at 16MHz crstal. The board is powered by USB from a computer.

![Arduino Nano](img/nano.jpg "Arduino Nano")

* Controller: Atmega328
* Operating Voltage : 5V
* Flash Memory : 32 KB of which 2 KB used by bootloader

**Test Function**

The function used to do aforementioned test is the ```delayMicroseconds();``` in Arduino environment, which halts the execution for microsecond(s) value passed.

>*Note: The testing hardware and function under the test is same, unless mentioned as the caption to the graph or method.*

## Simple Average method

This method is the conventional mitigation technique for minimizing the measurement errors. The method involves repeated number if execution or the fragment under test, say we have iterrated the measurement N times the the result is equal to total time calculated/N.

The above mentioned statement can be vividly demonstrated in the following pseudocode.

**Psuedocode**

```
repeat N time:
  a = get_time();
  delay(100us);
  b = get_time();
  totalElapsedTime += b - a;
end repeat
```

Following are the result of the experiment,

| Samples Taken | Avg. Execution Time   | Standard Deviation  |
| -------------:|:---------------------:| -------------------:|
| 100           | 104.36         | 1.89              |
| 200           | 104.18              |   1.35               |
| 400           | 104.09              |    0.96              |
| 800           | 104.045                | 0.68                |
| 1000          | 104.036                | 0.61                |

## Straight Line Fitting

This method gives the  result with the less number of repetition when compared to the previous methods namely differential method and averaging method.

As well this is more robust as this involves the finding best fit straight line whose slope defines the execution time.

**Pseudo Code**

```
repeat N time:
  a = get_time();
  delay(100us);
  b = get_time();
  totalElapsedTime += b - a;
end repeat
```
The graph of ```totalElapsedTime``` is plotted against the number of iteration.

Following are the result of the measurement taken.

**Sample Size = N = 5**

![alt text](img/lineFittingN5.png "N = 5")

* Equation: y = 104x + 0
* Slope: 104

**Sample Size = N = 15**

![char N=15](img/lineFittingN15.png "N=15")

* Equation: y = 107x + 3.62
* Slope: 107

**Sample Size = N = 15**

![char N=20](img/lineFittingN20.png "N=20")

* Equation: y = 105x + 8.65
* Slope: 105

**Sample Size = N = 25**

![char N=25](img/lineFittingN25.png "N=25")

* Equation: y = 104x + 3.4
* Slope: 104
