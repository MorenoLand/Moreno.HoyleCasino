; FUN_005f9de0  005f9de0
005f9de0  PUSH EBP
005f9de1  MOV EBP,ESP
005f9de3  PUSH -0x1
005f9de5  PUSH 0x6aa2e1
005f9dea  MOV EAX,FS:[0x0]
005f9df0  PUSH EAX
005f9df1  SUB ESP,0x10
005f9df4  MOV EAX,[0x00781870]
005f9df9  XOR EAX,EBP
005f9dfb  PUSH EAX
005f9dfc  LEA EAX,[EBP + -0xc]
005f9dff  MOV FS:[0x0],EAX
005f9e05  MOV dword ptr [EBP + -0x18],ECX
005f9e08  CMP dword ptr [EBP + 0x8],0x0
005f9e0c  JNZ 0x005f9e52
005f9e0e  PUSH 0x1dc
005f9e13  CALL 0x00686d82
005f9e18  ADD ESP,0x4
005f9e1b  MOV dword ptr [EBP + -0x14],EAX
005f9e1e  MOV dword ptr [EBP + -0x4],0x0
005f9e25  CMP dword ptr [EBP + -0x14],0x0
005f9e29  JZ 0x005f9e38
005f9e2b  MOV ECX,dword ptr [EBP + -0x14]
005f9e2e  CALL 0x00601a80
005f9e33  MOV dword ptr [EBP + -0x1c],EAX
005f9e36  JMP 0x005f9e3f
005f9e38  MOV dword ptr [EBP + -0x1c],0x0
005f9e3f  MOV EAX,dword ptr [EBP + -0x1c]
005f9e42  MOV dword ptr [EBP + -0x10],EAX
005f9e45  MOV dword ptr [EBP + -0x4],0xffffffff
005f9e4c  MOV ECX,dword ptr [EBP + -0x10]
005f9e4f  MOV dword ptr [EBP + 0x8],ECX
005f9e52  MOV EDX,dword ptr [EBP + 0x8]
005f9e55  PUSH EDX
005f9e56  MOV ECX,dword ptr [EBP + -0x18]
005f9e59  ADD ECX,0x14
005f9e5c  CALL 0x0060c840
005f9e61  MOV EAX,dword ptr [EBP + 0x8]
005f9e64  MOV ECX,dword ptr [EBP + -0x18]
005f9e67  MOV dword ptr [EAX + 0x4],ECX
005f9e6a  MOV EDX,dword ptr [EBP + 0xc]
005f9e6d  PUSH EDX
005f9e6e  MOV EAX,dword ptr [EBP + 0x1c]
005f9e71  PUSH EAX
005f9e72  MOV ECX,dword ptr [EBP + 0x18]
005f9e75  PUSH ECX
005f9e76  MOV EDX,dword ptr [EBP + 0x14]
005f9e79  PUSH EDX
005f9e7a  MOV EAX,dword ptr [EBP + 0x10]
005f9e7d  PUSH EAX
005f9e7e  MOV ECX,dword ptr [EBP + 0x8]
005f9e81  CALL 0x005eae80
005f9e86  CMP dword ptr [EBP + 0x24],-0x1
005f9e8a  JZ 0x005f9eb4
005f9e8c  PUSH 0x0
005f9e8e  PUSH 0x0
005f9e90  MOV ECX,dword ptr [EBP + 0x30]
005f9e93  PUSH ECX
005f9e94  MOV EDX,dword ptr [EBP + 0x2c]
005f9e97  PUSH EDX
005f9e98  MOV EAX,dword ptr [EBP + 0x28]
005f9e9b  PUSH EAX
005f9e9c  MOV ECX,dword ptr [EBP + 0x24]
005f9e9f  PUSH ECX
005f9ea0  MOV EDX,dword ptr [EBP + 0x20]
005f9ea3  PUSH EDX
005f9ea4  MOV EAX,dword ptr [EBP + 0x8]
005f9ea7  MOV EDX,dword ptr [EAX]
005f9ea9  MOV ECX,dword ptr [EBP + 0x8]
005f9eac  MOV EAX,dword ptr [EDX + 0xdc]
005f9eb2  CALL EAX
005f9eb4  MOV CL,byte ptr [EBP + 0x34]
005f9eb7  PUSH ECX
005f9eb8  MOV ECX,dword ptr [EBP + 0x8]
005f9ebb  CALL 0x006026f0
005f9ec0  MOV EDX,dword ptr [EBP + 0x8]
005f9ec3  MOV EAX,dword ptr [EDX]
005f9ec5  MOV ECX,dword ptr [EBP + 0x8]
005f9ec8  MOV EDX,dword ptr [EAX + 0x74]
005f9ecb  CALL EDX
005f9ecd  MOV EAX,dword ptr [EBP + 0x8]
005f9ed0  MOV ECX,dword ptr [EBP + -0xc]
005f9ed3  MOV dword ptr FS:[0x0],ECX
005f9eda  POP ECX
005f9edb  MOV ESP,EBP
005f9edd  POP EBP
005f9ede  RET 0x30
