produce_debug:
	g++ -g -o debug-strs allocate_strs.c

debug_mode:
	tmux splitw -h -p 50 "gdbserver :12345 ./debug-strs"; tmux select -t 0; gdb -x ../debug_conf.gdb;
