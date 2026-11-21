; FUN_005f9c10  005f9c10
005f9c10  PUSH EBP
005f9c11  MOV EBP,ESP
005f9c13  PUSH -0x1
005f9c15  PUSH 0x6aa295
005f9c1a  MOV EAX,FS:[0x0]
005f9c20  PUSH EAX
005f9c21  SUB ESP,0x10
005f9c24  MOV EAX,[0x00781870]
005f9c29  XOR EAX,EBP
005f9c2b  PUSH EAX
005f9c2c  LEA EAX,[EBP + -0xc]
005f9c2f  MOV FS:[0x0],EAX
005f9c35  MOV dword ptr [EBP + -0x18],ECX
005f9c38  CMP dword ptr [EBP + 0x8],0x0
005f9c3c  JNZ 0x005f9c82
005f9c3e  PUSH 0x184
005f9c43  CALL 0x00686d82
005f9c48  ADD ESP,0x4
005f9c4b  MOV dword ptr [EBP + -0x14],EAX
005f9c4e  MOV dword ptr [EBP + -0x4],0x0
005f9c55  CMP dword ptr [EBP + -0x14],0x0
005f9c59  JZ 0x005f9c68
005f9c5b  MOV ECX,dword ptr [EBP + -0x14]
005f9c5e  CALL 0x005f5bf0
005f9c63  MOV dword ptr [EBP + -0x1c],EAX
005f9c66  JMP 0x005f9c6f
005f9c68  MOV dword ptr [EBP + -0x1c],0x0
005f9c6f  MOV EAX,dword ptr [EBP + -0x1c]
005f9c72  MOV dword ptr [EBP + -0x10],EAX
005f9c75  MOV dword ptr [EBP + -0x4],0xffffffff
005f9c7c  MOV ECX,dword ptr [EBP + -0x10]
005f9c7f  MOV dword ptr [EBP + 0x8],ECX
005f9c82  MOV DL,byte ptr [EBP + 0x30]
005f9c85  PUSH EDX
005f9c86  MOV AL,byte ptr [EBP + 0x2c]
005f9c89  PUSH EAX
005f9c8a  MOV ECX,dword ptr [EBP + 0x28]
005f9c8d  PUSH ECX
005f9c8e  MOV EDX,dword ptr [EBP + 0x1c]
005f9c91  PUSH EDX
005f9c92  MOV EAX,dword ptr [EBP + 0x18]
005f9c95  PUSH EAX
005f9c96  MOV ECX,dword ptr [EBP + 0x14]
005f9c99  PUSH ECX
005f9c9a  MOV EDX,dword ptr [EBP + 0x10]
005f9c9d  PUSH EDX
005f9c9e  MOV EAX,dword ptr [EBP + 0xc]
005f9ca1  PUSH EAX
005f9ca2  MOV ECX,dword ptr [EBP + 0x8]
005f9ca5  PUSH ECX
005f9ca6  MOV ECX,dword ptr [EBP + -0x18]
005f9ca9  CALL 0x005f9ce0
005f9cae  MOV EDX,dword ptr [EBP + 0x20]
005f9cb1  PUSH EDX
005f9cb2  MOV ECX,dword ptr [EBP + 0x8]
005f9cb5  CALL 0x005f5d50
005f9cba  MOV EAX,dword ptr [EBP + 0x24]
005f9cbd  PUSH EAX
005f9cbe  MOV ECX,dword ptr [EBP + 0x8]
005f9cc1  CALL 0x005f5df0
005f9cc6  MOV EAX,dword ptr [EBP + 0x8]
005f9cc9  MOV ECX,dword ptr [EBP + -0xc]
005f9ccc  MOV dword ptr FS:[0x0],ECX
005f9cd3  POP ECX
005f9cd4  MOV ESP,EBP
005f9cd6  POP EBP
005f9cd7  RET 0x2c
