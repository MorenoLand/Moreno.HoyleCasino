; FUN_00549e80  00549e80
00549e80  PUSH EBP
00549e81  MOV EBP,ESP
00549e83  SUB ESP,0x1c
00549e86  MOV dword ptr [EBP + -0x18],ECX
00549e89  MOV dword ptr [EBP + -0x4],0x0
00549e90  MOV dword ptr [EBP + -0x14],0x0
00549e97  MOVZX EAX,byte ptr [EBP + 0xc]
00549e9b  NEG EAX
00549e9d  SBB EAX,EAX
00549e9f  ADD EAX,0x1
00549ea2  MOV dword ptr [EBP + -0x10],EAX
00549ea5  MOV dword ptr [EBP + -0xc],0x0
00549eac  MOV ECX,dword ptr [EBP + -0x10]
00549eaf  MOV dword ptr [EBP + -0x8],ECX
00549eb2  JMP 0x00549ebd
00549eb4  MOV EDX,dword ptr [EBP + -0x8]
00549eb7  ADD EDX,0x1
00549eba  MOV dword ptr [EBP + -0x8],EDX
00549ebd  CMP dword ptr [EBP + -0x8],0x6
00549ec1  JGE 0x00549f3c
00549ec3  MOV EAX,dword ptr [EBP + 0x8]
00549ec6  IMUL EAX,EAX,0xc
00549ec9  MOV ECX,dword ptr [EBP + -0x18]
00549ecc  LEA EDX,[ECX + EAX*0x1 + 0x28]
00549ed0  MOV EAX,dword ptr [EBP + -0x8]
00549ed3  MOVZX ECX,word ptr [EDX + EAX*0x2]
00549ed7  TEST ECX,ECX
00549ed9  JZ 0x00549f37
00549edb  MOV EDX,dword ptr [EBP + 0x8]
00549ede  IMUL EDX,EDX,0xc
00549ee1  MOV EAX,dword ptr [EBP + -0x18]
00549ee4  LEA ECX,[EAX + EDX*0x1 + 0x28]
00549ee8  MOV EDX,dword ptr [EBP + -0x8]
00549eeb  MOV AX,word ptr [ECX + EDX*0x2]
00549eef  PUSH EAX
00549ef0  CALL 0x00641280
00549ef5  ADD ESP,0x4
00549ef8  MOV dword ptr [EBP + -0x14],EAX
00549efb  MOV ECX,dword ptr [EBP + -0x14]
00549efe  MOV dword ptr [EBP + -0x1c],ECX
00549f01  CMP dword ptr [EBP + -0x1c],0xb
00549f05  JL 0x00549f2e
00549f07  CMP dword ptr [EBP + -0x1c],0xd
00549f0b  JLE 0x00549f15
00549f0d  CMP dword ptr [EBP + -0x1c],0xe
00549f11  JZ 0x00549f1e
00549f13  JMP 0x00549f2e
00549f15  MOV dword ptr [EBP + -0x14],0xa
00549f1c  JMP 0x00549f2e
00549f1e  MOV dword ptr [EBP + -0x14],0xb
00549f25  MOV EDX,dword ptr [EBP + -0xc]
00549f28  ADD EDX,0x1
00549f2b  MOV dword ptr [EBP + -0xc],EDX
00549f2e  MOV EAX,dword ptr [EBP + -0x4]
00549f31  ADD EAX,dword ptr [EBP + -0x14]
00549f34  MOV dword ptr [EBP + -0x4],EAX
00549f37  JMP 0x00549eb4
00549f3c  CMP dword ptr [EBP + -0x4],0x15
00549f40  JLE 0x00549f6f
00549f42  MOV dword ptr [EBP + -0x8],0x0
00549f49  JMP 0x00549f54
00549f4b  MOV ECX,dword ptr [EBP + -0x8]
00549f4e  ADD ECX,0x1
00549f51  MOV dword ptr [EBP + -0x8],ECX
00549f54  MOV EDX,dword ptr [EBP + -0x8]
00549f57  CMP EDX,dword ptr [EBP + -0xc]
00549f5a  JGE 0x00549f6f
00549f5c  MOV EAX,dword ptr [EBP + -0x4]
00549f5f  SUB EAX,0xa
00549f62  MOV dword ptr [EBP + -0x4],EAX
00549f65  CMP dword ptr [EBP + -0x4],0x15
00549f69  JG 0x00549f6d
00549f6b  JMP 0x00549f6f
00549f6d  JMP 0x00549f4b
00549f6f  MOV EAX,dword ptr [EBP + -0x4]
00549f72  MOV ESP,EBP
00549f74  POP EBP
00549f75  RET 0x8
