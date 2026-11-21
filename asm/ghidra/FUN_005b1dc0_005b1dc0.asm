; FUN_005b1dc0  005b1dc0
005b1dc0  PUSH EBP
005b1dc1  MOV EBP,ESP
005b1dc3  SUB ESP,0xc
005b1dc6  MOV dword ptr [EBP + -0x4],ECX
005b1dc9  CMP dword ptr [EBP + 0x14],0x33
005b1dcd  JZ 0x005b1de1
005b1dcf  CMP dword ptr [EBP + 0x14],0x34
005b1dd3  JZ 0x005b1de1
005b1dd5  CMP dword ptr [EBP + 0x14],0x35
005b1dd9  JZ 0x005b1de1
005b1ddb  CMP dword ptr [EBP + 0x14],0x36
005b1ddf  JNZ 0x005b1e0a
005b1de1  PUSH 0x32
005b1de3  MOV ECX,dword ptr [0x0163068c]
005b1de9  CALL 0x005fb5e0
005b1dee  MOV dword ptr [EBP + -0x8],EAX
005b1df1  PUSH 0x0
005b1df3  PUSH 0x3154f9
005b1df8  MOV EAX,dword ptr [EBP + -0x8]
005b1dfb  MOV EDX,dword ptr [EAX]
005b1dfd  MOV ECX,dword ptr [EBP + -0x8]
005b1e00  MOV EAX,dword ptr [EDX + 0xf0]
005b1e06  CALL EAX
005b1e08  JMP 0x005b1e7d
005b1e0a  CMP dword ptr [EBP + 0x14],0x32
005b1e0e  JNZ 0x005b1e7d
005b1e10  MOV ECX,dword ptr [EBP + 0x10]
005b1e13  MOV dword ptr [EBP + -0xc],ECX
005b1e16  MOV EDX,dword ptr [EBP + -0xc]
005b1e19  SUB EDX,0x3154f5
005b1e1f  MOV dword ptr [EBP + -0xc],EDX
005b1e22  CMP dword ptr [EBP + -0xc],0x4
005b1e26  JA 0x005b1e62
005b1e28  MOV EAX,dword ptr [EBP + -0xc]
005b1e2b  JMP dword ptr [EAX*0x4 + 0x5b1e84]
005b1e62  XOR ECX,ECX
005b1e64  JNZ 0x005b1e7d
005b1e66  PUSH 0x2cb
005b1e6b  PUSH 0x6d01a8
005b1e70  PUSH 0x6b2f58
005b1e75  CALL 0x005e9f20
005b1e7a  ADD ESP,0xc
005b1e7d  MOV ESP,EBP
005b1e7f  POP EBP
005b1e80  RET 0x10
