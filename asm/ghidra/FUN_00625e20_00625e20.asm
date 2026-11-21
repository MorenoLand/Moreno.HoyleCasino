; FUN_00625e20  00625e20
00625e20  PUSH EBP
00625e21  MOV EBP,ESP
00625e23  SUB ESP,0x14
00625e26  MOV dword ptr [EBP + -0x14],ECX
00625e29  MOV EAX,dword ptr [EBP + -0x14]
00625e2c  MOV ECX,dword ptr [EBP + 0x8]
00625e2f  SUB ECX,dword ptr [EAX + 0x10]
00625e32  MOV dword ptr [EBP + -0x8],ECX
00625e35  MOV EDX,dword ptr [EBP + -0x14]
00625e38  MOV EAX,dword ptr [EBP + 0xc]
00625e3b  SUB EAX,dword ptr [EDX + 0x14]
00625e3e  MOV dword ptr [EBP + -0x4],EAX
00625e41  MOV ECX,dword ptr [EBP + 0xc]
00625e44  PUSH ECX
00625e45  MOV EDX,dword ptr [EBP + 0x8]
00625e48  PUSH EDX
00625e49  MOV ECX,dword ptr [EBP + -0x14]
00625e4c  CALL 0x005ff510
00625e51  MOV EAX,dword ptr [EBP + -0x14]
00625e54  MOVZX ECX,byte ptr [EAX + 0x21d]
00625e5b  TEST ECX,ECX
00625e5d  JNZ 0x00625e61
00625e5f  JMP 0x00625ed4
00625e61  MOV dword ptr [EBP + -0xc],0x0
00625e68  JMP 0x00625e73
00625e6a  MOV EDX,dword ptr [EBP + -0xc]
00625e6d  ADD EDX,0x1
00625e70  MOV dword ptr [EBP + -0xc],EDX
00625e73  MOV EAX,dword ptr [EBP + -0x14]
00625e76  MOV ECX,dword ptr [EAX + 0x210]
00625e7c  CALL 0x0060c9a0
00625e81  CMP dword ptr [EBP + -0xc],EAX
00625e84  JGE 0x00625ed4
00625e86  MOV ECX,dword ptr [EBP + -0xc]
00625e89  PUSH ECX
00625e8a  MOV EDX,dword ptr [EBP + -0x14]
00625e8d  MOV ECX,dword ptr [EDX + 0x210]
00625e93  CALL 0x0060ca40
00625e98  MOV dword ptr [EBP + -0x10],EAX
00625e9b  CMP dword ptr [EBP + -0x10],0x0
00625e9f  JNZ 0x00625ea3
00625ea1  JMP 0x00625e6a
00625ea3  MOV EAX,dword ptr [EBP + -0x10]
00625ea6  MOV EDX,dword ptr [EAX]
00625ea8  MOV ECX,dword ptr [EBP + -0x10]
00625eab  MOV EAX,dword ptr [EDX + 0x54]
00625eae  CALL EAX
00625eb0  ADD EAX,dword ptr [EBP + -0x4]
00625eb3  PUSH EAX
00625eb4  MOV ECX,dword ptr [EBP + -0x10]
00625eb7  MOV EDX,dword ptr [ECX]
00625eb9  MOV ECX,dword ptr [EBP + -0x10]
00625ebc  MOV EAX,dword ptr [EDX + 0x4c]
00625ebf  CALL EAX
00625ec1  ADD EAX,dword ptr [EBP + -0x8]
00625ec4  PUSH EAX
00625ec5  MOV ECX,dword ptr [EBP + -0x10]
00625ec8  MOV EDX,dword ptr [ECX]
00625eca  MOV ECX,dword ptr [EBP + -0x10]
00625ecd  MOV EAX,dword ptr [EDX + 0x44]
00625ed0  CALL EAX
00625ed2  JMP 0x00625e6a
00625ed4  MOV ESP,EBP
00625ed6  POP EBP
00625ed7  RET 0x8
