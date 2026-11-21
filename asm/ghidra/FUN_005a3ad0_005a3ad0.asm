; FUN_005a3ad0  005a3ad0
005a3ad0  PUSH EBP
005a3ad1  MOV EBP,ESP
005a3ad3  PUSH ECX
005a3ad4  MOV dword ptr [EBP + -0x4],ECX
005a3ad7  MOV EAX,dword ptr [EBP + -0x4]
005a3ada  MOV ECX,dword ptr [EBP + 0x8]
005a3add  MOV dword ptr [EAX + 0xec],ECX
005a3ae3  MOV EDX,dword ptr [EBP + -0x4]
005a3ae6  CMP dword ptr [EDX + 0xec],-0x1
005a3aed  JZ 0x005a3b06
005a3aef  MOV AL,byte ptr [EBP + 0xc]
005a3af2  PUSH EAX
005a3af3  MOV ECX,dword ptr [EBP + 0x8]
005a3af6  PUSH ECX
005a3af7  PUSH 0x1
005a3af9  MOV ECX,dword ptr [0x007935cc]
005a3aff  CALL 0x005d8a20
005a3b04  JMP 0x005a3b17
005a3b06  PUSH 0x0
005a3b08  PUSH -0x1
005a3b0a  PUSH 0x0
005a3b0c  MOV ECX,dword ptr [0x007935cc]
005a3b12  CALL 0x005d8a20
005a3b17  MOV ESP,EBP
005a3b19  POP EBP
005a3b1a  RET 0x8
