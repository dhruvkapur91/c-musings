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

When I tried to run the 2 in parallel - I got about 4 million...
counter value is 4717998
counter value is 3719977

And when we ran the 2 programms in paralel in a for loop... (for a millisecond)

counter value is 12,861,766
counter value is 11,957,645
counter value is 11,509,029
counter value is 10,714,570
counter value is 8,773,658
counter value is 10,881,037
counter value is 10,151,998
counter value is 9,570,243
counter value is 8,672,107
counter value is 9,864,008
counter value is 8,988,498
counter value is 11,577,789
counter value is 10,876,463
counter value is 9,670,352
counter value is 8,905,441
counter value is 11,963,648
counter value is 11,173,540
counter value is 11,918,262
counter value is 11,276,265

Interesting... it sometiimes even more than what I had got when we were doing 1 program.... 


Also the time shows (As attached in the pngs) that the job is 100% CPU utilization