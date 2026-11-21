; FUN_005f2eb0  005f2eb0
005f2eb0  PUSH EBP
005f2eb1  MOV EBP,ESP
005f2eb3  PUSH -0x1
005f2eb5  PUSH 0x6a9e96
005f2eba  MOV EAX,FS:[0x0]
005f2ec0  PUSH EAX
005f2ec1  SUB ESP,0x10
005f2ec4  MOV EAX,[0x00781870]
005f2ec9  XOR EAX,EBP
005f2ecb  PUSH EAX
005f2ecc  LEA EAX,[EBP + -0xc]
005f2ecf  MOV FS:[0x0],EAX
005f2ed5  MOV dword ptr [EBP + -0x18],ECX
005f2ed8  MOV EAX,dword ptr [EBP + -0x18]
005f2edb  MOV dword ptr [EAX],0x6d666c
005f2ee1  MOV dword ptr [EBP + -0x4],0x1
005f2ee8  PUSH -0x1
005f2eea  MOV ECX,dword ptr [EBP + -0x18]
005f2eed  CALL 0x005f3c80
005f2ef2  MOV ECX,dword ptr [EBP + -0x18]
005f2ef5  MOV EDX,dword ptr [ECX + 0x14]
005f2ef8  MOV dword ptr [EBP + -0x14],EDX
005f2efb  MOV EAX,dword ptr [EBP + -0x14]
005f2efe  MOV dword ptr [EBP + -0x10],EAX
005f2f01  CMP dword ptr [EBP + -0x10],0x0
005f2f05  JZ 0x005f2f1a
005f2f07  PUSH 0x1
005f2f09  MOV ECX,dword ptr [EBP + -0x10]
005f2f0c  MOV EDX,dword ptr [ECX]
005f2f0e  MOV ECX,dword ptr [EBP + -0x10]
005f2f11  MOV EAX,dword ptr [EDX]
005f2f13  CALL EAX
005f2f15  MOV dword ptr [EBP + -0x1c],EAX
005f2f18  JMP 0x005f2f21
005f2f1a  MOV dword ptr [EBP + -0x1c],0x0
005f2f21  PUSH 0x0
005f2f23  MOV ECX,dword ptr [EBP + -0x18]
005f2f26  CALL 0x005f3de0
005f2f2b  MOV dword ptr [0x015e55e8],0x0
005f2f35  MOV byte ptr [EBP + -0x4],0x0
005f2f39  MOV ECX,dword ptr [EBP + -0x18]
005f2f3c  ADD ECX,0x4
005f2f3f  CALL 0x0060c6a0
005f2f44  MOV dword ptr [EBP + -0x4],0xffffffff
005f2f4b  MOV ECX,dword ptr [EBP + -0x18]
005f2f4e  CALL 0x005e9e40
005f2f53  MOV ECX,dword ptr [EBP + -0xc]
005f2f56  MOV dword ptr FS:[0x0],ECX
005f2f5d  POP ECX
005f2f5e  MOV ESP,EBP
005f2f60  POP EBP
005f2f61  RET
