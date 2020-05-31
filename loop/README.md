So the idea is to see how many iterations can be done in 1 second... when I ran it manually, it was 671,918,896 (with the print statements)

The next time it was about 621,577,993 times (without the print logs)

3rd time - 623468863 

4th time - 623538889 

And when ran in a loop like

```
for i in $(seq 10); do ./loop_benchmark.sh; echo "Executing it for" $i "time" ;cat someFile; done 2>&1 |  grep "counter value"
```

counter value is 623365373
counter value is 623575249
counter value is 623559886
counter value is 623369157
counter value is 623561340
counter value is 623337388
counter value is 623344399
counter value is 623346289
counter value is 623389285
counter value is 623373351

When ran for a millisecond - 872,020

When ran for about a microsecond - 239,021

Also take a look at the attached CPU utlization.. and it makes sense.. there are 2 cores, and when I run one of the programs.. it take 1 core completely...

now lets try to run 2 programms in parallel...