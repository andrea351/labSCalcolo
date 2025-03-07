# scrivere la soluzione qui...
.globl f
f:
movl $2, %eax
addl $3, %eax #5

movl $4, %ecx
subl $2, %ecx #2

imull %eax, %ecx #10

movl $2, %edx
addl $3, %edx #5

subl %edx, %ecx #5

imull $3, %ecx #15

incl %ecx #16

movl %ecx, %eax

ret
