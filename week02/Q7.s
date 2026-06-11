	.text
main:
	# x in $t0
print_every_third_init:
	li	$t0, 24

print_every_third_cond:
	bge	$t0, 42, print_every_third_end

print_every_third_body:
	move	$a0, $t0	# prints value in t0
	li	$v0, 1
	syscall

	li	$a0, '\n'
	li	$v0, 11		# print newline 
	syscall 

print_every_third_step:
	addi	$t0, 3
	b	print_every_third_cond

print_every_third_end:

	jr 	$ra

