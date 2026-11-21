; FUN_00460d50  00460d50
00460d50  PUSH EBP
00460d51  MOV EBP,ESP
00460d53  SUB ESP,0x3c
00460d56  PUSH ESI
00460d57  MOV dword ptr [EBP + -0x3c],ECX
00460d5a  MOV dword ptr [EBP + -0x4],0x0
00460d61  JMP 0x00460d6c
00460d63  MOV EAX,dword ptr [EBP + -0x4]
00460d66  ADD EAX,0x1
00460d69  MOV dword ptr [EBP + -0x4],EAX
00460d6c  CMP dword ptr [EBP + -0x4],0x4
00460d70  JGE 0x00460e9b
00460d76  MOV ECX,dword ptr [EBP + -0x4]
00460d79  PUSH ECX
00460d7a  CALL 0x005dcb00
00460d7f  ADD ESP,0x4
00460d82  MOV dword ptr [EBP + -0x28],EAX
00460d85  MOV EDX,dword ptr [EBP + -0x28]
00460d88  MOV AL,byte ptr [EDX + 0x4a0]
00460d8e  MOV byte ptr [EBP + -0x29],AL
00460d91  MOVZX ECX,byte ptr [EBP + -0x29]
00460d95  TEST ECX,ECX
00460d97  JZ 0x00460e30
00460d9d  MOV EDX,dword ptr [EBP + -0x3c]
00460da0  MOV EAX,dword ptr [EDX + 0x4]
00460da3  MOV dword ptr [EBP + -0x30],EAX
00460da6  MOV ECX,dword ptr [EBP + -0x4]
00460da9  SHL ECX,0x5
00460dac  MOV EDX,dword ptr [EBP + -0x30]
00460daf  LEA EAX,[EDX + ECX*0x1 + 0x48]
00460db3  XOR ECX,ECX
00460db5  SHL ECX,0x3
00460db8  MOV EDX,dword ptr [EAX + ECX*0x1]
00460dbb  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x4]
00460dbf  MOV dword ptr [EBP + -0xc],EDX
00460dc2  MOV dword ptr [EBP + -0x8],EAX
00460dc5  MOV ECX,dword ptr [EBP + -0xc]
00460dc8  MOV EDX,dword ptr [EBP + -0x8]
00460dcb  MOV EAX,dword ptr [EBP + -0x4]
00460dce  SHL EAX,0x4
00460dd1  MOV ESI,dword ptr [EBP + -0x3c]
00460dd4  MOV dword ptr [ESI + EAX*0x1 + 0x8],ECX
00460dd8  MOV dword ptr [ESI + EAX*0x1 + 0xc],EDX
00460ddc  MOV ECX,dword ptr [0x00790734]
00460de2  CALL 0x0045e8e0
00460de7  CMP EAX,0x1
00460dea  JNZ 0x00460e2e
00460dec  MOV ECX,dword ptr [EBP + -0x3c]
00460def  MOV EDX,dword ptr [ECX + 0x4]
00460df2  MOV dword ptr [EBP + -0x34],EDX
00460df5  MOV EAX,dword ptr [EBP + -0x4]
00460df8  SHL EAX,0x5
00460dfb  MOV ECX,dword ptr [EBP + -0x34]
00460dfe  LEA EDX,[ECX + EAX*0x1 + 0x48]
00460e02  MOV EAX,0x1
00460e07  SHL EAX,0x3
00460e0a  MOV ECX,dword ptr [EDX + EAX*0x1]
00460e0d  MOV EDX,dword ptr [EDX + EAX*0x1 + 0x4]
00460e11  MOV dword ptr [EBP + -0x14],ECX
00460e14  MOV dword ptr [EBP + -0x10],EDX
00460e17  MOV EAX,dword ptr [EBP + -0x14]
00460e1a  MOV ECX,dword ptr [EBP + -0x10]
00460e1d  MOV EDX,dword ptr [EBP + -0x4]
00460e20  SHL EDX,0x4
00460e23  MOV ESI,dword ptr [EBP + -0x3c]
00460e26  MOV dword ptr [ESI + EDX*0x1 + 0x10],EAX
00460e2a  MOV dword ptr [ESI + EDX*0x1 + 0x14],ECX
00460e2e  JMP 0x00460e96
00460e30  MOV EAX,dword ptr [EBP + -0x3c]
00460e33  MOV ECX,dword ptr [EAX + 0x10c]
00460e39  MOV dword ptr [EBP + -0x38],ECX
00460e3c  MOV EDX,dword ptr [EBP + -0x38]
00460e3f  CMP EDX,dword ptr [EBP + -0x4]
00460e42  JZ 0x00460e96
00460e44  PUSH 0x0
00460e46  PUSH 0x0
00460e48  CALL 0x0064c8a0
00460e4d  ADD ESP,0x8
00460e50  MOV dword ptr [EBP + -0x1c],EAX
00460e53  MOV dword ptr [EBP + -0x18],EDX
00460e56  MOV EAX,dword ptr [EBP + -0x4]
00460e59  SHL EAX,0x4
00460e5c  MOV ECX,dword ptr [EBP + -0x3c]
00460e5f  MOV EDX,dword ptr [EBP + -0x1c]
00460e62  MOV dword ptr [ECX + EAX*0x1 + 0x8],EDX
00460e66  MOV EDX,dword ptr [EBP + -0x18]
00460e69  MOV dword ptr [ECX + EAX*0x1 + 0xc],EDX
00460e6d  PUSH 0x0
00460e6f  PUSH 0x0
00460e71  CALL 0x0064c8a0
00460e76  ADD ESP,0x8
00460e79  MOV dword ptr [EBP + -0x24],EAX
00460e7c  MOV dword ptr [EBP + -0x20],EDX
00460e7f  MOV EAX,dword ptr [EBP + -0x4]
00460e82  SHL EAX,0x4
00460e85  MOV ECX,dword ptr [EBP + -0x3c]
00460e88  MOV EDX,dword ptr [EBP + -0x24]
00460e8b  MOV dword ptr [ECX + EAX*0x1 + 0x10],EDX
00460e8f  MOV EDX,dword ptr [EBP + -0x20]
00460e92  MOV dword ptr [ECX + EAX*0x1 + 0x14],EDX
00460e96  JMP 0x00460d63
00460e9b  POP ESI
00460e9c  MOV ESP,EBP
00460e9e  POP EBP
00460e9f  RET
