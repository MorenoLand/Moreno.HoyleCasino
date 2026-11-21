; FUN_005d4cf0  005d4cf0
005d4cf0  PUSH EBP
005d4cf1  MOV EBP,ESP
005d4cf3  PUSH -0x1
005d4cf5  PUSH 0x6a8fe8
005d4cfa  MOV EAX,FS:[0x0]
005d4d00  PUSH EAX
005d4d01  SUB ESP,0x50
005d4d04  MOV EAX,[0x00781870]
005d4d09  XOR EAX,EBP
005d4d0b  PUSH EAX
005d4d0c  LEA EAX,[EBP + -0xc]
005d4d0f  MOV FS:[0x0],EAX
005d4d15  MOV dword ptr [EBP + -0x5c],ECX
005d4d18  MOV ECX,dword ptr [EBP + -0x5c]
005d4d1b  CALL 0x0063a0c0
005d4d20  MOV dword ptr [EBP + -0x4],0x0
005d4d27  MOV EAX,dword ptr [EBP + -0x5c]
005d4d2a  MOV dword ptr [EAX],0x6d3ce4
005d4d30  MOV ECX,dword ptr [EBP + -0x5c]
005d4d33  MOV dword ptr [ECX + 0x49c],0x0
005d4d3d  MOV dword ptr [EBP + -0x10],0x0
005d4d44  JMP 0x005d4d4f
005d4d46  MOV EDX,dword ptr [EBP + -0x10]
005d4d49  ADD EDX,0x1
005d4d4c  MOV dword ptr [EBP + -0x10],EDX
005d4d4f  CMP dword ptr [EBP + -0x10],0x1e
005d4d53  JGE 0x005d4d79
005d4d55  MOV EAX,dword ptr [EBP + -0x10]
005d4d58  MOV ECX,dword ptr [EBP + -0x5c]
005d4d5b  MOV dword ptr [ECX + EAX*0x4 + 0x3ac],0x0
005d4d66  MOV EDX,dword ptr [EBP + -0x10]
005d4d69  MOV EAX,dword ptr [EBP + -0x5c]
005d4d6c  MOV dword ptr [EAX + EDX*0x4 + 0x424],0x0
005d4d77  JMP 0x005d4d46
005d4d79  MOV ECX,dword ptr [EBP + -0x5c]
005d4d7c  MOV byte ptr [ECX + 0x4a0],0x0
005d4d83  MOV EDX,dword ptr [EBP + -0x5c]
005d4d86  MOV byte ptr [EDX + 0x4a1],0x0
005d4d8d  MOV EAX,dword ptr [EBP + -0x5c]
005d4d90  MOV byte ptr [EAX + 0x4a2],0x0
005d4d97  MOV ECX,dword ptr [EBP + -0x5c]
005d4d9a  MOV dword ptr [ECX + 0x4a4],0x0
005d4da4  MOV EDX,dword ptr [EBP + -0x5c]
005d4da7  MOV dword ptr [EDX + 0x4a8],0x0
005d4db1  MOV EAX,dword ptr [EBP + -0x5c]
005d4db4  MOV dword ptr [EAX + 0x4ac],0x1
005d4dbe  MOV ECX,dword ptr [EBP + -0x5c]
005d4dc1  MOV byte ptr [ECX + 0x4b0],0x0
005d4dc8  MOV EDX,dword ptr [EBP + -0x5c]
005d4dcb  MOV byte ptr [EDX + 0x4b1],0x0
005d4dd2  PUSH 0x0
005d4dd4  PUSH 0x0
005d4dd6  CALL 0x0064c8a0
005d4ddb  ADD ESP,0x8
005d4dde  MOV dword ptr [EBP + -0x18],EAX
005d4de1  MOV dword ptr [EBP + -0x14],EDX
005d4de4  MOV EAX,dword ptr [EBP + -0x5c]
005d4de7  MOV ECX,dword ptr [EBP + -0x18]
005d4dea  MOV dword ptr [EAX + 0x4ec],ECX
005d4df0  MOV EDX,dword ptr [EBP + -0x14]
005d4df3  MOV dword ptr [EAX + 0x4f0],EDX
005d4df9  PUSH 0x0
005d4dfb  PUSH 0x0
005d4dfd  CALL 0x0064c8a0
005d4e02  ADD ESP,0x8
005d4e05  MOV dword ptr [EBP + -0x20],EAX
005d4e08  MOV dword ptr [EBP + -0x1c],EDX
005d4e0b  MOV EAX,dword ptr [EBP + -0x5c]
005d4e0e  MOV ECX,dword ptr [EBP + -0x20]
005d4e11  MOV dword ptr [EAX + 0x4e4],ECX
005d4e17  MOV EDX,dword ptr [EBP + -0x1c]
005d4e1a  MOV dword ptr [EAX + 0x4e8],EDX
005d4e20  PUSH 0x0
005d4e22  PUSH 0x0
005d4e24  CALL 0x0064c8a0
005d4e29  ADD ESP,0x8
005d4e2c  MOV dword ptr [EBP + -0x28],EAX
005d4e2f  MOV dword ptr [EBP + -0x24],EDX
005d4e32  MOV EAX,dword ptr [EBP + -0x5c]
005d4e35  MOV ECX,dword ptr [EBP + -0x28]
005d4e38  MOV dword ptr [EAX + 0x4b4],ECX
005d4e3e  MOV EDX,dword ptr [EBP + -0x24]
005d4e41  MOV dword ptr [EAX + 0x4b8],EDX
005d4e47  PUSH 0x0
005d4e49  PUSH 0x0
005d4e4b  CALL 0x0064c8a0
005d4e50  ADD ESP,0x8
005d4e53  MOV dword ptr [EBP + -0x30],EAX
005d4e56  MOV dword ptr [EBP + -0x2c],EDX
005d4e59  MOV EAX,dword ptr [EBP + -0x5c]
005d4e5c  MOV ECX,dword ptr [EBP + -0x30]
005d4e5f  MOV dword ptr [EAX + 0x4bc],ECX
005d4e65  MOV EDX,dword ptr [EBP + -0x2c]
005d4e68  MOV dword ptr [EAX + 0x4c0],EDX
005d4e6e  PUSH 0x0
005d4e70  PUSH 0x0
005d4e72  CALL 0x0064c8a0
005d4e77  ADD ESP,0x8
005d4e7a  MOV dword ptr [EBP + -0x38],EAX
005d4e7d  MOV dword ptr [EBP + -0x34],EDX
005d4e80  MOV EAX,dword ptr [EBP + -0x5c]
005d4e83  MOV ECX,dword ptr [EBP + -0x38]
005d4e86  MOV dword ptr [EAX + 0x4d4],ECX
005d4e8c  MOV EDX,dword ptr [EBP + -0x34]
005d4e8f  MOV dword ptr [EAX + 0x4d8],EDX
005d4e95  PUSH 0x0
005d4e97  PUSH 0x0
005d4e99  CALL 0x0064c8a0
005d4e9e  ADD ESP,0x8
005d4ea1  MOV dword ptr [EBP + -0x40],EAX
005d4ea4  MOV dword ptr [EBP + -0x3c],EDX
005d4ea7  MOV EAX,dword ptr [EBP + -0x5c]
005d4eaa  MOV ECX,dword ptr [EBP + -0x40]
005d4ead  MOV dword ptr [EAX + 0x4dc],ECX
005d4eb3  MOV EDX,dword ptr [EBP + -0x3c]
005d4eb6  MOV dword ptr [EAX + 0x4e0],EDX
005d4ebc  PUSH 0x0
005d4ebe  PUSH 0x0
005d4ec0  CALL 0x0064c8a0
005d4ec5  ADD ESP,0x8
005d4ec8  MOV dword ptr [EBP + -0x48],EAX
005d4ecb  MOV dword ptr [EBP + -0x44],EDX
005d4ece  MOV EAX,dword ptr [EBP + -0x5c]
005d4ed1  MOV ECX,dword ptr [EBP + -0x48]
005d4ed4  MOV dword ptr [EAX + 0x4c4],ECX
005d4eda  MOV EDX,dword ptr [EBP + -0x44]
005d4edd  MOV dword ptr [EAX + 0x4c8],EDX
005d4ee3  PUSH 0x0
005d4ee5  PUSH 0x0
005d4ee7  CALL 0x0064c8a0
005d4eec  ADD ESP,0x8
005d4eef  MOV dword ptr [EBP + -0x50],EAX
005d4ef2  MOV dword ptr [EBP + -0x4c],EDX
005d4ef5  MOV EAX,dword ptr [EBP + -0x5c]
005d4ef8  MOV ECX,dword ptr [EBP + -0x50]
005d4efb  MOV dword ptr [EAX + 0x4cc],ECX
005d4f01  MOV EDX,dword ptr [EBP + -0x4c]
005d4f04  MOV dword ptr [EAX + 0x4d0],EDX
005d4f0a  PUSH 0x0
005d4f0c  PUSH 0x0
005d4f0e  CALL 0x0064c8a0
005d4f13  ADD ESP,0x8
005d4f16  MOV dword ptr [EBP + -0x58],EAX
005d4f19  MOV dword ptr [EBP + -0x54],EDX
005d4f1c  MOV EAX,dword ptr [EBP + -0x5c]
005d4f1f  MOV ECX,dword ptr [EBP + -0x58]
005d4f22  MOV dword ptr [EAX + 0x4d4],ECX
005d4f28  MOV EDX,dword ptr [EBP + -0x54]
005d4f2b  MOV dword ptr [EAX + 0x4d8],EDX
005d4f31  MOV dword ptr [EBP + -0x4],0xffffffff
005d4f38  MOV EAX,dword ptr [EBP + -0x5c]
005d4f3b  MOV ECX,dword ptr [EBP + -0xc]
005d4f3e  MOV dword ptr FS:[0x0],ECX
005d4f45  POP ECX
005d4f46  MOV ESP,EBP
005d4f48  POP EBP
005d4f49  RET
