; FUN_00426ad0  00426ad0
00426ad0  PUSH EBP
00426ad1  MOV EBP,ESP
00426ad3  SUB ESP,0x48
00426ad6  MOV dword ptr [EBP + -0x48],ECX
00426ad9  MOV EAX,dword ptr [EBP + 0x8]
00426adc  SHL EAX,0x1
00426ade  MOV dword ptr [EBP + -0x8],EAX
00426ae1  MOVZX ECX,byte ptr [EBP + 0xc]
00426ae5  TEST ECX,ECX
00426ae7  JZ 0x00426b5a
00426ae9  MOV EDX,dword ptr [EBP + 0x8]
00426aec  MOV EAX,dword ptr [EBP + -0x48]
00426aef  MOV dword ptr [EAX + EDX*0x4 + 0xb0],0x4
00426afa  PUSH 0x0
00426afc  PUSH 0x0
00426afe  CALL 0x0064c8a0
00426b03  ADD ESP,0x8
00426b06  MOV dword ptr [EBP + -0x1c],EAX
00426b09  MOV dword ptr [EBP + -0x18],EDX
00426b0c  MOV ECX,dword ptr [EBP + -0x18]
00426b0f  PUSH ECX
00426b10  MOV EDX,dword ptr [EBP + -0x1c]
00426b13  PUSH EDX
00426b14  MOV EAX,dword ptr [EBP + 0x8]
00426b17  PUSH EAX
00426b18  CALL 0x005dcb00
00426b1d  ADD ESP,0x4
00426b20  MOV ECX,EAX
00426b22  CALL 0x005d6050
00426b27  PUSH 0x0
00426b29  MOV ECX,dword ptr [EBP + 0x8]
00426b2c  PUSH ECX
00426b2d  MOV EDX,dword ptr [EBP + -0x8]
00426b30  MOV EAX,dword ptr [EBP + -0x48]
00426b33  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
00426b37  CALL 0x00427af0
00426b3c  MOV ECX,dword ptr [EBP + 0x8]
00426b3f  PUSH ECX
00426b40  CALL 0x005dcb00
00426b45  ADD ESP,0x4
00426b48  MOV dword ptr [EBP + -0x38],EAX
00426b4b  MOV EDX,dword ptr [EBP + -0x38]
00426b4e  MOV byte ptr [EDX + 0x4a2],0x1
00426b55  JMP 0x00426c1a
00426b5a  MOV EAX,dword ptr [EBP + -0x8]
00426b5d  MOV ECX,dword ptr [EBP + -0x48]
00426b60  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x8]
00426b64  MOV dword ptr [EBP + -0x3c],EDX
00426b67  MOV EAX,dword ptr [EBP + 0x8]
00426b6a  SHL EAX,0x5
00426b6d  MOV ECX,dword ptr [EBP + -0x3c]
00426b70  LEA EDX,[ECX + EAX*0x1 + 0x48]
00426b74  XOR EAX,EAX
00426b76  SHL EAX,0x3
00426b79  MOV ECX,dword ptr [EDX + EAX*0x1]
00426b7c  MOV EDX,dword ptr [EDX + EAX*0x1 + 0x4]
00426b80  MOV dword ptr [EBP + -0x24],ECX
00426b83  MOV dword ptr [EBP + -0x20],EDX
00426b86  MOV EAX,dword ptr [EBP + -0x24]
00426b89  MOV dword ptr [EBP + -0x4],EAX
00426b8c  MOV ECX,dword ptr [EBP + -0x8]
00426b8f  MOV EDX,dword ptr [EBP + -0x48]
00426b92  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x8]
00426b96  MOV dword ptr [EBP + -0x40],EAX
00426b99  MOV ECX,dword ptr [EBP + 0x8]
00426b9c  SHL ECX,0x5
00426b9f  MOV EDX,dword ptr [EBP + -0x40]
00426ba2  LEA EAX,[EDX + ECX*0x1 + 0x48]
00426ba6  XOR ECX,ECX
00426ba8  SHL ECX,0x3
00426bab  MOV EDX,dword ptr [EAX + ECX*0x1]
00426bae  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x4]
00426bb2  MOV dword ptr [EBP + -0x2c],EDX
00426bb5  MOV dword ptr [EBP + -0x28],EAX
00426bb8  MOV ECX,dword ptr [EBP + -0x28]
00426bbb  MOV dword ptr [EBP + -0xc],ECX
00426bbe  MOV EDX,dword ptr [EBP + -0xc]
00426bc1  PUSH EDX
00426bc2  MOV EAX,dword ptr [EBP + -0x4]
00426bc5  PUSH EAX
00426bc6  CALL 0x0064c8a0
00426bcb  ADD ESP,0x8
00426bce  MOV dword ptr [EBP + -0x34],EAX
00426bd1  MOV dword ptr [EBP + -0x30],EDX
00426bd4  MOV ECX,dword ptr [EBP + -0x34]
00426bd7  MOV dword ptr [EBP + -0x14],ECX
00426bda  MOV EDX,dword ptr [EBP + -0x30]
00426bdd  MOV dword ptr [EBP + -0x10],EDX
00426be0  SUB ESP,0x8
00426be3  FLD double ptr [0x006b3740]
00426be9  FSTP double ptr [ESP]
00426bec  LEA ECX,[EBP + -0x14]
00426bef  CALL 0x0064c560
00426bf4  PUSH 0x0
00426bf6  PUSH 0x0
00426bf8  LEA EAX,[EBP + -0x14]
00426bfb  PUSH EAX
00426bfc  MOV ECX,dword ptr [EBP + -0x8]
00426bff  MOV EDX,dword ptr [EBP + -0x48]
00426c02  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xc]
00426c06  MOV ECX,dword ptr [EBP + -0x8]
00426c09  MOV EDX,dword ptr [EBP + -0x48]
00426c0c  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xc]
00426c10  MOV EAX,dword ptr [EAX]
00426c12  MOV EDX,dword ptr [EAX + 0xc4]
00426c18  CALL EDX
00426c1a  MOV EAX,[0x00790358]
00426c1f  MOV dword ptr [EBP + -0x44],EAX
00426c22  MOV ECX,dword ptr [EBP + -0x44]
00426c25  ADD ECX,dword ptr [EBP + 0x8]
00426c28  MOV byte ptr [ECX + 0xa9],0x0
00426c2f  MOV ESP,EBP
00426c31  POP EBP
00426c32  RET 0x8
