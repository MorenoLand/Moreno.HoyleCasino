; FUN_0060be20  0060be20
0060be20  PUSH EBP
0060be21  MOV EBP,ESP
0060be23  PUSH -0x1
0060be25  PUSH 0x6aad0c
0060be2a  MOV EAX,FS:[0x0]
0060be30  PUSH EAX
0060be31  SUB ESP,0x1c
0060be34  MOV EAX,[0x00781870]
0060be39  XOR EAX,EBP
0060be3b  PUSH EAX
0060be3c  LEA EAX,[EBP + -0xc]
0060be3f  MOV FS:[0x0],EAX
0060be45  MOV dword ptr [EBP + -0x20],ECX
0060be48  MOV EAX,dword ptr [EBP + 0x34]
0060be4b  PUSH EAX
0060be4c  MOV ECX,dword ptr [EBP + 0x30]
0060be4f  PUSH ECX
0060be50  MOV EDX,dword ptr [EBP + 0x2c]
0060be53  ADD EDX,0x1
0060be56  PUSH EDX
0060be57  MOV EAX,dword ptr [EBP + 0x10]
0060be5a  ADD EAX,dword ptr [EBP + 0x28]
0060be5d  PUSH EAX
0060be5e  MOV ECX,dword ptr [EBP + 0xc]
0060be61  ADD ECX,dword ptr [EBP + 0x24]
0060be64  PUSH ECX
0060be65  MOV EDX,dword ptr [EBP + 0x20]
0060be68  PUSH EDX
0060be69  MOV EAX,dword ptr [EBP + 0x1c]
0060be6c  PUSH EAX
0060be6d  MOV ECX,dword ptr [EBP + 0x14]
0060be70  PUSH ECX
0060be71  MOV EDX,dword ptr [EBP + 0x18]
0060be74  PUSH EDX
0060be75  MOV ECX,dword ptr [EBP + -0x20]
0060be78  CALL 0x005ec8f0
0060be7d  MOV EAX,dword ptr [EBP + -0x20]
0060be80  CMP dword ptr [EAX + 0x1dc],0x0
0060be87  JNZ 0x0060bed9
0060be89  CMP dword ptr [EBP + 0x8],0x0
0060be8d  JZ 0x0060bed9
0060be8f  PUSH 0x178
0060be94  CALL 0x00686d82
0060be99  ADD ESP,0x4
0060be9c  MOV dword ptr [EBP + -0x14],EAX
0060be9f  MOV dword ptr [EBP + -0x4],0x0
0060bea6  CMP dword ptr [EBP + -0x14],0x0
0060beaa  JZ 0x0060beb9
0060beac  MOV ECX,dword ptr [EBP + -0x14]
0060beaf  CALL 0x005eaaf0
0060beb4  MOV dword ptr [EBP + -0x24],EAX
0060beb7  JMP 0x0060bec0
0060beb9  MOV dword ptr [EBP + -0x24],0x0
0060bec0  MOV ECX,dword ptr [EBP + -0x24]
0060bec3  MOV dword ptr [EBP + -0x10],ECX
0060bec6  MOV dword ptr [EBP + -0x4],0xffffffff
0060becd  MOV EDX,dword ptr [EBP + -0x20]
0060bed0  MOV EAX,dword ptr [EBP + -0x10]
0060bed3  MOV dword ptr [EDX + 0x1dc],EAX
0060bed9  MOV ECX,dword ptr [EBP + -0x20]
0060bedc  CMP dword ptr [ECX + 0x1dc],0x0
0060bee3  JZ 0x0060bf17
0060bee5  MOV EDX,dword ptr [EBP + -0x20]
0060bee8  MOV EAX,dword ptr [EDX + 0x1dc]
0060beee  MOV ECX,dword ptr [EBP + -0x20]
0060bef1  MOV EDX,dword ptr [ECX + 0x4]
0060bef4  MOV dword ptr [EAX + 0x4],EDX
0060bef7  PUSH -0x1
0060bef9  MOV EAX,dword ptr [EBP + 0x2c]
0060befc  PUSH EAX
0060befd  MOV ECX,dword ptr [EBP + 0x10]
0060bf00  PUSH ECX
0060bf01  MOV EDX,dword ptr [EBP + 0xc]
0060bf04  PUSH EDX
0060bf05  MOV EAX,dword ptr [EBP + 0x8]
0060bf08  PUSH EAX
0060bf09  MOV ECX,dword ptr [EBP + -0x20]
0060bf0c  MOV ECX,dword ptr [ECX + 0x1dc]
0060bf12  CALL 0x005eae80
0060bf17  MOV EDX,dword ptr [EBP + -0x20]
0060bf1a  CMP dword ptr [EDX + 0x1e0],0x0
0060bf21  JNZ 0x0060bf70
0060bf23  CMP dword ptr [EBP + 0x8],0x0
0060bf27  JNZ 0x0060bf70
0060bf29  PUSH 0x5c
0060bf2b  CALL 0x00686d82
0060bf30  ADD ESP,0x4
0060bf33  MOV dword ptr [EBP + -0x1c],EAX
0060bf36  MOV dword ptr [EBP + -0x4],0x1
0060bf3d  CMP dword ptr [EBP + -0x1c],0x0
0060bf41  JZ 0x0060bf50
0060bf43  MOV ECX,dword ptr [EBP + -0x1c]
0060bf46  CALL 0x005f6130
0060bf4b  MOV dword ptr [EBP + -0x28],EAX
0060bf4e  JMP 0x0060bf57
0060bf50  MOV dword ptr [EBP + -0x28],0x0
0060bf57  MOV EAX,dword ptr [EBP + -0x28]
0060bf5a  MOV dword ptr [EBP + -0x18],EAX
0060bf5d  MOV dword ptr [EBP + -0x4],0xffffffff
0060bf64  MOV ECX,dword ptr [EBP + -0x20]
0060bf67  MOV EDX,dword ptr [EBP + -0x18]
0060bf6a  MOV dword ptr [ECX + 0x1e0],EDX
0060bf70  MOV EAX,dword ptr [EBP + -0x20]
0060bf73  CMP dword ptr [EAX + 0x1e0],0x0
0060bf7a  JZ 0x0060bfd2
0060bf7c  MOV ECX,dword ptr [EBP + -0x20]
0060bf7f  MOV EDX,dword ptr [ECX + 0x1e0]
0060bf85  MOV EAX,dword ptr [EBP + -0x20]
0060bf88  MOV ECX,dword ptr [EAX + 0x4]
0060bf8b  MOV dword ptr [EDX + 0x4],ECX
0060bf8e  PUSH -0x1
0060bf90  MOV EDX,dword ptr [EBP + 0x2c]
0060bf93  PUSH EDX
0060bf94  MOV EAX,dword ptr [EBP + 0x28]
0060bf97  SUB EAX,0x3
0060bf9a  PUSH EAX
0060bf9b  MOV ECX,dword ptr [EBP + 0x24]
0060bf9e  SUB ECX,0x5
0060bfa1  PUSH ECX
0060bfa2  MOV EDX,dword ptr [EBP + 0x20]
0060bfa5  ADD EDX,0x6
0060bfa8  PUSH EDX
0060bfa9  MOV EAX,dword ptr [EBP + 0x1c]
0060bfac  ADD EAX,0xa
0060bfaf  PUSH EAX
0060bfb0  MOV ECX,dword ptr [EBP + -0x20]
0060bfb3  MOV ECX,dword ptr [ECX + 0x1e0]
0060bfb9  CALL 0x005f61d0
0060bfbe  PUSH 0x0
0060bfc0  PUSH 0x0
0060bfc2  PUSH 0x0
0060bfc4  MOV EDX,dword ptr [EBP + -0x20]
0060bfc7  MOV ECX,dword ptr [EDX + 0x1e0]
0060bfcd  CALL 0x005f6490
0060bfd2  MOV ECX,dword ptr [EBP + -0xc]
0060bfd5  MOV dword ptr FS:[0x0],ECX
0060bfdc  POP ECX
0060bfdd  MOV ESP,EBP
0060bfdf  POP EBP
0060bfe0  RET 0x30
