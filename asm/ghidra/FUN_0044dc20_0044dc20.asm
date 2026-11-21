; FUN_0044dc20  0044dc20
0044dc20  PUSH EBP
0044dc21  MOV EBP,ESP
0044dc23  SUB ESP,0x1c
0044dc26  MOV dword ptr [EBP + -0x1c],ECX
0044dc29  MOV dword ptr [EBP + -0x8],0x0
0044dc30  PUSH 0x4
0044dc32  CALL 0x0062fbf0
0044dc37  ADD ESP,0x4
0044dc3a  MOV dword ptr [EBP + -0x4],EAX
0044dc3d  CMP dword ptr [EBP + -0x8],0x4
0044dc41  JGE 0x0044dcd4
0044dc47  MOV EAX,dword ptr [EBP + -0x4]
0044dc4a  PUSH EAX
0044dc4b  CALL 0x005dcb00
0044dc50  ADD ESP,0x4
0044dc53  MOV dword ptr [EBP + -0x10],EAX
0044dc56  MOV ECX,dword ptr [EBP + -0x10]
0044dc59  CALL 0x0063aac0
0044dc5e  MOV ECX,dword ptr [EAX]
0044dc60  MOV dword ptr [EBP + -0xc],ECX
0044dc63  XOR EDX,EDX
0044dc65  CMP dword ptr [EBP + -0xc],0x0
0044dc69  SETZ DL
0044dc6c  MOVZX EAX,DL
0044dc6f  TEST EAX,EAX
0044dc71  JNZ 0x0044dcae
0044dc73  MOV ECX,dword ptr [EBP + -0x4]
0044dc76  PUSH ECX
0044dc77  CALL 0x005dcb00
0044dc7c  ADD ESP,0x4
0044dc7f  MOV dword ptr [EBP + -0x14],EAX
0044dc82  MOV EDX,dword ptr [EBP + -0x14]
0044dc85  MOV AL,byte ptr [EDX + 0x4a1]
0044dc8b  MOV byte ptr [EBP + -0x15],AL
0044dc8e  MOVZX ECX,byte ptr [EBP + -0x15]
0044dc92  TEST ECX,ECX
0044dc94  JNZ 0x0044dcae
0044dc96  MOV EDX,dword ptr [EBP + -0x4]
0044dc99  PUSH EDX
0044dc9a  MOV ECX,dword ptr [EBP + -0x1c]
0044dc9d  CALL 0x0044da90
0044dca2  MOVZX EAX,AL
0044dca5  TEST EAX,EAX
0044dca7  JZ 0x0044dcae
0044dca9  MOV EAX,dword ptr [EBP + -0x4]
0044dcac  JMP 0x0044dcd7
0044dcae  MOV ECX,dword ptr [EBP + -0x4]
0044dcb1  MOV EDX,dword ptr [EBP + -0x4]
0044dcb4  ADD EDX,0x1
0044dcb7  MOV dword ptr [EBP + -0x4],EDX
0044dcba  CMP ECX,0x4
0044dcbd  JL 0x0044dcc6
0044dcbf  MOV dword ptr [EBP + -0x4],0x0
0044dcc6  MOV EAX,dword ptr [EBP + -0x8]
0044dcc9  ADD EAX,0x1
0044dccc  MOV dword ptr [EBP + -0x8],EAX
0044dccf  JMP 0x0044dc3d
0044dcd4  OR EAX,0xffffffff
0044dcd7  MOV ESP,EBP
0044dcd9  POP EBP
0044dcda  RET
