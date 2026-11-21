; FUN_005cfe70  005cfe70
005cfe70  PUSH EBP
005cfe71  MOV EBP,ESP
005cfe73  PUSH -0x1
005cfe75  PUSH 0x6a8d26
005cfe7a  MOV EAX,FS:[0x0]
005cfe80  PUSH EAX
005cfe81  PUSH ECX
005cfe82  MOV EAX,[0x00781870]
005cfe87  XOR EAX,EBP
005cfe89  PUSH EAX
005cfe8a  LEA EAX,[EBP + -0xc]
005cfe8d  MOV FS:[0x0],EAX
005cfe93  MOV dword ptr [EBP + -0x10],ECX
005cfe96  PUSH 0x0
005cfe98  PUSH 0x1
005cfe9a  MOV ECX,dword ptr [EBP + -0x10]
005cfe9d  CALL 0x005f71f0
005cfea2  MOV dword ptr [EBP + -0x4],0x0
005cfea9  MOV EAX,dword ptr [EBP + -0x10]
005cfeac  MOV dword ptr [EAX],0x6d3364
005cfeb2  PUSH 0x0
005cfeb4  PUSH 0x442
005cfeb9  MOV ECX,dword ptr [EBP + -0x10]
005cfebc  CALL 0x005f83d0
005cfec1  MOV ECX,dword ptr [EBP + -0x10]
005cfec4  MOV byte ptr [ECX + 0x200],0x0
005cfecb  MOV EDX,dword ptr [EBP + -0x10]
005cfece  MOV dword ptr [EDX + 0x1fc],0x0
005cfed8  MOV dword ptr [EBP + -0x4],0xffffffff
005cfedf  MOV EAX,dword ptr [EBP + -0x10]
005cfee2  MOV ECX,dword ptr [EBP + -0xc]
005cfee5  MOV dword ptr FS:[0x0],ECX
005cfeec  POP ECX
005cfeed  MOV ESP,EBP
005cfeef  POP EBP
005cfef0  RET
