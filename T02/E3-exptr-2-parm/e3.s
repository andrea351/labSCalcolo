# scrivere la soluzione qui...
.globl f
f:
    movl 4(%esp), %eax #x

    movl 8(%esp), %ecx #y

    movl %eax, %edx #edx vale x

    addl %ecx, %eax # x + y salvato in eax

    subl %ecx, %edx

    imull %eax, %edx

    movl %edx, %eax

    ret

