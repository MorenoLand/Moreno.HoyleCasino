; FUN_0053be70  0053be70
0053be70  PUSH EBP
0053be71  MOV EBP,ESP
0053be73  PUSH -0x1
0053be75  PUSH 0x6a4be1
0053be7a  MOV EAX,FS:[0x0]
0053be80  PUSH EAX
0053be81  SUB ESP,0x1c
0053be84  MOV EAX,[0x00781870]
0053be89  XOR EAX,EBP
0053be8b  PUSH EAX
0053be8c  LEA EAX,[EBP + -0xc]
0053be8f  MOV FS:[0x0],EAX
0053be95  MOV dword ptr [EBP + -0x20],ECX
0053be98  MOV EAX,[0x007933f4]
0053be9d  CMP dword ptr [EAX + 0x98],0x0
0053bea4  JZ 0x0053bf56
0053beaa  PUSH 0x7e7
0053beaf  MOV ECX,dword ptr [0x007933f4]
0053beb5  MOV ECX,dword ptr [ECX + 0x98]
0053bebb  CALL 0x005eaf00
0053bec0  PUSH 0x0
0053bec2  MOV EDX,dword ptr [0x007933f4]
0053bec8  MOV EAX,dword ptr [EDX + 0x98]
0053bece  MOV ECX,dword ptr [0x007933f4]
0053bed4  MOV ECX,dword ptr [ECX + 0x98]
0053beda  MOV EDX,dword ptr [EAX]
0053bedc  MOV EAX,dword ptr [EDX + 0xb0]
0053bee2  CALL EAX
0053bee4  MOV ECX,dword ptr [0x007933f4]
0053beea  MOV EDX,dword ptr [ECX + 0x98]
0053bef0  MOV EAX,[0x007933f4]
0053bef5  MOV ECX,dword ptr [EAX + 0x98]
0053befb  MOV EDX,dword ptr [EDX]
0053befd  MOV EAX,dword ptr [EDX + 0x74]
0053bf00  CALL EAX
0053bf02  PUSH 0x20
0053bf04  CALL 0x00686d82
0053bf09  ADD ESP,0x4
0053bf0c  MOV dword ptr [EBP + -0x14],EAX
0053bf0f  MOV dword ptr [EBP + -0x4],0x0
0053bf16  CMP dword ptr [EBP + -0x14],0x0
0053bf1a  JZ 0x0053bf2d
0053bf1c  MOV ECX,dword ptr [EBP + 0x8]
0053bf1f  PUSH ECX
0053bf20  MOV ECX,dword ptr [EBP + -0x14]
0053bf23  CALL 0x006010a0
0053bf28  MOV dword ptr [EBP + -0x24],EAX
0053bf2b  JMP 0x0053bf34
0053bf2d  MOV dword ptr [EBP + -0x24],0x0
0053bf34  MOV EDX,dword ptr [EBP + -0x24]
0053bf37  MOV dword ptr [EBP + -0x10],EDX
0053bf3a  MOV dword ptr [EBP + -0x4],0xffffffff
0053bf41  MOV EAX,dword ptr [EBP + -0x10]
0053bf44  PUSH EAX
0053bf45  MOV ECX,dword ptr [0x007933f4]
0053bf4b  MOV ECX,dword ptr [ECX + 0x98]
0053bf51  CALL 0x005f5d50
0053bf56  MOV EDX,dword ptr [0x007933f4]
0053bf5c  CMP dword ptr [EDX + 0x94],0x0
0053bf63  JZ 0x0053c010
0053bf69  PUSH 0x7e6
0053bf6e  MOV EAX,[0x007933f4]
0053bf73  MOV ECX,dword ptr [EAX + 0x94]
0053bf79  CALL 0x005eaf00
0053bf7e  PUSH 0x0
0053bf80  MOV ECX,dword ptr [0x007933f4]
0053bf86  MOV EDX,dword ptr [ECX + 0x94]
0053bf8c  MOV EAX,[0x007933f4]
0053bf91  MOV ECX,dword ptr [EAX + 0x94]
0053bf97  MOV EDX,dword ptr [EDX]
0053bf99  MOV EAX,dword ptr [EDX + 0xb0]
0053bf9f  CALL EAX
0053bfa1  MOV ECX,dword ptr [0x007933f4]
0053bfa7  MOV EDX,dword ptr [ECX + 0x94]
0053bfad  MOV EAX,[0x007933f4]
0053bfb2  MOV ECX,dword ptr [EAX + 0x94]
0053bfb8  MOV EDX,dword ptr [EDX]
0053bfba  MOV EAX,dword ptr [EDX + 0x74]
0053bfbd  CALL EAX
0053bfbf  PUSH 0x20
0053bfc1  CALL 0x00686d82
0053bfc6  ADD ESP,0x4
0053bfc9  MOV dword ptr [EBP + -0x1c],EAX
0053bfcc  MOV dword ptr [EBP + -0x4],0x1
0053bfd3  CMP dword ptr [EBP + -0x1c],0x0
0053bfd7  JZ 0x0053bfe8
0053bfd9  PUSH 0x0
0053bfdb  MOV ECX,dword ptr [EBP + -0x1c]
0053bfde  CALL 0x006010a0
0053bfe3  MOV dword ptr [EBP + -0x28],EAX
0053bfe6  JMP 0x0053bfef
0053bfe8  MOV dword ptr [EBP + -0x28],0x0
0053bfef  MOV ECX,dword ptr [EBP + -0x28]
0053bff2  MOV dword ptr [EBP + -0x18],ECX
0053bff5  MOV dword ptr [EBP + -0x4],0xffffffff
0053bffc  MOV EDX,dword ptr [EBP + -0x18]
0053bfff  PUSH EDX
0053c000  MOV EAX,[0x007933f4]
0053c005  MOV ECX,dword ptr [EAX + 0x94]
0053c00b  CALL 0x005f5d50
0053c010  MOV ECX,dword ptr [EBP + -0xc]
0053c013  MOV dword ptr FS:[0x0],ECX
0053c01a  POP ECX
0053c01b  MOV ESP,EBP
0053c01d  POP EBP
0053c01e  RET 0x4
