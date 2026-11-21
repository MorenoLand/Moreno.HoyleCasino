; FUN_005c0f40  005c0f40
005c0f40  PUSH EBP
005c0f41  MOV EBP,ESP
005c0f43  PUSH -0x1
005c0f45  PUSH 0x6a8477
005c0f4a  MOV EAX,FS:[0x0]
005c0f50  PUSH EAX
005c0f51  SUB ESP,0x90
005c0f57  MOV EAX,[0x00781870]
005c0f5c  XOR EAX,EBP
005c0f5e  PUSH EAX
005c0f5f  LEA EAX,[EBP + -0xc]
005c0f62  MOV FS:[0x0],EAX
005c0f68  MOV dword ptr [EBP + 0xffffff6c],ECX
005c0f6e  PUSH 0x0
005c0f70  MOV EAX,dword ptr [EBP + 0xc]
005c0f73  PUSH EAX
005c0f74  MOV ECX,dword ptr [EBP + 0xffffff6c]
005c0f7a  ADD ECX,0x28
005c0f7d  CALL 0x005c49f0
005c0f82  MOV dword ptr [EBP + -0x10],0x0
005c0f89  JMP 0x005c0f94
005c0f8b  MOV ECX,dword ptr [EBP + -0x10]
005c0f8e  ADD ECX,0x1
005c0f91  MOV dword ptr [EBP + -0x10],ECX
005c0f94  MOV EDX,dword ptr [EBP + -0x10]
005c0f97  CMP EDX,dword ptr [EBP + 0xc]
005c0f9a  JGE 0x005c1092
005c0fa0  PUSH 0x178
005c0fa5  CALL 0x00686d82
005c0faa  ADD ESP,0x4
005c0fad  MOV dword ptr [EBP + -0x1c],EAX
005c0fb0  MOV dword ptr [EBP + -0x4],0x0
005c0fb7  CMP dword ptr [EBP + -0x1c],0x0
005c0fbb  JZ 0x005c0fcd
005c0fbd  MOV ECX,dword ptr [EBP + -0x1c]
005c0fc0  CALL 0x005eaaf0
005c0fc5  MOV dword ptr [EBP + 0xffffff68],EAX
005c0fcb  JMP 0x005c0fd7
005c0fcd  MOV dword ptr [EBP + 0xffffff68],0x0
005c0fd7  MOV EAX,dword ptr [EBP + 0xffffff68]
005c0fdd  MOV dword ptr [EBP + -0x18],EAX
005c0fe0  MOV dword ptr [EBP + -0x4],0xffffffff
005c0fe7  MOV ECX,dword ptr [EBP + -0x18]
005c0fea  MOV dword ptr [EBP + -0x14],ECX
005c0fed  PUSH -0x1
005c0fef  MOV EDX,dword ptr [EBP + 0x14]
005c0ff2  ADD EDX,dword ptr [EBP + -0x10]
005c0ff5  PUSH EDX
005c0ff6  MOV EAX,dword ptr [EBP + 0x10]
005c0ff9  MOV ECX,dword ptr [EAX + 0x4]
005c0ffc  PUSH ECX
005c0ffd  MOV EDX,dword ptr [EBP + 0x10]
005c1000  MOV EAX,dword ptr [EDX]
005c1002  PUSH EAX
005c1003  MOV ECX,dword ptr [EBP + 0x8]
005c1006  PUSH ECX
005c1007  MOV ECX,dword ptr [EBP + -0x14]
005c100a  CALL 0x005eae80
005c100f  MOV EDX,dword ptr [EBP + -0x10]
005c1012  PUSH EDX
005c1013  MOV ECX,dword ptr [EBP + -0x14]
005c1016  CALL 0x005eb000
005c101b  MOV EAX,dword ptr [EBP + -0x14]
005c101e  MOV EDX,dword ptr [EAX]
005c1020  MOV ECX,dword ptr [EBP + -0x14]
005c1023  MOV EAX,dword ptr [EDX + 0x74]
005c1026  CALL EAX
005c1028  MOV ECX,dword ptr [EBP + 0xffffff6c]
005c102e  ADD ECX,0x28
005c1031  MOV dword ptr [EBP + 0xffffff70],ECX
005c1037  MOV EDX,dword ptr [EBP + 0xffffff70]
005c103d  CMP dword ptr [EDX + 0x4],0x0
005c1041  JNZ 0x005c104f
005c1043  MOV dword ptr [EBP + 0xffffff64],0x0
005c104d  JMP 0x005c106a
005c104f  MOV EAX,dword ptr [EBP + 0xffffff70]
005c1055  MOV ECX,dword ptr [EBP + 0xffffff70]
005c105b  MOV EDX,dword ptr [EAX + 0x8]
005c105e  SUB EDX,dword ptr [ECX + 0x4]
005c1061  SAR EDX,0x2
005c1064  MOV dword ptr [EBP + 0xffffff64],EDX
005c106a  MOV EAX,dword ptr [EBP + -0x10]
005c106d  CMP EAX,dword ptr [EBP + 0xffffff64]
005c1073  JC 0x005c107b
005c1075  CALL dword ptr [0x006b2274]
005c107b  MOV ECX,dword ptr [EBP + 0xffffff70]
005c1081  MOV EDX,dword ptr [ECX + 0x4]
005c1084  MOV EAX,dword ptr [EBP + -0x10]
005c1087  MOV ECX,dword ptr [EBP + -0x14]
005c108a  MOV dword ptr [EDX + EAX*0x4],ECX
005c108d  JMP 0x005c0f8b
005c1092  MOV ECX,dword ptr [EBP + -0xc]
005c1095  MOV dword ptr FS:[0x0],ECX
005c109c  POP ECX
005c109d  MOV ESP,EBP
005c109f  POP EBP
005c10a0  RET 0x10
