; FUN_0040cc00  0040cc00
0040cc00  PUSH EBP
0040cc01  MOV EBP,ESP
0040cc03  SUB ESP,0x10
0040cc06  MOV dword ptr [EBP + -0x10],ECX
0040cc09  MOV ECX,dword ptr [EBP + -0x10]
0040cc0c  CALL 0x0040caf0
0040cc11  MOV EAX,[0x00790324]
0040cc16  MOV ECX,dword ptr [EAX + 0x464]
0040cc1c  MOV EDX,dword ptr [ECX + 0x808]
0040cc22  MOV dword ptr [EBP + -0x8],EDX
0040cc25  MOV EAX,[0x00790324]
0040cc2a  MOV ECX,dword ptr [EAX + 0x464]
0040cc30  MOV EDX,dword ptr [ECX + 0x80c]
0040cc36  MOV dword ptr [EBP + -0xc],EDX
0040cc39  MOV EAX,dword ptr [EBP + -0xc]
0040cc3c  SUB EAX,0x1
0040cc3f  CMP dword ptr [EBP + -0x8],EAX
0040cc42  JNZ 0x0040cc57
0040cc44  MOV ECX,dword ptr [EBP + -0x10]
0040cc47  MOV EDX,dword ptr [ECX + 0x44]
0040cc4a  MOV EAX,dword ptr [EBP + -0x10]
0040cc4d  MOV ECX,dword ptr [EAX + 0x44]
0040cc50  MOV EDX,dword ptr [EDX]
0040cc52  MOV EAX,dword ptr [EDX + 0x70]
0040cc55  CALL EAX
0040cc57  MOV dword ptr [EBP + -0x4],0x0
0040cc5e  JMP 0x0040cc69
0040cc60  MOV ECX,dword ptr [EBP + -0x4]
0040cc63  ADD ECX,0x1
0040cc66  MOV dword ptr [EBP + -0x4],ECX
0040cc69  CMP dword ptr [EBP + -0x4],0x5
0040cc6d  JGE 0x0040cd1b
0040cc73  MOV EDX,dword ptr [EBP + -0x4]
0040cc76  MOV EAX,dword ptr [EBP + -0x10]
0040cc79  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
0040cc7d  CALL 0x0040e090
0040cc82  CMP dword ptr [EBP + -0x4],0x4
0040cc86  JZ 0x0040cd16
0040cc8c  MOV ECX,dword ptr [EBP + -0x4]
0040cc8f  PUSH ECX
0040cc90  MOV ECX,dword ptr [0x00790324]
0040cc96  CALL 0x00419eb0
0040cc9b  MOVZX EDX,AL
0040cc9e  TEST EDX,EDX
0040cca0  JZ 0x0040cd16
0040cca2  MOV ECX,dword ptr [0x00790320]
0040cca8  CALL 0x005da7b0
0040ccad  MOVZX EAX,AL
0040ccb0  TEST EAX,EAX
0040ccb2  JZ 0x0040cd16
0040ccb4  MOV ECX,dword ptr [EBP + -0x4]
0040ccb7  PUSH ECX
0040ccb8  MOV EDX,dword ptr [0x00790320]
0040ccbe  MOV EAX,dword ptr [EDX]
0040ccc0  MOV ECX,dword ptr [0x00790320]
0040ccc6  MOV EDX,dword ptr [EAX + 0x2c4]
0040cccc  CALL EDX
0040ccce  MOVZX EAX,AL
0040ccd1  TEST EAX,EAX
0040ccd3  JNZ 0x0040cd16
0040ccd5  MOV ECX,dword ptr [EBP + -0x4]
0040ccd8  MOV EDX,dword ptr [EBP + -0x10]
0040ccdb  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x18]
0040ccdf  MOV ECX,dword ptr [EBP + -0x4]
0040cce2  IMUL ECX,ECX,0x1e0
0040cce8  CMP dword ptr [EAX + ECX*0x1 + 0x17c],0x0
0040ccf0  JNZ 0x0040cd16
0040ccf2  PUSH 0x0
0040ccf4  MOV EDX,dword ptr [EBP + -0x4]
0040ccf7  PUSH EDX
0040ccf8  MOV EAX,dword ptr [EBP + -0x4]
0040ccfb  MOV ECX,dword ptr [EBP + -0x10]
0040ccfe  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x18]
0040cd02  MOV EAX,dword ptr [EBP + -0x4]
0040cd05  MOV ECX,dword ptr [EBP + -0x10]
0040cd08  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x18]
0040cd0c  MOV EDX,dword ptr [EDX]
0040cd0e  MOV EAX,dword ptr [EDX + 0xb8]
0040cd14  CALL EAX
0040cd16  JMP 0x0040cc60
0040cd1b  MOV ECX,dword ptr [0x00790320]
0040cd21  CALL 0x005da7b0
0040cd26  MOVZX ECX,AL
0040cd29  TEST ECX,ECX
0040cd2b  JZ 0x0040cd4c
0040cd2d  CMP dword ptr [0x0163068c],0x0
0040cd34  JNZ 0x0040cd4c
0040cd36  MOV EDX,dword ptr [0x00790320]
0040cd3c  MOV EAX,dword ptr [EDX]
0040cd3e  MOV ECX,dword ptr [0x00790320]
0040cd44  MOV EDX,dword ptr [EAX + 0x2f0]
0040cd4a  CALL EDX
0040cd4c  MOV ESP,EBP
0040cd4e  POP EBP
0040cd4f  RET
