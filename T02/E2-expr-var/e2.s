# scrivere la soluzione qui...
.globl f
f:
    #x -> %eax
    movl 4(%esp), %eax

    movl %eax, %edx #edx vale input

    imull %eax, %eax #2 * input
    imull $2, %eax # 2* input * input

    movl $7, %ecx # ecx vale 7
    imull %edx, %ecx # 7 * input

    subl %ecx, %eax

    incl %eax

    ret


