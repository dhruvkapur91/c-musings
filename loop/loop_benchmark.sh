echo "Should be run from the loop directory"
gcc loop.c -o loop 
./loop & export APP_PID=$!; sleep 1; kill -SIGINT $APP_PID