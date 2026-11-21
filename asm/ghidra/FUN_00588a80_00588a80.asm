; FUN_00588a80  00588a80
00588a80  PUSH EBP
00588a81  MOV EBP,ESP
00588a83  SUB ESP,0x38
00588a86  MOV dword ptr [EBP + -0x2c],ECX
00588a89  MOV EAX,[0x007947e0]
00588a8e  MOV ECX,dword ptr [EAX + 0x98]
00588a94  MOV dword ptr [EBP + -0x10],ECX
00588a97  MOV dword ptr [EBP + -0x4],0x0
00588a9e  MOV dword ptr [EBP + -0xc],0x0
00588aa5  MOV dword ptr [EBP + -0x8],0x0
00588aac  JMP 0x00588ab7
00588aae  MOV EDX,dword ptr [EBP + -0x8]
00588ab1  ADD EDX,0x1
00588ab4  MOV dword ptr [EBP + -0x8],EDX
00588ab7  MOV EAX,dword ptr [EBP + -0x2c]
00588aba  MOV ECX,dword ptr [EBP + -0x8]
00588abd  CMP ECX,dword ptr [EAX + 0x3c04]
00588ac3  JGE 0x00588bba
00588ac9  MOV dword ptr [EBP + -0xc],0x0
00588ad0  MOV dword ptr [EBP + -0x14],0x0
00588ad7  JMP 0x00588ae2
00588ad9  MOV EDX,dword ptr [EBP + -0x14]
00588adc  ADD EDX,0x1
00588adf  MOV dword ptr [EBP + -0x14],EDX
00588ae2  CMP dword ptr [EBP + -0x14],0x64
00588ae6  JGE 0x00588b99
00588aec  MOV EAX,dword ptr [EBP + -0x8]
00588aef  IMUL EAX,EAX,0xe10
00588af5  MOV ECX,dword ptr [EBP + -0x2c]
00588af8  LEA EDX,[ECX + EAX*0x1 + 0x328]
00588aff  MOV EAX,dword ptr [EBP + -0x14]
00588b02  IMUL EAX,EAX,0x24
00588b05  MOV ECX,dword ptr [EDX + EAX*0x1 + 0x1c]
00588b09  MOV dword ptr [EBP + -0x20],ECX
00588b0c  MOV EDX,dword ptr [EBP + -0x8]
00588b0f  IMUL EDX,EDX,0xe10
00588b15  MOV EAX,dword ptr [EBP + -0x2c]
00588b18  LEA ECX,[EAX + EDX*0x1 + 0x328]
00588b1f  MOV EDX,dword ptr [EBP + -0x14]
00588b22  IMUL EDX,EDX,0x24
00588b25  MOVSX EAX,byte ptr [ECX + EDX*0x1 + 0x2]
00588b2a  MOV dword ptr [EBP + -0x24],EAX
00588b2d  MOV ECX,dword ptr [EBP + -0x24]
00588b30  MOV EDX,dword ptr [EBP + -0x20]
00588b33  LEA EAX,[EDX + ECX*0x1 + -0x1]
00588b37  MOV dword ptr [EBP + -0x1c],EAX
00588b3a  MOV ECX,dword ptr [EBP + -0x8]
00588b3d  IMUL ECX,ECX,0xe10
00588b43  MOV EDX,dword ptr [EBP + -0x2c]
00588b46  LEA EAX,[EDX + ECX*0x1 + 0x328]
00588b4d  MOV ECX,dword ptr [EBP + -0x14]
00588b50  IMUL ECX,ECX,0x24
00588b53  MOV DL,byte ptr [EAX + ECX*0x1 + 0x4]
00588b57  MOV byte ptr [EBP + -0x15],DL
00588b5a  MOVSX EAX,byte ptr [EBP + -0x15]
00588b5e  TEST EAX,EAX
00588b60  JNZ 0x00588b94
00588b62  CMP dword ptr [EBP + -0x20],0x0
00588b66  JZ 0x00588b94
00588b68  MOV ECX,dword ptr [EBP + -0x20]
00588b6b  CMP ECX,dword ptr [EBP + -0x10]
00588b6e  JG 0x00588b94
00588b70  MOV EDX,dword ptr [EBP + -0x1c]
00588b73  CMP EDX,dword ptr [EBP + -0x10]
00588b76  JL 0x00588b94
00588b78  MOV EAX,dword ptr [EBP + -0xc]
00588b7b  CMP EAX,dword ptr [EBP + -0x1c]
00588b7e  JLE 0x00588b88
00588b80  MOV ECX,dword ptr [EBP + -0xc]
00588b83  MOV dword ptr [EBP + -0x30],ECX
00588b86  JMP 0x00588b8e
00588b88  MOV EDX,dword ptr [EBP + -0x1c]
00588b8b  MOV dword ptr [EBP + -0x30],EDX
00588b8e  MOV EAX,dword ptr [EBP + -0x30]
00588b91  MOV dword ptr [EBP + -0xc],EAX
00588b94  JMP 0x00588ad9
00588b99  MOV ECX,dword ptr [EBP + -0x4]
00588b9c  CMP ECX,dword ptr [EBP + -0xc]
00588b9f  JLE 0x00588ba9
00588ba1  MOV EDX,dword ptr [EBP + -0x4]
00588ba4  MOV dword ptr [EBP + -0x34],EDX
00588ba7  JMP 0x00588baf
00588ba9  MOV EAX,dword ptr [EBP + -0xc]
00588bac  MOV dword ptr [EBP + -0x34],EAX
00588baf  MOV ECX,dword ptr [EBP + -0x34]
00588bb2  MOV dword ptr [EBP + -0x4],ECX
00588bb5  JMP 0x00588aae
00588bba  CMP dword ptr [EBP + -0x4],0x0
00588bbe  JZ 0x00588c1c
00588bc0  MOV EDX,dword ptr [EBP + -0x4]
00588bc3  SUB EDX,dword ptr [EBP + -0x10]
00588bc6  ADD EDX,0x1
00588bc9  MOV dword ptr [EBP + -0x28],EDX
00588bcc  CMP dword ptr [EBP + -0x28],0x64
00588bd0  JLE 0x00588be9
00588bd2  PUSH 0x32f
00588bd7  PUSH 0x6ccecc
00588bdc  PUSH 0x6ccf4c
00588be1  CALL 0x005e9f20
00588be6  ADD ESP,0xc
00588be9  CMP dword ptr [EBP + -0x28],0x64
00588bed  JGE 0x00588bf7
00588bef  MOV ECX,dword ptr [EBP + -0x28]
00588bf2  MOV dword ptr [EBP + -0x38],ECX
00588bf5  JMP 0x00588bfe
00588bf7  MOV dword ptr [EBP + -0x38],0x64
00588bfe  MOV EDX,dword ptr [EBP + -0x38]
00588c01  MOV dword ptr [EBP + -0x28],EDX
00588c04  MOV EAX,dword ptr [EBP + -0x28]
00588c07  PUSH EAX
00588c08  PUSH 0x6ccf1c
00588c0d  CALL 0x0062fde0
00588c12  ADD ESP,0x8
00588c15  MOV EAX,dword ptr [EBP + -0x28]
00588c18  JMP 0x00588c2b
00588c1c  PUSH 0x6cceec
00588c21  CALL 0x0062fde0
00588c26  ADD ESP,0x4
00588c29  XOR EAX,EAX
00588c2b  MOV ESP,EBP
00588c2d  POP EBP
00588c2e  RET
