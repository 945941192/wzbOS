[ORG  0x7c00]                       ; 代码被加载的内存地址

[SECTION .text]                     ; 定义一个段
[BITS 16]                           ; 这个段会以多少位汇编进行编译
global _start
_start:
    ; 设置屏幕模式为文本模式，清除屏幕
    mov ax, 3
    int 0x10

    mov     ax, 0
    mov     ss, ax                  ; 这一堆是初始化段寄存器
    mov     ds, ax
    mov     es, ax
    mov     fs, ax
    mov     gs, ax
    mov     si, ax

    mov     si, msg                 ; 将 msg 标签的地址加载到源变址寄存器 si 中。
                                    ; 这使得寄存器 si 包含了指向字符串 "hello, world" 的内存地址，以便后续的代码可以逐字符读取并输出到屏幕。
    call    print

    jmp     $

; 如何调用
; mov     si, msg   ; 1 传入字符串
; call    print     ; 2 调用
print:
    mov ah, 0x0e
    mov bh, 0
    mov bl, 0x01
.loop:
    mov al, [si]
    cmp al, 0
    jz .done
    int 0x10

    inc si
    jmp .loop
.done:
    ret

msg:
    db "hello, world", 10, 13, 0            ; 定义了一个包含字符串和特殊字符的数据块

times 510 - ($ - $$) db 0                   ; $当前指令位置  $$所在段的起始位置
db 0x55, 0xaa