produce_debug:
	g++ -g -o debug-uuid uuid.c

debug_mode:
	tmux splitw -h -p 50 "gdbserver :12345 ./debug-uuid"; tmux select -t 0; gdb -x ../../debug_conf.gdb;
