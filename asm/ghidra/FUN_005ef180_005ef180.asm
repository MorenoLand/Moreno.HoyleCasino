; FUN_005ef180  005ef180
005ef180  PUSH EBP
005ef181  MOV EBP,ESP
005ef183  SUB ESP,0x20
005ef186  MOV dword ptr [EBP + -0x14],ECX
005ef189  MOV EAX,dword ptr [EBP + -0x14]
005ef18c  CMP dword ptr [EAX + 0x5c],0x0
005ef190  JZ 0x005ef308
005ef196  MOV ECX,dword ptr [EBP + -0x14]
005ef199  MOV EDX,dword ptr [ECX + 0x64]
005ef19c  MOV dword ptr [EBP + -0x18],EDX
005ef19f  CMP dword ptr [EBP + -0x18],0x1
005ef1a3  JZ 0x005ef1be
005ef1a5  CMP dword ptr [EBP + -0x18],0x1
005ef1a9  JLE 0x005ef308
005ef1af  CMP dword ptr [EBP + -0x18],0x3
005ef1b3  JLE 0x005ef2e6
005ef1b9  JMP 0x005ef308
005ef1be  MOV EAX,[0x015e55e8]
005ef1c3  MOV ECX,dword ptr [EAX + 0x14]
005ef1c6  CALL 0x005f8550
005ef1cb  MOV ECX,dword ptr [EBP + -0x14]
005ef1ce  MOV dword ptr [ECX + 0x68],EAX
005ef1d1  MOV EDX,dword ptr [0x015e55e8]
005ef1d7  MOV ECX,dword ptr [EDX + 0x14]
005ef1da  CALL 0x005f8570
005ef1df  MOV ECX,dword ptr [EBP + -0x14]
005ef1e2  MOV dword ptr [ECX + 0x6c],EAX
005ef1e5  LEA EDX,[EBP + -0x8]
005ef1e8  PUSH EDX
005ef1e9  LEA EAX,[EBP + -0x4]
005ef1ec  PUSH EAX
005ef1ed  MOV ECX,dword ptr [EBP + -0x14]
005ef1f0  MOV EDX,dword ptr [ECX + 0x5c]
005ef1f3  PUSH EDX
005ef1f4  MOV ECX,dword ptr [EBP + -0x14]
005ef1f7  CALL 0x005eedc0
005ef1fc  MOV EAX,dword ptr [EBP + -0x4]
005ef1ff  ADD EAX,0x2
005ef202  MOV dword ptr [EBP + -0x4],EAX
005ef205  MOV ECX,dword ptr [EBP + -0x4]
005ef208  PUSH ECX
005ef209  MOV ECX,dword ptr [EBP + -0x14]
005ef20c  CALL 0x005ecc60
005ef211  MOV EDX,dword ptr [EBP + -0x14]
005ef214  MOV EAX,dword ptr [EDX + 0x98]
005ef21a  MOVZX ECX,word ptr [EAX + 0x3ca]
005ef221  MOV EDX,dword ptr [EBP + -0x14]
005ef224  MOV EAX,dword ptr [EDX + 0x98]
005ef22a  MOVZX EDX,word ptr [EAX + 0x2ca]
005ef231  CMP ECX,EDX
005ef233  JLE 0x005ef24b
005ef235  MOV EAX,dword ptr [EBP + -0x14]
005ef238  MOV ECX,dword ptr [EAX + 0x98]
005ef23e  MOV DX,word ptr [ECX + 0x3ca]
005ef245  MOV word ptr [EBP + -0x1a],DX
005ef249  JMP 0x005ef25f
005ef24b  MOV EAX,dword ptr [EBP + -0x14]
005ef24e  MOV ECX,dword ptr [EAX + 0x98]
005ef254  MOV DX,word ptr [ECX + 0x2ca]
005ef25b  MOV word ptr [EBP + -0x1a],DX
005ef25f  MOVZX EAX,word ptr [EBP + -0x1a]
005ef263  MOV dword ptr [EBP + -0xc],EAX
005ef266  MOV ECX,dword ptr [EBP + -0x14]
005ef269  MOV EDX,dword ptr [ECX + 0x98]
005ef26f  MOVZX EAX,word ptr [EDX + 0x3ce]
005ef276  MOV ECX,dword ptr [EBP + -0x14]
005ef279  MOV EDX,dword ptr [ECX + 0x98]
005ef27f  MOVZX ECX,word ptr [EDX + 0x2ce]
005ef286  CMP EAX,ECX
005ef288  JLE 0x005ef2a0
005ef28a  MOV EDX,dword ptr [EBP + -0x14]
005ef28d  MOV EAX,dword ptr [EDX + 0x98]
005ef293  MOV CX,word ptr [EAX + 0x3ce]
005ef29a  MOV word ptr [EBP + -0x1c],CX
005ef29e  JMP 0x005ef2b4
005ef2a0  MOV EDX,dword ptr [EBP + -0x14]
005ef2a3  MOV EAX,dword ptr [EDX + 0x98]
005ef2a9  MOV CX,word ptr [EAX + 0x2ce]
005ef2b0  MOV word ptr [EBP + -0x1c],CX
005ef2b4  MOVZX EDX,word ptr [EBP + -0x1c]
005ef2b8  MOV dword ptr [EBP + -0x10],EDX
005ef2bb  MOV EAX,dword ptr [EBP + -0x10]
005ef2be  SUB EAX,dword ptr [EBP + -0xc]
005ef2c1  MOV dword ptr [EBP + -0x20],EAX
005ef2c4  FILD dword ptr [EBP + -0x20]
005ef2c7  FMUL double ptr [0x006be6f8]
005ef2cd  CALL 0x00686cc0
005ef2d2  ADD EAX,dword ptr [EBP + -0x8]
005ef2d5  MOV dword ptr [EBP + -0x8],EAX
005ef2d8  MOV ECX,dword ptr [EBP + -0x8]
005ef2db  PUSH ECX
005ef2dc  MOV ECX,dword ptr [EBP + -0x14]
005ef2df  CALL 0x005eccb0
005ef2e4  JMP 0x005ef308
005ef2e6  MOV ECX,dword ptr [EBP + -0x14]
005ef2e9  CALL 0x005eef60
005ef2ee  PUSH EAX
005ef2ef  MOV ECX,dword ptr [EBP + -0x14]
005ef2f2  CALL 0x005ecc60
005ef2f7  MOV ECX,dword ptr [EBP + -0x14]
005ef2fa  CALL 0x005eeef0
005ef2ff  PUSH EAX
005ef300  MOV ECX,dword ptr [EBP + -0x14]
005ef303  CALL 0x005eccb0
005ef308  MOV ESP,EBP
005ef30a  POP EBP
005ef30b  RET
