; FUN_00616b30  00616b30
00616b30  PUSH EBP
00616b31  MOV EBP,ESP
00616b33  SUB ESP,0x10
00616b36  MOV dword ptr [EBP + -0xc],ECX
00616b39  LEA EAX,[EBP + -0x2]
00616b3c  PUSH EAX
00616b3d  LEA ECX,[EBP + -0x1]
00616b40  PUSH ECX
00616b41  LEA EDX,[EBP + -0x3]
00616b44  PUSH EDX
00616b45  MOV EAX,dword ptr [EBP + 0x14]
00616b48  PUSH EAX
00616b49  MOV ECX,dword ptr [EBP + 0x10]
00616b4c  PUSH ECX
00616b4d  MOV EDX,dword ptr [EBP + -0xc]
00616b50  MOV EAX,dword ptr [EDX + 0x164]
00616b56  PUSH EAX
00616b57  MOV ECX,dword ptr [EBP + 0xc]
00616b5a  PUSH ECX
00616b5b  MOV EDX,dword ptr [EBP + 0x8]
00616b5e  PUSH EDX
00616b5f  CALL 0x0061d290
00616b64  ADD ESP,0x20
00616b67  MOVZX EAX,byte ptr [EBP + -0x3]
00616b6b  MOV ECX,dword ptr [EBP + -0xc]
00616b6e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x16c]
00616b75  PUSH EDX
00616b76  CALL 0x00617a70
00616b7b  ADD ESP,0x4
00616b7e  MOV dword ptr [EBP + -0x7],EAX
00616b81  MOV EAX,dword ptr [EBP + 0x18]
00616b84  MOV ECX,dword ptr [EBP + -0x7]
00616b87  MOV dword ptr [EAX],ECX
00616b89  MOV EDX,dword ptr [EBP + 0x18]
00616b8c  MOV AL,byte ptr [EBP + -0x1]
00616b8f  MOV byte ptr [EDX + 0x3],AL
00616b92  MOV ECX,dword ptr [EBP + 0x1c]
00616b95  MOV DL,byte ptr [EBP + -0x2]
00616b98  MOV byte ptr [ECX],DL
00616b9a  MOV EAX,dword ptr [EBP + 0x1c]
00616b9d  MOVZX ECX,byte ptr [EAX]
00616ba0  MOV dword ptr [EBP + -0x10],ECX
00616ba3  MOV EDX,dword ptr [EBP + -0x10]
00616ba6  SUB EDX,0x1
00616ba9  MOV dword ptr [EBP + -0x10],EDX
00616bac  CMP dword ptr [EBP + -0x10],0x1f
00616bb0  JA 0x00616bde
00616bb2  MOV EAX,dword ptr [EBP + -0x10]
00616bb5  MOVZX ECX,byte ptr [EAX + 0x616bf4]
00616bbc  JMP dword ptr [ECX*0x4 + 0x616be4]
00616bc3  MOV EDX,dword ptr [EBP + 0x18]
00616bc6  MOV byte ptr [EDX + 0x3],0x0
00616bca  JMP 0x00616bde
00616bcc  MOV EAX,dword ptr [EBP + 0x18]
00616bcf  MOV byte ptr [EAX + 0x3],0xff
00616bd3  JMP 0x00616bde
00616bd7  MOV ECX,dword ptr [EBP + 0x18]
00616bda  MOV byte ptr [ECX + 0x3],0xff
00616bde  MOV ESP,EBP
00616be0  POP EBP
00616be1  RET 0x18
