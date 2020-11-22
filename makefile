install:pid_code.cpp
	c++ pid_code.cpp -o bin/pid
uninstall:bin/pid
	rm bin/pid
system_install:pid_code.cpp
	c++ pid_code.cpp -o /usr/local/bin/pid
system_uninstall:/usr/local/bin/pid
	rm /usr/local/bin/pid
.PHONY: install
