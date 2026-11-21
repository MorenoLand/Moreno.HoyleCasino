; FUN_0068edc0  0068edc0
0068edc0  PUSH EBP
0068edc1  MOV EBP,ESP
0068edc3  SUB ESP,0x14
0068edc6  MOV dword ptr [EBP + -0x14],ECX
0068edc9  MOV EAX,dword ptr [EBP + -0x14]
0068edcc  CMP dword ptr [EAX],0x0
0068edcf  JNZ 0x0068edd7
0068edd1  CALL dword ptr [0x006b2274]
0068edd7  MOV ECX,dword ptr [EBP + -0x14]
0068edda  MOV EDX,dword ptr [ECX + 0x4]
0068eddd  MOVSX EAX,byte ptr [EDX + 0x45]
0068ede1  TEST EAX,EAX
0068ede3  JZ 0x0068edf0
0068ede5  CALL dword ptr [0x006b2274]
0068edeb  JMP 0x0068ee78
0068edf0  MOV ECX,dword ptr [EBP + -0x14]
0068edf3  MOV EDX,dword ptr [ECX + 0x4]
0068edf6  ADD EDX,0x8
0068edf9  MOV dword ptr [EBP + -0x8],EDX
0068edfc  MOV EAX,dword ptr [EBP + -0x8]
0068edff  MOV ECX,dword ptr [EAX]
0068ee01  MOVSX EDX,byte ptr [ECX + 0x45]
0068ee05  TEST EDX,EDX
0068ee07  JNZ 0x0068ee3f
0068ee09  MOV EAX,dword ptr [EBP + -0x14]
0068ee0c  MOV ECX,dword ptr [EAX + 0x4]
0068ee0f  ADD ECX,0x8
0068ee12  MOV dword ptr [EBP + -0xc],ECX
0068ee15  MOV EDX,dword ptr [EBP + -0xc]
0068ee18  MOV EAX,dword ptr [EDX]
0068ee1a  MOV dword ptr [EBP + -0x10],EAX
0068ee1d  MOV ECX,dword ptr [EBP + -0x10]
0068ee20  MOV EDX,dword ptr [ECX]
0068ee22  MOVSX EAX,byte ptr [EDX + 0x45]
0068ee26  TEST EAX,EAX
0068ee28  JNZ 0x0068ee34
0068ee2a  MOV ECX,dword ptr [EBP + -0x10]
0068ee2d  MOV EDX,dword ptr [ECX]
0068ee2f  MOV dword ptr [EBP + -0x10],EDX
0068ee32  JMP 0x0068ee1d
0068ee34  MOV EAX,dword ptr [EBP + -0x14]
0068ee37  MOV ECX,dword ptr [EBP + -0x10]
0068ee3a  MOV dword ptr [EAX + 0x4],ECX
0068ee3d  JMP 0x0068ee78
0068ee3f  MOV EDX,dword ptr [EBP + -0x14]
0068ee42  MOV EAX,dword ptr [EDX + 0x4]
0068ee45  MOV ECX,dword ptr [EAX + 0x4]
0068ee48  MOV dword ptr [EBP + -0x4],ECX
0068ee4b  MOV EDX,dword ptr [EBP + -0x4]
0068ee4e  MOVSX EAX,byte ptr [EDX + 0x45]
0068ee52  TEST EAX,EAX
0068ee54  JNZ 0x0068ee6f
0068ee56  MOV ECX,dword ptr [EBP + -0x14]
0068ee59  MOV EDX,dword ptr [EBP + -0x4]
0068ee5c  MOV EAX,dword ptr [ECX + 0x4]
0068ee5f  CMP EAX,dword ptr [EDX + 0x8]
0068ee62  JNZ 0x0068ee6f
0068ee64  MOV ECX,dword ptr [EBP + -0x14]
0068ee67  MOV EDX,dword ptr [EBP + -0x4]
0068ee6a  MOV dword ptr [ECX + 0x4],EDX
0068ee6d  JMP 0x0068ee3f
0068ee6f  MOV EAX,dword ptr [EBP + -0x14]
0068ee72  MOV ECX,dword ptr [EBP + -0x4]
0068ee75  MOV dword ptr [EAX + 0x4],ECX
0068ee78  MOV ESP,EBP
0068ee7a  POP EBP
0068ee7b  RET
