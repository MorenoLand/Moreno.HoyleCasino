; FUN_0056ace0  0056ace0
0056ace0  PUSH EBP
0056ace1  MOV EBP,ESP
0056ace3  SUB ESP,0x8
0056ace6  MOV dword ptr [EBP + -0x8],ECX
0056ace9  MOV dword ptr [EBP + -0x4],0x0
0056acf0  JMP 0x0056acfb
0056acf2  MOV EAX,dword ptr [EBP + -0x4]
0056acf5  ADD EAX,0x1
0056acf8  MOV dword ptr [EBP + -0x4],EAX
0056acfb  CMP dword ptr [EBP + -0x4],0x5
0056acff  JGE 0x0056ad13
0056ad01  MOV ECX,dword ptr [EBP + -0x4]
0056ad04  MOV EDX,dword ptr [EBP + -0x8]
0056ad07  MOV word ptr [EDX + ECX*0x2 + 0x3ac],0x0
0056ad11  JMP 0x0056acf2
0056ad13  MOV dword ptr [EBP + -0x4],0x0
0056ad1a  JMP 0x0056ad25
0056ad1c  MOV EAX,dword ptr [EBP + -0x4]
0056ad1f  ADD EAX,0x1
0056ad22  MOV dword ptr [EBP + -0x4],EAX
0056ad25  CMP dword ptr [EBP + -0x4],0x5
0056ad29  JGE 0x0056ad60
0056ad2b  MOV ECX,dword ptr [EBP + -0x4]
0056ad2e  PUSH ECX
0056ad2f  MOV ECX,dword ptr [0x00793440]
0056ad35  CALL 0x00561ed0
0056ad3a  MOVZX EDX,AL
0056ad3d  TEST EDX,EDX
0056ad3f  JZ 0x0056ad5e
0056ad41  MOV EAX,dword ptr [EBP + -0x4]
0056ad44  PUSH EAX
0056ad45  MOV ECX,dword ptr [0x00793440]
0056ad4b  CALL 0x00561f00
0056ad50  MOV ECX,dword ptr [EBP + -0x4]
0056ad53  MOV EDX,dword ptr [EBP + -0x8]
0056ad56  MOV word ptr [EDX + ECX*0x2 + 0x3ac],AX
0056ad5e  JMP 0x0056ad1c
0056ad60  MOV ESP,EBP
0056ad62  POP EBP
0056ad63  RET
