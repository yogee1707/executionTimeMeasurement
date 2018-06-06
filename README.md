# executionTimeMeasurement

### Straight Line Fitting

This method gives the  result with the less number of repetition when compared to the previous methods namely differential method and averaging method.

As well this is more robust as this involves the finding best fit straight line whose slope defines the execution time.

**Testing Hardware**

For deriving following result I've used Arduino Nano, running at 16MHz crstal. The board is powered by USB from a computer.

![Arduino Nano](img/nano.jpg "Arduino Nano")

* Controller: Atmega328
* Operating Voltage : 5V
* Flash Memory : 32 KB of which 2 KB used by bootloader

**Testing Function**

The function used to do aforementioned test is the ```delayMicroseconds();``` in Arduino environment, which halts the execution for microsecond(s) value passed.

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

![alt text](img/lineFittingN5.png "Logo Title Text 1")

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
