; FUN_0045dde0  0045dde0
0045dde0  PUSH EBP
0045dde1  MOV EBP,ESP
0045dde3  SUB ESP,0x24
0045dde6  MOV dword ptr [EBP + -0x24],ECX
0045dde9  MOV EAX,dword ptr [EBP + 0x8]
0045ddec  PUSH EAX
0045dded  CALL 0x005dcb00
0045ddf2  ADD ESP,0x4
0045ddf5  MOV dword ptr [EBP + -0x14],EAX
0045ddf8  MOV ECX,dword ptr [EBP + -0x14]
0045ddfb  MOV DL,byte ptr [ECX + 0x4a0]
0045de01  MOV byte ptr [EBP + -0x15],DL
0045de04  MOVZX EAX,byte ptr [EBP + -0x15]
0045de08  TEST EAX,EAX
0045de0a  JZ 0x0045df15
0045de10  MOV ECX,dword ptr [0x00790738]
0045de16  MOV EDX,dword ptr [ECX + 0x4]
0045de19  MOV EAX,[0x00790738]
0045de1e  MOV ECX,dword ptr [EAX + 0x4]
0045de21  MOV EDX,dword ptr [EDX]
0045de23  MOV EAX,dword ptr [EDX + 0xb4]
0045de29  CALL EAX
0045de2b  MOVZX ECX,AL
0045de2e  TEST ECX,ECX
0045de30  JZ 0x0045ded1
0045de36  MOV EDX,dword ptr [0x00790738]
0045de3c  MOV EAX,dword ptr [EDX + 0x4]
0045de3f  MOV dword ptr [EBP + -0x1c],EAX
0045de42  MOV ECX,dword ptr [EBP + 0x8]
0045de45  SHL ECX,0x5
0045de48  MOV EDX,dword ptr [EBP + -0x1c]
0045de4b  LEA EAX,[EDX + ECX*0x1 + 0x48]
0045de4f  XOR ECX,ECX
0045de51  SHL ECX,0x3
0045de54  MOV EDX,dword ptr [EAX + ECX*0x1]
0045de57  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x4]
0045de5b  MOV dword ptr [EBP + -0x8],EDX
0045de5e  MOV dword ptr [EBP + -0x4],EAX
0045de61  MOV ECX,dword ptr [EBP + -0x4]
0045de64  PUSH ECX
0045de65  MOV EDX,dword ptr [EBP + -0x8]
0045de68  PUSH EDX
0045de69  MOV EAX,dword ptr [EBP + 0x8]
0045de6c  PUSH EAX
0045de6d  CALL 0x005dcb00
0045de72  ADD ESP,0x4
0045de75  MOV ECX,EAX
0045de77  CALL 0x005d5cf0
0045de7c  MOV ECX,dword ptr [EBP + -0x24]
0045de7f  CMP dword ptr [ECX + 0x80],0x1
0045de86  JNZ 0x0045ded1
0045de88  MOV EDX,dword ptr [0x00790738]
0045de8e  MOV EAX,dword ptr [EDX + 0x4]
0045de91  MOV dword ptr [EBP + -0x20],EAX
0045de94  MOV ECX,dword ptr [EBP + 0x8]
0045de97  SHL ECX,0x5
0045de9a  MOV EDX,dword ptr [EBP + -0x20]
0045de9d  LEA EAX,[EDX + ECX*0x1 + 0x48]
0045dea1  MOV ECX,0x1
0045dea6  SHL ECX,0x3
0045dea9  MOV EDX,dword ptr [EAX + ECX*0x1]
0045deac  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x4]
0045deb0  MOV dword ptr [EBP + -0x10],EDX
0045deb3  MOV dword ptr [EBP + -0xc],EAX
0045deb6  MOV ECX,dword ptr [EBP + -0xc]
0045deb9  PUSH ECX
0045deba  MOV EDX,dword ptr [EBP + -0x10]
0045debd  PUSH EDX
0045debe  MOV EAX,dword ptr [EBP + 0x8]
0045dec1  PUSH EAX
0045dec2  CALL 0x005dcb00
0045dec7  ADD ESP,0x4
0045deca  MOV ECX,EAX
0045decc  CALL 0x005d5cf0
0045ded1  PUSH 0x0
0045ded3  MOV ECX,dword ptr [EBP + 0x8]
0045ded6  PUSH ECX
0045ded7  MOV EDX,dword ptr [0x00790738]
0045dedd  MOV EAX,dword ptr [EDX + 0x4]
0045dee0  MOV ECX,dword ptr [0x00790738]
0045dee6  MOV ECX,dword ptr [ECX + 0x4]
0045dee9  MOV EDX,dword ptr [EAX]
0045deeb  MOV EAX,dword ptr [EDX + 0xbc]
0045def1  CALL EAX
0045def3  PUSH 0x1
0045def5  MOV ECX,dword ptr [EBP + 0x8]
0045def8  PUSH ECX
0045def9  MOV EDX,dword ptr [0x00790738]
0045deff  MOV EAX,dword ptr [EDX + 0x4]
0045df02  MOV ECX,dword ptr [0x00790738]
0045df08  MOV ECX,dword ptr [ECX + 0x4]
0045df0b  MOV EDX,dword ptr [EAX]
0045df0d  MOV EAX,dword ptr [EDX + 0xbc]
0045df13  CALL EAX
0045df15  MOV ESP,EBP
0045df17  POP EBP
0045df18  RET 0x4
