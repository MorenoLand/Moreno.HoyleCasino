; FUN_00536da0  00536da0
00536da0  PUSH EBP
00536da1  MOV EBP,ESP
00536da3  SUB ESP,0x6c
00536da6  PUSH ESI
00536da7  PUSH EDI
00536da8  MOV dword ptr [EBP + -0x6c],ECX
00536dab  MOV dword ptr [EBP + -0x5c],0x0
00536db2  MOV dword ptr [EBP + -0x60],0x0
00536db9  MOV dword ptr [EBP + -0xc],0x0
00536dc0  MOV EAX,[0x00793394]
00536dc5  MOV EDX,dword ptr [EAX]
00536dc7  MOV ECX,dword ptr [0x00793394]
00536dcd  MOV EAX,dword ptr [EDX + 0x64]
00536dd0  CALL EAX
00536dd2  MOV dword ptr [EBP + -0x58],EAX
00536dd5  MOV dword ptr [EBP + -0x40],0xffffffff
00536ddc  MOV dword ptr [EBP + -0x54],0x0
00536de3  MOV ECX,dword ptr [EBP + -0x6c]
00536de6  MOV EDX,dword ptr [ECX + 0x8]
00536de9  MOV dword ptr [EBP + -0x50],EDX
00536dec  MOV dword ptr [EBP + -0x10],0x0
00536df3  MOV byte ptr [EBP + -0x11],0x0
00536df7  MOV EAX,dword ptr [EBP + 0x8]
00536dfa  MOV dword ptr [EBP + -0x4c],EAX
00536dfd  MOV ECX,dword ptr [EBP + 0xc]
00536e00  MOV dword ptr [EBP + -0x48],ECX
00536e03  MOV EDX,dword ptr [EBP + 0x10]
00536e06  MOV dword ptr [EBP + -0x44],EDX
00536e09  MOV byte ptr [EBP + -0x8],0x0
00536e0d  MOV byte ptr [EBP + -0x7],0x0
00536e11  MOV byte ptr [EBP + -0x6],0x0
00536e15  MOV dword ptr [EBP + -0xc],0x0
00536e1c  JMP 0x00536e27
00536e1e  MOV EAX,dword ptr [EBP + -0xc]
00536e21  ADD EAX,0x1
00536e24  MOV dword ptr [EBP + -0xc],EAX
00536e27  CMP dword ptr [EBP + -0xc],0x3
00536e2b  JGE 0x00536e52
00536e2d  MOV ECX,dword ptr [EBP + -0xc]
00536e30  ADD ECX,0x1
00536e33  XOR EDX,EDX
00536e35  CMP dword ptr [EBP + -0x50],ECX
00536e38  SETGE DL
00536e3b  MOV EAX,dword ptr [EBP + -0xc]
00536e3e  MOV byte ptr [EBP + EAX*0x1 + -0x64],DL
00536e42  MOV ECX,dword ptr [EBP + -0xc]
00536e45  MOV dword ptr [ECX*0x4 + 0x7933c4],0xffffffff
00536e50  JMP 0x00536e1e
00536e52  MOV EDX,dword ptr [EBP + -0x6c]
00536e55  MOV EAX,dword ptr [EDX + 0x8]
00536e58  MOV dword ptr [EBP + -0x60],EAX
00536e5b  MOV dword ptr [EBP + -0x68],0x0
00536e62  JMP 0x00536e6d
00536e64  MOV ECX,dword ptr [EBP + -0x68]
00536e67  ADD ECX,0x1
00536e6a  MOV dword ptr [EBP + -0x68],ECX
00536e6d  CMP dword ptr [EBP + -0x68],0x3
00536e71  JGE 0x00537043
00536e77  MOV EDX,dword ptr [EBP + -0x68]
00536e7a  MOV EAX,dword ptr [EBP + EDX*0x4 + -0x4c]
00536e7e  MOV dword ptr [EBP + -0x54],EAX
00536e81  MOV ECX,dword ptr [EBP + -0x68]
00536e84  MOVZX EDX,byte ptr [EBP + ECX*0x1 + -0x64]
00536e89  TEST EDX,EDX
00536e8b  JZ 0x0053703e
00536e91  MOV dword ptr [EBP + -0xc],0x0
00536e98  MOV EAX,dword ptr [EBP + -0x68]
00536e9b  CMP dword ptr [EAX*0x4 + 0x7933c4],-0x1
00536ea3  JNZ 0x0053703e
00536ea9  MOV ECX,dword ptr [EBP + -0xc]
00536eac  CMP ECX,dword ptr [EBP + -0x58]
00536eaf  JGE 0x0053703e
00536eb5  MOV EDX,dword ptr [EBP + -0x54]
00536eb8  PUSH EDX
00536eb9  MOV EAX,dword ptr [EBP + -0xc]
00536ebc  PUSH EAX
00536ebd  MOV ECX,dword ptr [0x00793394]
00536ec3  MOV EDX,dword ptr [ECX]
00536ec5  MOV ECX,dword ptr [0x00793394]
00536ecb  MOV EAX,dword ptr [EDX + 0x68]
00536ece  CALL EAX
00536ed0  PUSH EAX
00536ed1  MOV ECX,dword ptr [EBP + -0x6c]
00536ed4  CALL 0x00537e60
00536ed9  MOV dword ptr [EBP + -0x40],EAX
00536edc  CMP dword ptr [EBP + -0x40],-0x1
00536ee0  JZ 0x00537030
00536ee6  MOV ECX,dword ptr [EBP + -0xc]
00536ee9  PUSH ECX
00536eea  MOV EDX,dword ptr [0x00793394]
00536ef0  MOV EAX,dword ptr [EDX]
00536ef2  MOV ECX,dword ptr [0x00793394]
00536ef8  MOV EDX,dword ptr [EAX + 0x68]
00536efb  CALL EDX
00536efd  MOV ECX,0xa
00536f02  MOV ESI,EAX
00536f04  LEA EDI,[EBP + -0x3c]
00536f07  MOVSD.REP ES:EDI,ESI
00536f09  MOV EAX,dword ptr [EBP + -0x68]
00536f0c  MOV ECX,dword ptr [EBP + -0x6c]
00536f0f  MOV EDX,dword ptr [EBP + -0x18]
00536f12  MOV dword ptr [ECX + EAX*0x4 + 0x64],EDX
00536f16  MOV EAX,dword ptr [EBP + -0x6c]
00536f19  ADD EAX,dword ptr [EBP + -0x68]
00536f1c  MOV byte ptr [EAX + 0x10],0x1
00536f20  CMP dword ptr [EBP + -0x40],0x0
00536f24  JNZ 0x00536f35
00536f26  MOV ECX,dword ptr [EBP + -0x6c]
00536f29  MOV byte ptr [ECX + 0x7c],0x1
00536f2d  MOV EDX,dword ptr [EBP + -0x68]
00536f30  MOV byte ptr [EBP + EDX*0x1 + -0x8],0x1
00536f35  MOV EAX,dword ptr [EBP + -0x6c]
00536f38  MOVZX ECX,byte ptr [EAX + 0x7c]
00536f3c  TEST ECX,ECX
00536f3e  JZ 0x00536fbc
00536f40  MOV EDX,dword ptr [0x00793394]
00536f46  MOV EAX,dword ptr [EDX]
00536f48  MOV ECX,dword ptr [0x00793394]
00536f4e  MOV EDX,dword ptr [EAX + 0x3c]
00536f51  CALL EDX
00536f53  MOVZX EAX,AL
00536f56  TEST EAX,EAX
00536f58  JZ 0x00536fbc
00536f5a  MOV ECX,dword ptr [EBP + -0x6c]
00536f5d  CALL 0x00538440
00536f62  MOVZX ECX,AL
00536f65  TEST ECX,ECX
00536f67  JNZ 0x00536f8a
00536f69  CMP dword ptr [EBP + -0x60],0x3
00536f6d  JNZ 0x00536fbc
00536f6f  MOV EDX,dword ptr [EBP + -0x68]
00536f72  MOVZX EAX,byte ptr [EBP + EDX*0x1 + -0x8]
00536f77  CMP EAX,0x1
00536f7a  JNZ 0x00536fbc
00536f7c  CMP dword ptr [EBP + -0x68],0x2
00536f80  JNZ 0x00536fbc
00536f82  MOVZX ECX,byte ptr [EBP + -0x11]
00536f86  TEST ECX,ECX
00536f88  JNZ 0x00536fbc
00536f8a  MOV ECX,dword ptr [EBP + -0x6c]
00536f8d  CALL 0x00538440
00536f92  MOVZX EDX,AL
00536f95  TEST EDX,EDX
00536f97  JZ 0x00536fa2
00536f99  MOV EAX,dword ptr [EBP + -0x5c]
00536f9c  SUB EAX,0x64
00536f9f  MOV dword ptr [EBP + -0x5c],EAX
00536fa2  MOV ECX,dword ptr [EBP + -0x6c]
00536fa5  CALL 0x005374b0
00536faa  MOV dword ptr [EBP + -0x10],EAX
00536fad  MOV ECX,dword ptr [EBP + -0x5c]
00536fb0  ADD ECX,dword ptr [EBP + -0x10]
00536fb3  MOV dword ptr [EBP + -0x5c],ECX
00536fb6  MOV byte ptr [EBP + -0x11],0x1
00536fba  JMP 0x00537023
00536fbc  CMP dword ptr [EBP + -0x40],0x0
00536fc0  JNZ 0x00536fe5
00536fc2  MOV EDX,dword ptr [EBP + -0x40]
00536fc5  PUSH EDX
00536fc6  MOV EAX,dword ptr [EBP + -0x68]
00536fc9  ADD EAX,0x1
00536fcc  PUSH EAX
00536fcd  MOV ECX,dword ptr [0x00793394]
00536fd3  MOV EDX,dword ptr [ECX]
00536fd5  MOV ECX,dword ptr [0x00793394]
00536fdb  MOV EAX,dword ptr [EDX + 0x5c]
00536fde  CALL EAX
00536fe0  MOV dword ptr [EBP + -0x4],EAX
00536fe3  JMP 0x00537002
00536fe5  MOV ECX,dword ptr [EBP + -0x40]
00536fe8  PUSH ECX
00536fe9  MOV EDX,dword ptr [EBP + -0x60]
00536fec  PUSH EDX
00536fed  MOV EAX,[0x00793394]
00536ff2  MOV EDX,dword ptr [EAX]
00536ff4  MOV ECX,dword ptr [0x00793394]
00536ffa  MOV EAX,dword ptr [EDX + 0x5c]
00536ffd  CALL EAX
00536fff  MOV dword ptr [EBP + -0x4],EAX
00537002  MOV ECX,dword ptr [EBP + -0xc]
00537005  PUSH ECX
00537006  MOV EDX,dword ptr [0x00793394]
0053700c  MOV EAX,dword ptr [EDX]
0053700e  MOV ECX,dword ptr [0x00793394]
00537014  MOV EDX,dword ptr [EAX + 0x60]
00537017  CALL EDX
00537019  IMUL EAX,dword ptr [EBP + -0x4]
0053701d  ADD EAX,dword ptr [EBP + -0x5c]
00537020  MOV dword ptr [EBP + -0x5c],EAX
00537023  MOV EAX,dword ptr [EBP + -0x68]
00537026  MOV ECX,dword ptr [EBP + -0x40]
00537029  MOV dword ptr [EAX*0x4 + 0x7933c4],ECX
00537030  MOV EDX,dword ptr [EBP + -0xc]
00537033  ADD EDX,0x1
00537036  MOV dword ptr [EBP + -0xc],EDX
00537039  JMP 0x00536e98
0053703e  JMP 0x00536e64
00537043  MOV EAX,dword ptr [EBP + -0x5c]
00537046  POP EDI
00537047  POP ESI
00537048  MOV ESP,EBP
0053704a  POP EBP
0053704b  RET 0xc
