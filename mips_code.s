.data
global: .word 8
.text
fun:
	 li $t0, 0
	 sub $sp, $sp, $t0
	 move $t2, $sp
	 li $t1, 6
	 li $t3,4
	 sub $t2,$t2,$t3
	 sw $t1,0($t2)

	 lw $t1,0($t2)
	 li $t8, 0
	 # STORING ..
	 la $t9,global
	 add $t9,$t9,0
	 add $t9,$t9,$t8
	 sw $t1, 0($t9)
	 add $t2,$t2,4
	 li $t1, 7
	 li $t3,4
	 sub $t2,$t2,$t3
	 sw $t1,0($t2)

	 lw $t1,0($t2)
	 li $t8, 4
	 # STORING ..
	 la $t9,global
	 add $t9,$t9,0
	 add $t9,$t9,$t8
	 sw $t1, 0($t9)
	 add $t2,$t2,4
	 li $t0, 0
	 add $sp, $sp, $t0
	 move $t2, $sp
	 jr $ra
main:
	 li $t0, 4
	 sub $sp, $sp, $t0
	 move $t2, $sp
	 li $t1, 2
	 li $t3,4
	 sub $t2,$t2,$t3
	 sw $t1,0($t2)

	 lw $t1,0($t2)
	 li $t8, 0
	 # STORING ..
	 la $t9,global
	 add $t9,$t9,0
	 add $t9,$t9,$t8
	 sw $t1, 0($t9)
	 add $t2,$t2,4
	 li $t1, 5
	 li $t3,4
	 sub $t2,$t2,$t3
	 sw $t1,0($t2)

	 lw $t1,0($t2)
	 li $t8, 4
	 # STORING ..
	 la $t9,global
	 add $t9,$t9,0
	 add $t9,$t9,$t8
	 sw $t1, 0($t9)
	 add $t2,$t2,4
	li $t0,4
	sub $sp,$sp,$t0
	sw $ra,0($sp)
	move $t2,$sp
	jal fun

	lw $ra,0($sp)
	add $sp,$sp,4
	move $t2,$sp
	 li $t8, 0
	 sub $t2,$t2,$t3
	 sw $t4,0($t2)

	 # LOADING ..
	 la $t9,global
	 add $t9,$t9,0
	 add $t9,$t9,$t8
	 lw $t4, 0($t9)
	 sw $t4,0($t2)

	 lw $t1,0($t2)
	 # STORING ..
	 add $t9,$sp,0
	 sw $t1, 0($t9)
	 add $t2,$t2,4
	 # LOADING ..
	 add $t9,$sp,0
	 lw $a0, 0($t9)
	 li $v0,1
	 syscall
	 li $a0,32
	 li $v0,11
	 syscall
	 li $t8, 4
	 sub $t2,$t2,$t3
	 sw $t4,0($t2)

	 # LOADING ..
	 la $t9,global
	 add $t9,$t9,0
	 add $t9,$t9,$t8
	 lw $t4, 0($t9)
	 sw $t4,0($t2)

	 lw $t1,0($t2)
	 # STORING ..
	 add $t9,$sp,0
	 sw $t1, 0($t9)
	 add $t2,$t2,4
	 # LOADING ..
	 add $t9,$sp,0
	 lw $a0, 0($t9)
	 li $v0,1
	 syscall
	 li $a0,32
	 li $v0,11
	 syscall
	 li $t0, 4
	 add $sp, $sp, $t0
	 move $t2, $sp
	 jr $ra
