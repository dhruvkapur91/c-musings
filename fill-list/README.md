So something is horribly wrong... :P

The fill.cpp ran for about close to 20 minutes and was able to get 114,649,707 elements in memory before it threw up... That should be close to 3.6 GB of data...

What is weird is that it took so long... I wonder if that had to do something with print statement... lets get rid of that...

Or could it be, push_back? will try push_front later too... or too many malloc calls, will strace help me see that?

And this is how I'm measuring the memory its taking... 

 while true; do sudo pmap 8415 | tail -n 1  |  awk '/[0-9]K/{print $2}' ; done

 And with no printing (inside the loop), it took about 17 seconds... which is quite a lot too... 

 Now lets run it without any instrumentation... wonder if the instrumentation process makes it any slower...

 echo $(($(date +%s%N)/1000000)); ./fill_without_print; echo $(($(date +%s%N)/1000000))

 With that... its closer to..
 1591114381432 - 1591114370235 = 11197 ms = 11 sec