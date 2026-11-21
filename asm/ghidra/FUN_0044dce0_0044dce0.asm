; FUN_0044dce0  0044dce0
0044dce0  PUSH EBP
0044dce1  MOV EBP,ESP
0044dce3  SUB ESP,0x30
0044dce6  MOV dword ptr [EBP + -0x30],ECX
0044dce9  MOV dword ptr [EBP + -0x14],0x3
0044dcf0  MOV dword ptr [EBP + -0x10],0x1
0044dcf7  MOV dword ptr [EBP + -0xc],0x0
0044dcfe  MOV dword ptr [EBP + -0x8],0x2
0044dd05  MOV dword ptr [EBP + -0x4],0x0
0044dd0c  JMP 0x0044dd17
0044dd0e  MOV EAX,dword ptr [EBP + -0x4]
0044dd11  ADD EAX,0x1
0044dd14  MOV dword ptr [EBP + -0x4],EAX
0044dd17  CMP dword ptr [EBP + -0x4],0x4
0044dd1b  JGE 0x0044ddad
0044dd21  MOV ECX,dword ptr [EBP + -0x4]
0044dd24  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x14]
0044dd28  PUSH EDX
0044dd29  CALL 0x005dcb00
0044dd2e  ADD ESP,0x4
0044dd31  MOV dword ptr [EBP + -0x1c],EAX
0044dd34  MOV ECX,dword ptr [EBP + -0x1c]
0044dd37  CALL 0x0063aac0
0044dd3c  MOV EAX,dword ptr [EAX]
0044dd3e  MOV dword ptr [EBP + -0x18],EAX
0044dd41  XOR ECX,ECX
0044dd43  CMP dword ptr [EBP + -0x18],0x0
0044dd47  SETZ CL
0044dd4a  MOVZX EDX,CL
0044dd4d  TEST EDX,EDX
0044dd4f  JNZ 0x0044dda8
0044dd51  MOV EAX,dword ptr [EBP + -0x4]
0044dd54  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x14]
0044dd58  PUSH ECX
0044dd59  CALL 0x005dcb00
0044dd5e  ADD ESP,0x4
0044dd61  MOV dword ptr [EBP + -0x20],EAX
0044dd64  MOV EDX,dword ptr [EBP + -0x20]
0044dd67  MOV AL,byte ptr [EDX + 0x4a1]
0044dd6d  MOV byte ptr [EBP + -0x21],AL
0044dd70  MOVZX ECX,byte ptr [EBP + -0x21]
0044dd74  TEST ECX,ECX
0044dd76  JNZ 0x0044dda8
0044dd78  MOV EDX,dword ptr [EBP + -0x4]
0044dd7b  MOV EAX,dword ptr [EBP + EDX*0x4 + -0x14]
0044dd7f  PUSH EAX
0044dd80  CALL 0x005dcb00
0044dd85  ADD ESP,0x4
0044dd88  MOV dword ptr [EBP + -0x28],EAX
0044dd8b  MOV ECX,dword ptr [EBP + -0x28]
0044dd8e  MOV DL,byte ptr [ECX + 0x4a2]
0044dd94  MOV byte ptr [EBP + -0x29],DL
0044dd97  MOVZX EAX,byte ptr [EBP + -0x29]
0044dd9b  TEST EAX,EAX
0044dd9d  JNZ 0x0044dda8
0044dd9f  MOV ECX,dword ptr [EBP + -0x4]
0044dda2  MOV EAX,dword ptr [EBP + ECX*0x4 + -0x14]
0044dda6  JMP 0x0044ddb0
0044dda8  JMP 0x0044dd0e
0044ddad  OR EAX,0xffffffff
0044ddb0  MOV ESP,EBP
0044ddb2  POP EBP
0044ddb3  RET
