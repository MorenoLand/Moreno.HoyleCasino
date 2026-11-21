; FUN_0063df70  0063df70
0063df70  PUSH EBP
0063df71  MOV EBP,ESP
0063df73  SUB ESP,0x14
0063df76  MOV dword ptr [EBP + -0x14],ECX
0063df79  MOV dword ptr [EBP + -0x4],0x0
0063df80  JMP 0x0063df8b
0063df82  MOV EAX,dword ptr [EBP + -0x4]
0063df85  ADD EAX,0x1
0063df88  MOV dword ptr [EBP + -0x4],EAX
0063df8b  MOV ECX,dword ptr [0x0162ee84]
0063df91  MOV EDX,dword ptr [ECX]
0063df93  MOV ECX,dword ptr [0x0162ee84]
0063df99  MOV EAX,dword ptr [EDX + 0x10c]
0063df9f  CALL EAX
0063dfa1  CMP dword ptr [EBP + -0x4],EAX
0063dfa4  JGE 0x0063dff8
0063dfa6  MOV ECX,dword ptr [EBP + -0x14]
0063dfa9  MOV EDX,dword ptr [ECX + 0x1bc]
0063dfaf  MOV EAX,dword ptr [EBP + -0x4]
0063dfb2  MOV ECX,dword ptr [EDX + EAX*0x4]
0063dfb5  MOV dword ptr [EBP + -0xc],ECX
0063dfb8  MOV ECX,dword ptr [EBP + -0xc]
0063dfbb  CALL 0x0063aac0
0063dfc0  MOV EDX,dword ptr [EAX]
0063dfc2  MOV dword ptr [EBP + -0x8],EDX
0063dfc5  XOR EAX,EAX
0063dfc7  CMP dword ptr [EBP + -0x8],0x1
0063dfcb  SETZ AL
0063dfce  MOVZX ECX,AL
0063dfd1  TEST ECX,ECX
0063dfd3  JZ 0x0063dff6
0063dfd5  MOV EDX,dword ptr [EBP + -0x14]
0063dfd8  MOV EAX,dword ptr [EDX + 0x1bc]
0063dfde  MOV ECX,dword ptr [EBP + -0x4]
0063dfe1  MOV EDX,dword ptr [EAX + ECX*0x4]
0063dfe4  MOV EAX,dword ptr [EDX + 0x8]
0063dfe7  MOV dword ptr [EBP + -0x10],EAX
0063dfea  MOV ECX,dword ptr [EBP + -0x10]
0063dfed  CMP ECX,dword ptr [EBP + 0x8]
0063dff0  JNZ 0x0063dff6
0063dff2  MOV AL,0x1
0063dff4  JMP 0x0063dffa
0063dff6  JMP 0x0063df82
0063dff8  XOR AL,AL
0063dffa  MOV ESP,EBP
0063dffc  POP EBP
0063dffd  RET 0x4
