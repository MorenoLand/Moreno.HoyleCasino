; FUN_005fa6a0  005fa6a0
005fa6a0  PUSH EBP
005fa6a1  MOV EBP,ESP
005fa6a3  PUSH -0x1
005fa6a5  PUSH 0x6aa3e6
005fa6aa  MOV EAX,FS:[0x0]
005fa6b0  PUSH EAX
005fa6b1  SUB ESP,0x10
005fa6b4  MOV EAX,[0x00781870]
005fa6b9  XOR EAX,EBP
005fa6bb  PUSH EAX
005fa6bc  LEA EAX,[EBP + -0xc]
005fa6bf  MOV FS:[0x0],EAX
005fa6c5  MOV dword ptr [EBP + -0x18],ECX
005fa6c8  CMP dword ptr [EBP + 0x8],0x0
005fa6cc  JNZ 0x005fa712
005fa6ce  PUSH 0x1fc
005fa6d3  CALL 0x00686d82
005fa6d8  ADD ESP,0x4
005fa6db  MOV dword ptr [EBP + -0x14],EAX
005fa6de  MOV dword ptr [EBP + -0x4],0x0
005fa6e5  CMP dword ptr [EBP + -0x14],0x0
005fa6e9  JZ 0x005fa6f8
005fa6eb  MOV ECX,dword ptr [EBP + -0x14]
005fa6ee  CALL 0x0060b4a0
005fa6f3  MOV dword ptr [EBP + -0x1c],EAX
005fa6f6  JMP 0x005fa6ff
005fa6f8  MOV dword ptr [EBP + -0x1c],0x0
005fa6ff  MOV EAX,dword ptr [EBP + -0x1c]
005fa702  MOV dword ptr [EBP + -0x10],EAX
005fa705  MOV dword ptr [EBP + -0x4],0xffffffff
005fa70c  MOV ECX,dword ptr [EBP + -0x10]
005fa70f  MOV dword ptr [EBP + 0x8],ECX
005fa712  MOV EDX,dword ptr [EBP + 0x8]
005fa715  PUSH EDX
005fa716  MOV ECX,dword ptr [EBP + -0x18]
005fa719  ADD ECX,0x64
005fa71c  CALL 0x0060c840
005fa721  MOV EAX,dword ptr [EBP + 0x8]
005fa724  MOV ECX,dword ptr [EBP + -0x18]
005fa727  MOV dword ptr [EAX + 0x4],ECX
005fa72a  MOV EDX,dword ptr [EBP + 0xc]
005fa72d  PUSH EDX
005fa72e  MOV EAX,dword ptr [EBP + 0x3c]
005fa731  PUSH EAX
005fa732  MOV ECX,dword ptr [EBP + 0x34]
005fa735  PUSH ECX
005fa736  MOV EDX,dword ptr [EBP + 0x30]
005fa739  PUSH EDX
005fa73a  MOV EAX,dword ptr [EBP + 0x2c]
005fa73d  PUSH EAX
005fa73e  MOV ECX,dword ptr [EBP + 0x28]
005fa741  PUSH ECX
005fa742  MOV EDX,dword ptr [EBP + 0x24]
005fa745  PUSH EDX
005fa746  MOV EAX,dword ptr [EBP + 0x1c]
005fa749  PUSH EAX
005fa74a  MOV ECX,dword ptr [EBP + 0x20]
005fa74d  PUSH ECX
005fa74e  MOV EDX,dword ptr [EBP + 0x18]
005fa751  PUSH EDX
005fa752  MOV EAX,dword ptr [EBP + 0x14]
005fa755  PUSH EAX
005fa756  MOV ECX,dword ptr [EBP + 0x10]
005fa759  PUSH ECX
005fa75a  MOV ECX,dword ptr [EBP + 0x8]
005fa75d  CALL 0x0060be20
005fa762  MOV EDX,dword ptr [EBP + 0x38]
005fa765  PUSH EDX
005fa766  MOV ECX,dword ptr [EBP + 0x8]
005fa769  CALL 0x0060c0f0
005fa76e  MOV EAX,dword ptr [EBP + 0x8]
005fa771  MOV EDX,dword ptr [EAX]
005fa773  MOV ECX,dword ptr [EBP + 0x8]
005fa776  MOV EAX,dword ptr [EDX + 0x74]
005fa779  CALL EAX
005fa77b  MOV EAX,dword ptr [EBP + 0x8]
005fa77e  MOV ECX,dword ptr [EBP + -0xc]
005fa781  MOV dword ptr FS:[0x0],ECX
005fa788  POP ECX
005fa789  MOV ESP,EBP
005fa78b  POP EBP
005fa78c  RET 0x38
