; FUN_005c6c50  005c6c50
005c6c50  PUSH EBP
005c6c51  MOV EBP,ESP
005c6c53  PUSH -0x1
005c6c55  PUSH 0x6a8811
005c6c5a  MOV EAX,FS:[0x0]
005c6c60  PUSH EAX
005c6c61  PUSH ECX
005c6c62  SUB ESP,0x18
005c6c65  PUSH EBX
005c6c66  PUSH ESI
005c6c67  PUSH EDI
005c6c68  MOV EAX,[0x00781870]
005c6c6d  XOR EAX,EBP
005c6c6f  PUSH EAX
005c6c70  LEA EAX,[EBP + -0xc]
005c6c73  MOV FS:[0x0],EAX
005c6c79  MOV dword ptr [EBP + -0x10],ESP
005c6c7c  MOV EAX,dword ptr [EBP + 0x10]
005c6c7f  MOV dword ptr [EBP + -0x14],EAX
005c6c82  MOV dword ptr [EBP + -0x4],0x0
005c6c89  JMP 0x005c6c9d
005c6c8b  MOV ECX,dword ptr [EBP + 0x10]
005c6c8e  ADD ECX,0x34
005c6c91  MOV dword ptr [EBP + 0x10],ECX
005c6c94  MOV EDX,dword ptr [EBP + 0x8]
005c6c97  ADD EDX,0x34
005c6c9a  MOV dword ptr [EBP + 0x8],EDX
005c6c9d  MOV EAX,dword ptr [EBP + 0x8]
005c6ca0  CMP EAX,dword ptr [EBP + 0xc]
005c6ca3  JZ 0x005c6ce5
005c6ca5  MOV ECX,dword ptr [EBP + 0x10]
005c6ca8  MOV dword ptr [EBP + -0x18],ECX
005c6cab  MOV EDX,dword ptr [EBP + -0x18]
005c6cae  MOV dword ptr [EBP + -0x20],EDX
005c6cb1  MOV byte ptr [EBP + -0x4],0x1
005c6cb5  CMP dword ptr [EBP + -0x20],0x0
005c6cb9  JZ 0x005c6cd2
005c6cbb  MOV EAX,dword ptr [EBP + 0x8]
005c6cbe  PUSH EAX
005c6cbf  MOV ECX,dword ptr [EBP + -0x20]
005c6cc2  CALL 0x005c38f0
005c6cc7  MOV dword ptr [EBP + -0x24],EAX
005c6cca  MOV ECX,dword ptr [EBP + -0x24]
005c6ccd  MOV dword ptr [EBP + -0x28],ECX
005c6cd0  JMP 0x005c6cd9
005c6cd2  MOV dword ptr [EBP + -0x28],0x0
005c6cd9  MOV EDX,dword ptr [EBP + -0x28]
005c6cdc  MOV dword ptr [EBP + -0x1c],EDX
005c6cdf  MOV byte ptr [EBP + -0x4],0x0
005c6ce3  JMP 0x005c6c8b
005c6ce5  JMP 0x005c6d2d
