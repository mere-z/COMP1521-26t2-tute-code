# Declare constants at the top in mips 
SQUARE_MAX = 46340
main:
	# Allocate your variables before you code!

	# x in $t0
	# y in $t1

	la	$a0, prompt_str	#  printf("Enter a number: ");
	li	$v0, 4
	syscall

	li	$v0, 5		#  scanf("%d", &x);
	syscall	

	move	$t0, $v0	# x in t0 
	ble	$t0, SQUARE_MAX, else_fine

	la	$a0, too_big_str	# print "square too big for 32 bits\n"
	li	$v0, 4
	syscall
	b	end_if

else_fine:

	mul	$t1, $t0, $t0	# y = x * x;

	move	$a0, $t1	# move y (t1) into a0 for print
	li	$v0, 1
	syscall			# printf("%d", y);

	li	$a0, '\n'	# printf("\n", y);
	li	$v0, 11
	syscall
end_if:
	jr	$ra 		# return 


	.data
prompt_str: 
        .asciiz "Enter a number: "
too_big_str:
        .asciiz "square too big for 32 bits\n"