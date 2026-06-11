	.text 	# this is where your code is written! 
		# the .text tag is optional
main:
	# Allocate your variables before you code!
	# x in $t0
	# y in $t1

	la	$a0, prompt	#  printf("Enter a number: ");
	li	$v0, 4
	syscall

	li	$v0, 5		#  scanf("%d", &x);
	syscall	

	move	$t0, $v0	# x in t0 

	mul	$t1, $t0, $t0	# y = x * x;

	move	$a0, $t1	# move y (t1) into a0 for print
	li	$v0, 1
	syscall			# printf("%d", y);

	li	$a0, '\n'	# printf("\n", y);
	li	$v0, 11
	syscall

	# la	$a0, newline	# also prints newline yay 
	# li	$v0, 4
	# syscall 	
epilogue:

	jr	$ra 		
	
	.data	# this is where you store strings, 
		# arrays -- anything that needs to be in memory 
prompt:
	.asciiz "Enter a number:"
newline:
	.asciiz "\n"