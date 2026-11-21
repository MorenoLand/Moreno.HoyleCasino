; FUN_005d0f00  005d0f00
005d0f00  PUSH EBP
005d0f01  MOV EBP,ESP
005d0f03  SUB ESP,0x20
005d0f06  MOV dword ptr [EBP + -0x20],ECX
005d0f09  PUSH 0x1
005d0f0b  LEA EAX,[EBP + -0x8]
005d0f0e  PUSH EAX
005d0f0f  MOV ECX,dword ptr [EBP + -0x20]
005d0f12  CALL 0x005d0c30
005d0f17  MOV dword ptr [EBP + -0xc],0x0
005d0f1e  MOV ECX,dword ptr [EBP + -0x20]
005d0f21  MOV EDX,dword ptr [ECX + 0x8]
005d0f24  MOV dword ptr [EBP + -0x10],EDX
005d0f27  MOV EAX,dword ptr [EBP + -0x20]
005d0f2a  MOV EDX,dword ptr [EAX]
005d0f2c  MOV ECX,dword ptr [EBP + -0x20]
005d0f2f  MOV EAX,dword ptr [EDX + 0x4]
005d0f32  CALL EAX
005d0f34  CMP dword ptr [EBP + -0x10],EAX
005d0f37  JL 0x005d0f50
005d0f39  PUSH 0xaa
005d0f3e  PUSH 0x6d3484
005d0f43  PUSH 0x6d34a8
005d0f48  CALL 0x005e9f20
005d0f4d  ADD ESP,0xc
005d0f50  MOV EDX,dword ptr [EBP + -0x20]
005d0f53  MOV EAX,dword ptr [EDX + 0x8]
005d0f56  MOV dword ptr [EBP + -0x14],EAX
005d0f59  MOV ECX,dword ptr [EBP + -0x14]
005d0f5c  ADD ECX,0x1
005d0f5f  MOV EDX,dword ptr [EBP + -0x20]
005d0f62  MOV dword ptr [EDX + 0x8],ECX
005d0f65  MOV EAX,dword ptr [EBP + -0x20]
005d0f68  MOV ECX,dword ptr [EAX + 0x4]
005d0f6b  MOV dword ptr [EBP + -0x18],ECX
005d0f6e  CMP dword ptr [EBP + -0x18],0x0
005d0f72  JZ 0x005d0f8e
005d0f74  MOV EDX,dword ptr [EBP + -0x20]
005d0f77  MOV EAX,dword ptr [EDX + 0x4]
005d0f7a  MOV dword ptr [EBP + -0x1c],EAX
005d0f7d  MOV ECX,dword ptr [EBP + -0x1c]
005d0f80  SUB ECX,0x1
005d0f83  PUSH ECX
005d0f84  MOV ECX,dword ptr [EBP + -0x20]
005d0f87  CALL 0x005d0a20
005d0f8c  JMP 0x005d0feb
005d0f8e  CMP dword ptr [EBP + -0x8],0x0
005d0f92  JNZ 0x005d0fc2
005d0f94  MOV EDX,dword ptr [EBP + -0x4]
005d0f97  IMUL EDX,EDX,-0x1
005d0f9a  MOV EAX,dword ptr [EBP + -0x20]
005d0f9d  IMUL EDX,dword ptr [EAX + 0xc]
005d0fa1  MOV dword ptr [EBP + -0xc],EDX
005d0fa4  MOV EAX,dword ptr [EBP + -0xc]
005d0fa7  CDQ
005d0fa8  MOV ECX,0x64
005d0fad  IDIV ECX
005d0faf  MOV dword ptr [EBP + -0x8],EAX
005d0fb2  MOV EAX,dword ptr [EBP + -0xc]
005d0fb5  CDQ
005d0fb6  MOV ECX,0x64
005d0fbb  IDIV ECX
005d0fbd  MOV dword ptr [EBP + -0x4],EDX
005d0fc0  JMP 0x005d0fdb
005d0fc2  MOV EDX,dword ptr [EBP + -0x20]
005d0fc5  MOV EAX,dword ptr [EDX + 0xc]
005d0fc8  IMUL EAX,EAX,-0x1
005d0fcb  IMUL EAX,dword ptr [EBP + -0x8]
005d0fcf  MOV dword ptr [EBP + -0x8],EAX
005d0fd2  MOV ECX,dword ptr [EBP + -0x4]
005d0fd5  IMUL ECX,ECX,-0x1
005d0fd8  MOV dword ptr [EBP + -0x4],ECX
005d0fdb  MOV EDX,dword ptr [EBP + -0x4]
005d0fde  PUSH EDX
005d0fdf  MOV EAX,dword ptr [EBP + -0x8]
005d0fe2  PUSH EAX
005d0fe3  MOV ECX,dword ptr [EBP + -0x20]
005d0fe6  CALL 0x005d1420
005d0feb  MOV ESP,EBP
005d0fed  POP EBP
005d0fee  RET
