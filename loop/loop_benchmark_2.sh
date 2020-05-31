set -xe

echo "Should be run from the loop directory"
echo "First argument should be number of microseconds to sleep"

TIME_TO_SLEEP=$1

gcc loop.c -o loop 

./loop > someFile_1 & export APP_PID_1=$!
./loop > someFile_2 & export APP_PID_2=$!

usleep $TIME_TO_SLEEP; 

kill -SIGINT $APP_PID_1 &
kill -SIGINT $APP_PID_2 & 
