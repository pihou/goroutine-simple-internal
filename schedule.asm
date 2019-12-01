
        global  start_new_go_routine
		extern  new_go_routine
        section .text
start_new_go_routine:
		add rsp, -1024      ;a random temp stack size
		call new_go_routine
		add rsp, +1024      ;return stack back
        ret  
