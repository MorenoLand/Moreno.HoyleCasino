; FUN_0068e470  0068e470
0068e470  PUSH EBP
0068e471  MOV EBP,ESP
0068e473  SUB ESP,0xc
0068e476  MOV dword ptr [EBP + -0xc],ECX
0068e479  MOV EAX,dword ptr [EBP + 0x8]
0068e47c  MOV ECX,dword ptr [EAX]
0068e47e  MOV dword ptr [EBP + -0x4],ECX
0068e481  MOV EDX,dword ptr [EBP + 0x8]
0068e484  MOV EAX,dword ptr [EBP + -0x4]
0068e487  MOV ECX,dword ptr [EAX + 0x8]
0068e48a  MOV dword ptr [EDX],ECX
0068e48c  MOV EDX,dword ptr [EBP + -0x4]
0068e48f  MOV EAX,dword ptr [EDX + 0x8]
0068e492  MOVSX ECX,byte ptr [EAX + 0x35]
0068e496  TEST ECX,ECX
0068e498  JNZ 0x0068e4a6
0068e49a  MOV EDX,dword ptr [EBP + -0x4]
0068e49d  MOV EAX,dword ptr [EDX + 0x8]
0068e4a0  MOV ECX,dword ptr [EBP + 0x8]
0068e4a3  MOV dword ptr [EAX + 0x4],ECX
0068e4a6  MOV EDX,dword ptr [EBP + -0x4]
0068e4a9  MOV EAX,dword ptr [EBP + 0x8]
0068e4ac  MOV ECX,dword ptr [EAX + 0x4]
0068e4af  MOV dword ptr [EDX + 0x4],ECX
0068e4b2  MOV EDX,dword ptr [EBP + -0xc]
0068e4b5  MOV EAX,dword ptr [EDX + 0x4]
0068e4b8  MOV ECX,dword ptr [EBP + 0x8]
0068e4bb  CMP ECX,dword ptr [EAX + 0x4]
0068e4be  JNZ 0x0068e4ce
0068e4c0  MOV EDX,dword ptr [EBP + -0xc]
0068e4c3  MOV EAX,dword ptr [EDX + 0x4]
0068e4c6  MOV ECX,dword ptr [EBP + -0x4]
0068e4c9  MOV dword ptr [EAX + 0x4],ECX
0068e4cc  JMP 0x0068e4fb
0068e4ce  MOV EDX,dword ptr [EBP + 0x8]
0068e4d1  MOV EAX,dword ptr [EDX + 0x4]
0068e4d4  MOV ECX,dword ptr [EBP + 0x8]
0068e4d7  CMP ECX,dword ptr [EAX + 0x8]
0068e4da  JNZ 0x0068e4ea
0068e4dc  MOV EDX,dword ptr [EBP + 0x8]
0068e4df  MOV EAX,dword ptr [EDX + 0x4]
0068e4e2  MOV ECX,dword ptr [EBP + -0x4]
0068e4e5  MOV dword ptr [EAX + 0x8],ECX
0068e4e8  JMP 0x0068e4fb
0068e4ea  MOV EDX,dword ptr [EBP + 0x8]
0068e4ed  MOV EAX,dword ptr [EDX + 0x4]
0068e4f0  MOV dword ptr [EBP + -0x8],EAX
0068e4f3  MOV ECX,dword ptr [EBP + -0x8]
0068e4f6  MOV EDX,dword ptr [EBP + -0x4]
0068e4f9  MOV dword ptr [ECX],EDX
0068e4fb  MOV EAX,dword ptr [EBP + -0x4]
0068e4fe  MOV ECX,dword ptr [EBP + 0x8]
0068e501  MOV dword ptr [EAX + 0x8],ECX
0068e504  MOV EDX,dword ptr [EBP + 0x8]
0068e507  MOV EAX,dword ptr [EBP + -0x4]
0068e50a  MOV dword ptr [EDX + 0x4],EAX
0068e50d  MOV ESP,EBP
0068e50f  POP EBP
0068e510  RET 0x4
