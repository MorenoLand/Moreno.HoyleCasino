; FUN_0062bcc0  0062bcc0
0062bcc0  PUSH EBP
0062bcc1  MOV EBP,ESP
0062bcc3  SUB ESP,0x1c
0062bcc6  MOV dword ptr [EBP + -0x1c],ECX
0062bcc9  MOV EAX,dword ptr [EBP + -0x1c]
0062bccc  MOV ECX,dword ptr [EAX + 0x14]
0062bccf  PUSH ECX
0062bcd0  CALL 0x0062ce00
0062bcd5  ADD ESP,0x4
0062bcd8  MOV EDX,dword ptr [EBP + -0x1c]
0062bcdb  MOV EAX,dword ptr [EDX + 0x14]
0062bcde  ADD EAX,0x4
0062bce1  PUSH EAX
0062bce2  CALL 0x0062ce00
0062bce7  ADD ESP,0x4
0062bcea  MOV dword ptr [EBP + -0x4],0x0
0062bcf1  JMP 0x0062bcfc
0062bcf3  MOV ECX,dword ptr [EBP + -0x4]
0062bcf6  ADD ECX,0x1
0062bcf9  MOV dword ptr [EBP + -0x4],ECX
0062bcfc  MOV EDX,dword ptr [EBP + -0x1c]
0062bcff  MOV EAX,dword ptr [EDX + 0x14]
0062bd02  MOV ECX,dword ptr [EBP + -0x4]
0062bd05  CMP ECX,dword ptr [EAX]
0062bd07  JNC 0x0062bd56
0062bd09  MOV EDX,dword ptr [EBP + -0x1c]
0062bd0c  MOV EAX,dword ptr [EDX + 0x14]
0062bd0f  MOV ECX,dword ptr [EBP + -0x4]
0062bd12  SHL ECX,0x4
0062bd15  LEA EDX,[EAX + ECX*0x1 + 0xc]
0062bd19  PUSH EDX
0062bd1a  CALL 0x0062ce00
0062bd1f  ADD ESP,0x4
0062bd22  MOV EAX,dword ptr [EBP + -0x1c]
0062bd25  MOV ECX,dword ptr [EAX + 0x14]
0062bd28  MOV EDX,dword ptr [EBP + -0x4]
0062bd2b  SHL EDX,0x4
0062bd2e  LEA EAX,[ECX + EDX*0x1 + 0x10]
0062bd32  PUSH EAX
0062bd33  CALL 0x0062ce00
0062bd38  ADD ESP,0x4
0062bd3b  MOV ECX,dword ptr [EBP + -0x1c]
0062bd3e  MOV EDX,dword ptr [ECX + 0x14]
0062bd41  MOV EAX,dword ptr [EBP + -0x4]
0062bd44  SHL EAX,0x4
0062bd47  LEA ECX,[EDX + EAX*0x1 + 0x14]
0062bd4b  PUSH ECX
0062bd4c  CALL 0x0062ce00
0062bd51  ADD ESP,0x4
0062bd54  JMP 0x0062bcf3
0062bd56  MOV AL,0x1
0062bd58  MOV ESP,EBP
0062bd5a  POP EBP
0062bd5b  RET
