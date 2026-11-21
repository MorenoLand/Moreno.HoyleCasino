; FUN_0044fa20  0044fa20
0044fa20  PUSH EBP
0044fa21  MOV EBP,ESP
0044fa23  PUSH ECX
0044fa24  MOV dword ptr [EBP + -0x4],ECX
0044fa27  MOV EAX,dword ptr [EBP + -0x4]
0044fa2a  MOVZX ECX,byte ptr [EAX + 0x2be]
0044fa31  TEST ECX,ECX
0044fa33  JZ 0x0044fa43
0044fa35  MOV EDX,dword ptr [EBP + -0x4]
0044fa38  MOVZX EAX,byte ptr [EDX + 0x2c0]
0044fa3f  TEST EAX,EAX
0044fa41  JZ 0x0044fa4a
0044fa43  XOR AL,AL
0044fa45  JMP 0x0044fb0d
0044fa4a  MOV ECX,dword ptr [EBP + -0x4]
0044fa4d  MOVSX EDX,word ptr [ECX + 0x2b6]
0044fa54  CMP EDX,0x4
0044fa57  JZ 0x0044fa8a
0044fa59  MOV EAX,dword ptr [EBP + -0x4]
0044fa5c  MOVSX ECX,word ptr [EAX + 0x2b8]
0044fa63  CMP ECX,0x4
0044fa66  JZ 0x0044fa8a
0044fa68  MOV EDX,dword ptr [EBP + -0x4]
0044fa6b  MOVSX EAX,word ptr [EDX + 0x2bc]
0044fa72  CMP EAX,0x4
0044fa75  JZ 0x0044fa8a
0044fa77  MOV ECX,dword ptr [EBP + -0x4]
0044fa7a  MOVSX EDX,word ptr [ECX + 0x2ba]
0044fa81  CMP EDX,0x4
0044fa84  JNZ 0x0044fb0b
0044fa8a  MOV EAX,dword ptr [EBP + -0x4]
0044fa8d  MOVSX ECX,word ptr [EAX + 0x2b6]
0044fa94  CMP ECX,0x4
0044fa97  JNZ 0x0044faa6
0044fa99  MOV EDX,dword ptr [EBP + -0x4]
0044fa9c  MOV dword ptr [EDX + 0x2d0],0x3
0044faa6  MOV EAX,dword ptr [EBP + -0x4]
0044faa9  MOVSX ECX,word ptr [EAX + 0x2b8]
0044fab0  CMP ECX,0x4
0044fab3  JNZ 0x0044fac2
0044fab5  MOV EDX,dword ptr [EBP + -0x4]
0044fab8  MOV dword ptr [EDX + 0x2d0],0x0
0044fac2  MOV EAX,dword ptr [EBP + -0x4]
0044fac5  MOVSX ECX,word ptr [EAX + 0x2bc]
0044facc  CMP ECX,0x4
0044facf  JNZ 0x0044fade
0044fad1  MOV EDX,dword ptr [EBP + -0x4]
0044fad4  MOV dword ptr [EDX + 0x2d0],0x1
0044fade  MOV EAX,dword ptr [EBP + -0x4]
0044fae1  MOVSX ECX,word ptr [EAX + 0x2ba]
0044fae8  CMP ECX,0x4
0044faeb  JNZ 0x0044fafa
0044faed  MOV EDX,dword ptr [EBP + -0x4]
0044faf0  MOV dword ptr [EDX + 0x2d0],0x2
0044fafa  MOV EAX,dword ptr [EBP + -0x4]
0044fafd  MOV dword ptr [EAX + 0x2d4],0x4
0044fb07  MOV AL,0x1
0044fb09  JMP 0x0044fb0d
0044fb0b  XOR AL,AL
0044fb0d  MOV ESP,EBP
0044fb0f  POP EBP
0044fb10  RET
