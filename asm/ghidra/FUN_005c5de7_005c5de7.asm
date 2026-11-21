; FUN_005c5de7  005c5de7
005c5de7  MOV dword ptr [EBP + -0x4],0x0
005c5dee  MOV ECX,dword ptr [EBP + 0x10]
005c5df1  IMUL ECX,ECX,0x34
005c5df4  MOV EDX,dword ptr [EBP + 0xfffffdc0]
005c5dfa  ADD ECX,dword ptr [EDX + 0x8]
005c5dfd  MOV EAX,dword ptr [EBP + 0xfffffdc0]
005c5e03  MOV dword ptr [EAX + 0x8],ECX
005c5e06  MOV ECX,dword ptr [EBP + 0x10]
005c5e09  IMUL ECX,ECX,0x34
005c5e0c  MOV EDX,dword ptr [EBP + 0xfffffdc0]
005c5e12  MOV EAX,dword ptr [EDX + 0x8]
005c5e15  SUB EAX,ECX
005c5e17  MOV dword ptr [EBP + 0xfffffe58],EAX
005c5e1d  MOV ECX,dword ptr [EBP + 0xc]
005c5e20  MOV dword ptr [EBP + 0xfffffe5c],ECX
005c5e26  MOV EDX,dword ptr [EBP + 0xfffffe58]
005c5e2c  MOV dword ptr [EBP + 0xfffffe68],EDX
005c5e32  MOV EAX,dword ptr [EBP + 0xfffffe5c]
005c5e38  MOV dword ptr [EBP + 0xfffffe60],EAX
005c5e3e  JMP 0x005c5e4f
005c5e40  MOV ECX,dword ptr [EBP + 0xfffffe60]
005c5e46  ADD ECX,0x34
005c5e49  MOV dword ptr [EBP + 0xfffffe60],ECX
005c5e4f  MOV EDX,dword ptr [EBP + 0xfffffe60]
005c5e55  CMP EDX,dword ptr [EBP + 0xfffffe68]
005c5e5b  JZ 0x005c5e6e
005c5e5d  LEA EAX,[EBP + -0x44]
005c5e60  PUSH EAX
005c5e61  MOV ECX,dword ptr [EBP + 0xfffffe60]
005c5e67  CALL 0x005c3a20
005c5e6c  JMP 0x005c5e40
005c5e6e  JMP 0x005c5f9e
