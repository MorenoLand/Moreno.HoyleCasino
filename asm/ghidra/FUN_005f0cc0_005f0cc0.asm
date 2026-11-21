; FUN_005f0cc0  005f0cc0
005f0cc0  PUSH EBP
005f0cc1  MOV EBP,ESP
005f0cc3  PUSH -0x1
005f0cc5  PUSH 0x6a9ce3
005f0cca  MOV EAX,FS:[0x0]
005f0cd0  PUSH EAX
005f0cd1  PUSH ECX
005f0cd2  MOV EAX,[0x00781870]
005f0cd7  XOR EAX,EBP
005f0cd9  PUSH EAX
005f0cda  LEA EAX,[EBP + -0xc]
005f0cdd  MOV FS:[0x0],EAX
005f0ce3  MOV dword ptr [EBP + -0x10],ECX
005f0ce6  MOV ECX,dword ptr [EBP + -0x10]
005f0ce9  CALL 0x005e9e20
005f0cee  MOV dword ptr [EBP + -0x4],0x0
005f0cf5  MOV EAX,dword ptr [EBP + -0x10]
005f0cf8  MOV dword ptr [EAX],0x6d657c
005f0cfe  MOV ECX,dword ptr [EBP + -0x10]
005f0d01  ADD ECX,0x8
005f0d04  CALL 0x0060c5f0
005f0d09  MOV byte ptr [EBP + -0x4],0x1
005f0d0d  MOV ECX,dword ptr [EBP + -0x10]
005f0d10  ADD ECX,0x18
005f0d13  CALL 0x0060c5f0
005f0d18  MOV ECX,dword ptr [EBP + -0x10]
005f0d1b  MOV dword ptr [0x015e55e4],ECX
005f0d21  MOV EDX,dword ptr [EBP + -0x10]
005f0d24  MOV dword ptr [EDX + 0x4],0x0
005f0d2b  MOV dword ptr [0x007950ac],0x0
005f0d35  MOV EAX,dword ptr [EBP + -0x10]
005f0d38  MOV dword ptr [EAX + 0x28],0x0
005f0d3f  MOV dword ptr [EBP + -0x4],0xffffffff
005f0d46  MOV EAX,dword ptr [EBP + -0x10]
005f0d49  MOV ECX,dword ptr [EBP + -0xc]
005f0d4c  MOV dword ptr FS:[0x0],ECX
005f0d53  POP ECX
005f0d54  MOV ESP,EBP
005f0d56  POP EBP
005f0d57  RET
