./signal_handler & export APP_PID=$!; sleep 1; kill -SIGINT $APP_PID

--- can kill it in 1 1 second :D And in signal handler, it clearly shows that CPU utilization is 0% (though I expected it to be somewhat more than that) but not really 100% as in loop... somewhat more was for while 1... (checking condition) but no worry, maybe there is an optimizatin or something
