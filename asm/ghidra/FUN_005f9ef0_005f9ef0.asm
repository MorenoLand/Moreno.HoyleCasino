; FUN_005f9ef0  005f9ef0
005f9ef0  PUSH EBP
005f9ef1  MOV EBP,ESP
005f9ef3  PUSH -0x1
005f9ef5  PUSH 0x6aa307
005f9efa  MOV EAX,FS:[0x0]
005f9f00  PUSH EAX
005f9f01  SUB ESP,0x10
005f9f04  MOV EAX,[0x00781870]
005f9f09  XOR EAX,EBP
005f9f0b  PUSH EAX
005f9f0c  LEA EAX,[EBP + -0xc]
005f9f0f  MOV FS:[0x0],EAX
005f9f15  MOV dword ptr [EBP + -0x18],ECX
005f9f18  CMP dword ptr [EBP + 0x8],0x0
005f9f1c  JNZ 0x005f9f62
005f9f1e  PUSH 0x208
005f9f23  CALL 0x00686d82
005f9f28  ADD ESP,0x4
005f9f2b  MOV dword ptr [EBP + -0x14],EAX
005f9f2e  MOV dword ptr [EBP + -0x4],0x0
005f9f35  CMP dword ptr [EBP + -0x14],0x0
005f9f39  JZ 0x005f9f48
005f9f3b  MOV ECX,dword ptr [EBP + -0x14]
005f9f3e  CALL 0x005ffbb0
005f9f43  MOV dword ptr [EBP + -0x1c],EAX
005f9f46  JMP 0x005f9f4f
005f9f48  MOV dword ptr [EBP + -0x1c],0x0
005f9f4f  MOV EAX,dword ptr [EBP + -0x1c]
005f9f52  MOV dword ptr [EBP + -0x10],EAX
005f9f55  MOV dword ptr [EBP + -0x4],0xffffffff
005f9f5c  MOV ECX,dword ptr [EBP + -0x10]
005f9f5f  MOV dword ptr [EBP + 0x8],ECX
005f9f62  MOV EDX,dword ptr [EBP + 0x8]
005f9f65  PUSH EDX
005f9f66  MOV ECX,dword ptr [EBP + -0x18]
005f9f69  ADD ECX,0x24
005f9f6c  CALL 0x0060c840
005f9f71  MOV EAX,dword ptr [EBP + 0x8]
005f9f74  MOV ECX,dword ptr [EBP + -0x18]
005f9f77  MOV dword ptr [EAX + 0x4],ECX
005f9f7a  MOV EDX,dword ptr [EBP + 0xc]
005f9f7d  PUSH EDX
005f9f7e  MOV EAX,dword ptr [EBP + 0x1c]
005f9f81  PUSH EAX
005f9f82  MOV ECX,dword ptr [EBP + 0x18]
005f9f85  PUSH ECX
005f9f86  MOV EDX,dword ptr [EBP + 0x14]
005f9f89  PUSH EDX
005f9f8a  MOV EAX,dword ptr [EBP + 0x10]
005f9f8d  PUSH EAX
005f9f8e  MOV ECX,dword ptr [EBP + 0x8]
005f9f91  CALL 0x005eae80
005f9f96  MOV ECX,dword ptr [EBP + 0x38]
005f9f99  PUSH ECX
005f9f9a  MOV EDX,dword ptr [EBP + 0x34]
005f9f9d  PUSH EDX
005f9f9e  MOV EAX,dword ptr [EBP + 0x30]
005f9fa1  PUSH EAX
005f9fa2  MOV ECX,dword ptr [EBP + 0x2c]
005f9fa5  PUSH ECX
005f9fa6  MOV EDX,dword ptr [EBP + 0x28]
005f9fa9  PUSH EDX
005f9faa  MOV EAX,dword ptr [EBP + 0x24]
005f9fad  PUSH EAX
005f9fae  MOV ECX,dword ptr [EBP + 0x20]
005f9fb1  PUSH ECX
005f9fb2  MOV EDX,dword ptr [EBP + 0x8]
005f9fb5  MOV EAX,dword ptr [EDX]
005f9fb7  MOV ECX,dword ptr [EBP + 0x8]
005f9fba  MOV EDX,dword ptr [EAX + 0xdc]
005f9fc0  CALL EDX
005f9fc2  MOV EAX,dword ptr [EBP + 0x8]
005f9fc5  MOV EDX,dword ptr [EAX]
005f9fc7  MOV ECX,dword ptr [EBP + 0x8]
005f9fca  MOV EAX,dword ptr [EDX + 0x74]
005f9fcd  CALL EAX
005f9fcf  MOV EAX,dword ptr [EBP + 0x8]
005f9fd2  MOV ECX,dword ptr [EBP + -0xc]
005f9fd5  MOV dword ptr FS:[0x0],ECX
005f9fdc  POP ECX
005f9fdd  MOV ESP,EBP
005f9fdf  POP EBP
005f9fe0  RET 0x34
