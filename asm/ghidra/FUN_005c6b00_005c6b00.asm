; FUN_005c6b00  005c6b00
005c6b00  PUSH EBP
005c6b01  MOV EBP,ESP
005c6b03  PUSH -0x1
005c6b05  PUSH 0x6a87e1
005c6b0a  MOV EAX,FS:[0x0]
005c6b10  PUSH EAX
005c6b11  PUSH ECX
005c6b12  SUB ESP,0x18
005c6b15  PUSH EBX
005c6b16  PUSH ESI
005c6b17  PUSH EDI
005c6b18  MOV EAX,[0x00781870]
005c6b1d  XOR EAX,EBP
005c6b1f  PUSH EAX
005c6b20  LEA EAX,[EBP + -0xc]
005c6b23  MOV FS:[0x0],EAX
005c6b29  MOV dword ptr [EBP + -0x10],ESP
005c6b2c  MOV EAX,dword ptr [EBP + 0x8]
005c6b2f  MOV dword ptr [EBP + -0x14],EAX
005c6b32  MOV dword ptr [EBP + -0x4],0x0
005c6b39  JMP 0x005c6b4d
005c6b3b  MOV ECX,dword ptr [EBP + 0xc]
005c6b3e  SUB ECX,0x1
005c6b41  MOV dword ptr [EBP + 0xc],ECX
005c6b44  MOV EDX,dword ptr [EBP + 0x8]
005c6b47  ADD EDX,0x34
005c6b4a  MOV dword ptr [EBP + 0x8],EDX
005c6b4d  CMP dword ptr [EBP + 0xc],0x0
005c6b51  JBE 0x005c6b93
005c6b53  MOV EAX,dword ptr [EBP + 0x8]
005c6b56  MOV dword ptr [EBP + -0x18],EAX
005c6b59  MOV ECX,dword ptr [EBP + -0x18]
005c6b5c  MOV dword ptr [EBP + -0x20],ECX
005c6b5f  MOV byte ptr [EBP + -0x4],0x1
005c6b63  CMP dword ptr [EBP + -0x20],0x0
005c6b67  JZ 0x005c6b80
005c6b69  MOV EDX,dword ptr [EBP + 0x10]
005c6b6c  PUSH EDX
005c6b6d  MOV ECX,dword ptr [EBP + -0x20]
005c6b70  CALL 0x005c38f0
005c6b75  MOV dword ptr [EBP + -0x24],EAX
005c6b78  MOV EAX,dword ptr [EBP + -0x24]
005c6b7b  MOV dword ptr [EBP + -0x28],EAX
005c6b7e  JMP 0x005c6b87
005c6b80  MOV dword ptr [EBP + -0x28],0x0
005c6b87  MOV ECX,dword ptr [EBP + -0x28]
005c6b8a  MOV dword ptr [EBP + -0x1c],ECX
005c6b8d  MOV byte ptr [EBP + -0x4],0x0
005c6b91  JMP 0x005c6b3b
005c6b93  JMP 0x005c6bdb
