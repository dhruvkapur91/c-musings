set -xe

echo "Should be run from the loop directory"
echo "First argument should be number of microseconds to sleep"

TIME_TO_SLEEP=$1

gcc loop.c -o loop 
./loop > someFile & export APP_PID=$!; usleep $TIME_TO_SLEEP; kill -SIGINT $APP_PID
