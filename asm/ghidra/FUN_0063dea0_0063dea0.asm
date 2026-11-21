; FUN_0063dea0  0063dea0
0063dea0  PUSH EBP
0063dea1  MOV EBP,ESP
0063dea3  SUB ESP,0x20
0063dea6  MOV dword ptr [EBP + -0x1c],ECX
0063dea9  MOV dword ptr [EBP + -0x4],0x0
0063deb0  JMP 0x0063debb
0063deb2  MOV EAX,dword ptr [EBP + -0x4]
0063deb5  ADD EAX,0x1
0063deb8  MOV dword ptr [EBP + -0x4],EAX
0063debb  MOV ECX,dword ptr [0x0162ee84]
0063dec1  MOV EDX,dword ptr [ECX]
0063dec3  MOV ECX,dword ptr [0x0162ee84]
0063dec9  MOV EAX,dword ptr [EDX + 0x10c]
0063decf  CALL EAX
0063ded1  CMP dword ptr [EBP + -0x4],EAX
0063ded4  JGE 0x0063df67
0063deda  MOV ECX,dword ptr [EBP + -0x1c]
0063dedd  MOV EDX,dword ptr [ECX + 0x1bc]
0063dee3  MOV EAX,dword ptr [EBP + -0x4]
0063dee6  MOV ECX,dword ptr [EDX + EAX*0x4]
0063dee9  MOV dword ptr [EBP + -0x10],ECX
0063deec  MOV ECX,dword ptr [EBP + -0x10]
0063deef  CALL 0x0063aac0
0063def4  MOV EDX,dword ptr [EAX]
0063def6  MOV dword ptr [EBP + -0x8],EDX
0063def9  CMP dword ptr [EBP + -0x8],0x2
0063defd  JZ 0x0063df1b
0063deff  MOV ECX,dword ptr [EBP + -0x10]
0063df02  CALL 0x0063aac0
0063df07  MOV EAX,dword ptr [EAX]
0063df09  MOV dword ptr [EBP + -0xc],EAX
0063df0c  CMP dword ptr [EBP + -0xc],0x3
0063df10  JZ 0x0063df1b
0063df12  MOV dword ptr [EBP + -0x20],0x0
0063df19  JMP 0x0063df22
0063df1b  MOV dword ptr [EBP + -0x20],0x1
0063df22  MOVZX ECX,byte ptr [EBP + -0x20]
0063df26  TEST ECX,ECX
0063df28  JZ 0x0063df62
0063df2a  MOV EDX,dword ptr [EBP + -0x1c]
0063df2d  MOV EAX,dword ptr [EDX + 0x1bc]
0063df33  MOV ECX,dword ptr [EBP + -0x4]
0063df36  MOV EDX,dword ptr [EAX + ECX*0x4]
0063df39  MOV dword ptr [EBP + -0x14],EDX
0063df3c  MOV ECX,dword ptr [EBP + -0x14]
0063df3f  CALL 0x0063aac0
0063df44  ADD EAX,0x4
0063df47  MOV dword ptr [EBP + -0x18],EAX
0063df4a  MOV EAX,dword ptr [EBP + 0x8]
0063df4d  PUSH EAX
0063df4e  MOV ECX,dword ptr [EBP + -0x18]
0063df51  PUSH ECX
0063df52  CALL 0x00686ec0
0063df57  ADD ESP,0x8
0063df5a  TEST EAX,EAX
0063df5c  JNZ 0x0063df62
0063df5e  MOV AL,0x1
0063df60  JMP 0x0063df69
0063df62  JMP 0x0063deb2
0063df67  XOR AL,AL
0063df69  MOV ESP,EBP
0063df6b  POP EBP
0063df6c  RET 0x4
