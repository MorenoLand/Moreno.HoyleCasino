; FUN_005f4ad0  005f4ad0
005f4ad0  PUSH EBP
005f4ad1  MOV EBP,ESP
005f4ad3  PUSH -0x1
005f4ad5  PUSH 0x6a9f0b
005f4ada  MOV EAX,FS:[0x0]
005f4ae0  PUSH EAX
005f4ae1  PUSH ECX
005f4ae2  MOV EAX,[0x00781870]
005f4ae7  XOR EAX,EBP
005f4ae9  PUSH EAX
005f4aea  LEA EAX,[EBP + -0xc]
005f4aed  MOV FS:[0x0],EAX
005f4af3  MOV dword ptr [EBP + -0x10],ECX
005f4af6  MOV EAX,dword ptr [EBP + -0x10]
005f4af9  MOV dword ptr [EAX],0x6d68ac
005f4aff  MOV dword ptr [EBP + -0x4],0x0
005f4b06  MOV ECX,dword ptr [EBP + -0x10]
005f4b09  CMP dword ptr [ECX + 0x28],0x0
005f4b0d  JZ 0x005f4b29
005f4b0f  MOV EDX,dword ptr [EBP + -0x10]
005f4b12  CMP dword ptr [EDX + 0x4],0x0
005f4b16  JZ 0x005f4b27
005f4b18  MOV EAX,dword ptr [EBP + -0x10]
005f4b1b  PUSH EAX
005f4b1c  MOV ECX,dword ptr [EBP + -0x10]
005f4b1f  MOV ECX,dword ptr [ECX + 0x4]
005f4b22  CALL 0x005f8ce0
005f4b27  JMP 0x005f4b37
005f4b29  MOV EDX,dword ptr [EBP + -0x10]
005f4b2c  PUSH EDX
005f4b2d  MOV ECX,0x795098
005f4b32  CALL 0x0060c890
005f4b37  MOV dword ptr [EBP + -0x4],0xffffffff
005f4b3e  MOV ECX,dword ptr [EBP + -0x10]
005f4b41  CALL 0x005e9e40
005f4b46  MOV ECX,dword ptr [EBP + -0xc]
005f4b49  MOV dword ptr FS:[0x0],ECX
005f4b50  POP ECX
005f4b51  MOV ESP,EBP
005f4b53  POP EBP
005f4b54  RET
