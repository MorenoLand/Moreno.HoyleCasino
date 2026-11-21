; FUN_00664dd0  00664dd0
00664dd0  PUSH EBP
00664dd1  MOV EBP,ESP
00664dd3  SUB ESP,0x18
00664dd6  MOV dword ptr [EBP + -0x18],ECX
00664dd9  MOV EAX,dword ptr [EBP + 0x8]
00664ddc  PUSH EAX
00664ddd  MOV ECX,dword ptr [EBP + -0x18]
00664de0  CALL 0x00664830
00664de5  MOV dword ptr [EBP + -0x8],EAX
00664de8  MOV ECX,dword ptr [EBP + 0x8]
00664deb  PUSH ECX
00664dec  MOV ECX,dword ptr [EBP + -0x18]
00664def  CALL 0x006647c0
00664df4  MOV dword ptr [EBP + -0x14],EAX
00664df7  MOV EDX,dword ptr [EBP + -0x8]
00664dfa  MOV EAX,dword ptr [EBP + -0x18]
00664dfd  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x5c]
00664e01  CALL 0x005eb4b0
00664e06  MOV dword ptr [EBP + -0xc],EAX
00664e09  MOV ECX,dword ptr [EBP + -0x8]
00664e0c  MOV EDX,dword ptr [EBP + -0x18]
00664e0f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x5c]
00664e13  CALL 0x005f5590
00664e18  MOV dword ptr [EBP + -0x10],EAX
00664e1b  MOV dword ptr [EBP + -0x4],0x1
00664e22  JMP 0x00664e2d
00664e24  MOV EAX,dword ptr [EBP + -0x4]
00664e27  ADD EAX,0x1
00664e2a  MOV dword ptr [EBP + -0x4],EAX
00664e2d  MOV ECX,dword ptr [EBP + -0x4]
00664e30  CMP ECX,dword ptr [EBP + -0x14]
00664e33  JGE 0x00664e8f
00664e35  MOV EDX,dword ptr [EBP + -0x8]
00664e38  ADD EDX,dword ptr [EBP + -0x4]
00664e3b  MOV EAX,dword ptr [EBP + -0x18]
00664e3e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x5c]
00664e42  CALL 0x005eb4b0
00664e47  CMP dword ptr [EBP + -0xc],EAX
00664e4a  JGE 0x00664e61
00664e4c  MOV ECX,dword ptr [EBP + -0x8]
00664e4f  ADD ECX,dword ptr [EBP + -0x4]
00664e52  MOV EDX,dword ptr [EBP + -0x18]
00664e55  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x5c]
00664e59  CALL 0x005eb4b0
00664e5e  MOV dword ptr [EBP + -0xc],EAX
00664e61  MOV EAX,dword ptr [EBP + -0x8]
00664e64  ADD EAX,dword ptr [EBP + -0x4]
00664e67  MOV ECX,dword ptr [EBP + -0x18]
00664e6a  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x5c]
00664e6e  CALL 0x005f5590
00664e73  CMP dword ptr [EBP + -0x10],EAX
00664e76  JGE 0x00664e8d
00664e78  MOV EDX,dword ptr [EBP + -0x8]
00664e7b  ADD EDX,dword ptr [EBP + -0x4]
00664e7e  MOV EAX,dword ptr [EBP + -0x18]
00664e81  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x5c]
00664e85  CALL 0x005f5590
00664e8a  MOV dword ptr [EBP + -0x10],EAX
00664e8d  JMP 0x00664e24
00664e8f  MOV ECX,0x54
00664e94  SUB ECX,dword ptr [EBP + -0xc]
00664e97  SUB ECX,dword ptr [EBP + -0x10]
00664e9a  JNS 0x00664ea0
00664e9c  XOR EAX,EAX
00664e9e  JMP 0x00664eab
00664ea0  MOV EAX,0x54
00664ea5  SUB EAX,dword ptr [EBP + -0xc]
00664ea8  SUB EAX,dword ptr [EBP + -0x10]
00664eab  MOV ESP,EBP
00664ead  POP EBP
00664eae  RET 0x4
