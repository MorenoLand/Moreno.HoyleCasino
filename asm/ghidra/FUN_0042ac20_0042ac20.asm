; FUN_0042ac20  0042ac20
0042ac20  PUSH EBP
0042ac21  MOV EBP,ESP
0042ac23  SUB ESP,0x8
0042ac26  MOV dword ptr [EBP + -0x8],ECX
0042ac29  PUSH 0x1
0042ac2b  MOV EAX,[0x0162ee80]
0042ac30  MOV ECX,dword ptr [EAX + 0x4]
0042ac33  MOV EDX,dword ptr [0x0162ee80]
0042ac39  MOV EAX,dword ptr [EDX + 0x4]
0042ac3c  MOV EDX,dword ptr [ECX]
0042ac3e  MOV ECX,EAX
0042ac40  MOV EAX,dword ptr [EDX + 0x4]
0042ac43  CALL EAX
0042ac45  MOV ECX,dword ptr [0x0162ee84]
0042ac4b  CALL 0x00637630
0042ac50  MOVZX ECX,AL
0042ac53  TEST ECX,ECX
0042ac55  JZ 0x0042ac72
0042ac57  MOVZX EDX,byte ptr [0x00795f94]
0042ac5e  TEST EDX,EDX
0042ac60  JNZ 0x0042ac72
0042ac62  MOV EAX,dword ptr [EBP + -0x8]
0042ac65  MOV ECX,dword ptr [EAX + 0x168]
0042ac6b  CALL 0x0042dcf0
0042ac70  JMP 0x0042accc
0042ac72  MOV dword ptr [EBP + -0x4],0x0
0042ac79  JMP 0x0042ac84
0042ac7b  MOV ECX,dword ptr [EBP + -0x4]
0042ac7e  ADD ECX,0x1
0042ac81  MOV dword ptr [EBP + -0x4],ECX
0042ac84  CMP dword ptr [EBP + -0x4],0x4c
0042ac88  JGE 0x0042acb2
0042ac8a  MOV EDX,dword ptr [EBP + -0x4]
0042ac8d  MOV EAX,[0x007906d4]
0042ac92  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
0042ac96  CMP dword ptr [ECX + 0x110],0x0
0042ac9d  JNZ 0x0042acb0
0042ac9f  MOV EDX,dword ptr [EBP + -0x4]
0042aca2  MOV EAX,[0x007906d4]
0042aca7  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
0042acab  CALL 0x005cb9b0
0042acb0  JMP 0x0042ac7b
0042acb2  PUSH 0xf
0042acb4  MOV ECX,dword ptr [0x0162ee80]
0042acba  MOV EDX,dword ptr [ECX + 0x4]
0042acbd  MOV EAX,[0x0162ee80]
0042acc2  MOV ECX,dword ptr [EAX + 0x4]
0042acc5  MOV EDX,dword ptr [EDX]
0042acc7  MOV EAX,dword ptr [EDX + 0x1c]
0042acca  CALL EAX
0042accc  MOV ESP,EBP
0042acce  POP EBP
0042accf  RET
