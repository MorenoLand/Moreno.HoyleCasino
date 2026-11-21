; FUN_005d4f50  005d4f50
005d4f50  PUSH EBP
005d4f51  MOV EBP,ESP
005d4f53  PUSH -0x1
005d4f55  PUSH 0x6a900b
005d4f5a  MOV EAX,FS:[0x0]
005d4f60  PUSH EAX
005d4f61  SUB ESP,0x10
005d4f64  MOV EAX,[0x00781870]
005d4f69  XOR EAX,EBP
005d4f6b  PUSH EAX
005d4f6c  LEA EAX,[EBP + -0xc]
005d4f6f  MOV FS:[0x0],EAX
005d4f75  MOV dword ptr [EBP + -0x18],ECX
005d4f78  MOV EAX,dword ptr [EBP + -0x18]
005d4f7b  MOV dword ptr [EAX],0x6d3ce4
005d4f81  MOV dword ptr [EBP + -0x4],0x0
005d4f88  MOV ECX,dword ptr [EBP + -0x18]
005d4f8b  MOV EDX,dword ptr [ECX + 0x49c]
005d4f91  MOV dword ptr [EBP + -0x14],EDX
005d4f94  MOV EAX,dword ptr [EBP + -0x14]
005d4f97  MOV dword ptr [EBP + -0x10],EAX
005d4f9a  CMP dword ptr [EBP + -0x10],0x0
005d4f9e  JZ 0x005d4fb3
005d4fa0  PUSH 0x1
005d4fa2  MOV ECX,dword ptr [EBP + -0x10]
005d4fa5  MOV EDX,dword ptr [ECX]
005d4fa7  MOV ECX,dword ptr [EBP + -0x10]
005d4faa  MOV EAX,dword ptr [EDX]
005d4fac  CALL EAX
005d4fae  MOV dword ptr [EBP + -0x1c],EAX
005d4fb1  JMP 0x005d4fba
005d4fb3  MOV dword ptr [EBP + -0x1c],0x0
005d4fba  MOV ECX,dword ptr [EBP + -0x18]
005d4fbd  CALL 0x005d6550
005d4fc2  MOV ECX,dword ptr [EBP + -0x18]
005d4fc5  CALL 0x005d6600
005d4fca  MOV dword ptr [EBP + -0x4],0xffffffff
005d4fd1  MOV ECX,dword ptr [EBP + -0x18]
005d4fd4  CALL 0x0063a120
005d4fd9  MOV ECX,dword ptr [EBP + -0xc]
005d4fdc  MOV dword ptr FS:[0x0],ECX
005d4fe3  POP ECX
005d4fe4  MOV ESP,EBP
005d4fe6  POP EBP
005d4fe7  RET
