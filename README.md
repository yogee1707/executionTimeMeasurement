# executionTimeMeasurement

### Straight Line Fitting

This method gives the  result with the less number of repetition when compared to the previous methods namely differential method and averaging method.

As well this is more robust as this involves the finding best fit straight line whose slope defines the execution time.

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

![alt text](img/lineFittingN5.png "N = 5")

* Equation: y = 104x + 0
* Slope: 104
