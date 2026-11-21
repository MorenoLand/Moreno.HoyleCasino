; FUN_0043bbd0  0043bbd0
0043bbd0  PUSH EBP
0043bbd1  MOV EBP,ESP
0043bbd3  SUB ESP,0x14
0043bbd6  MOV dword ptr [EBP + -0x14],ECX
0043bbd9  CMP dword ptr [EBP + 0x10],0x3
0043bbdd  JLE 0x0043bbe4
0043bbdf  JMP 0x0043bcc0
0043bbe4  MOV EAX,dword ptr [EBP + 0x10]
0043bbe7  SHL EAX,0x5
0043bbea  MOV ECX,dword ptr [EBP + -0x14]
0043bbed  LEA EDX,[ECX + EAX*0x1 + 0x48]
0043bbf1  XOR EAX,EAX
0043bbf3  SHL EAX,0x3
0043bbf6  MOV ECX,dword ptr [EDX + EAX*0x1]
0043bbf9  MOV EDX,dword ptr [EDX + EAX*0x1 + 0x4]
0043bbfd  MOV dword ptr [EBP + -0x8],ECX
0043bc00  MOV dword ptr [EBP + -0x4],EDX
0043bc03  CMP dword ptr [EBP + -0x8],0x0
0043bc07  JNZ 0x0043bc2e
0043bc09  MOV EAX,dword ptr [EBP + 0x10]
0043bc0c  SHL EAX,0x5
0043bc0f  MOV ECX,dword ptr [EBP + -0x14]
0043bc12  LEA EDX,[ECX + EAX*0x1 + 0x48]
0043bc16  XOR EAX,EAX
0043bc18  SHL EAX,0x3
0043bc1b  MOV ECX,dword ptr [EDX + EAX*0x1]
0043bc1e  MOV EDX,dword ptr [EDX + EAX*0x1 + 0x4]
0043bc22  MOV dword ptr [EBP + -0x10],ECX
0043bc25  MOV dword ptr [EBP + -0xc],EDX
0043bc28  CMP dword ptr [EBP + -0xc],0x0
0043bc2c  JZ 0x0043bc8e
0043bc2e  MOV EAX,dword ptr [EBP + -0x14]
0043bc31  PUSH EAX
0043bc32  MOV ECX,dword ptr [0x007906d4]
0043bc38  CALL 0x00434820
0043bc3d  TEST EAX,EAX
0043bc3f  JNZ 0x0043bc5d
0043bc41  MOV ECX,dword ptr [EBP + 0x14]
0043bc44  PUSH ECX
0043bc45  MOV EDX,dword ptr [EBP + 0x10]
0043bc48  PUSH EDX
0043bc49  MOV EAX,[0x007906d4]
0043bc4e  MOV ECX,dword ptr [EAX + 0x8]
0043bc51  CALL 0x005cb7d0
0043bc56  MOVZX ECX,AL
0043bc59  TEST ECX,ECX
0043bc5b  JZ 0x0043bc8e
0043bc5d  MOV EDX,dword ptr [EBP + -0x14]
0043bc60  PUSH EDX
0043bc61  MOV ECX,dword ptr [0x007906d4]
0043bc67  CALL 0x00434820
0043bc6c  CMP EAX,0x2
0043bc6f  JNZ 0x0043bca8
0043bc71  MOV EAX,dword ptr [EBP + 0x14]
0043bc74  PUSH EAX
0043bc75  MOV ECX,dword ptr [EBP + 0x10]
0043bc78  PUSH ECX
0043bc79  MOV EDX,dword ptr [0x007906d4]
0043bc7f  MOV ECX,dword ptr [EDX + 0x10]
0043bc82  CALL 0x005cb7d0
0043bc87  MOVZX EAX,AL
0043bc8a  TEST EAX,EAX
0043bc8c  JNZ 0x0043bca8
0043bc8e  MOV ECX,dword ptr [EBP + 0x10]
0043bc91  MOV EDX,dword ptr [EBP + -0x14]
0043bc94  MOV EAX,dword ptr [EBP + 0x8]
0043bc97  MOV dword ptr [EDX + ECX*0x8 + 0xf0],EAX
0043bc9e  MOV EAX,dword ptr [EBP + 0xc]
0043bca1  MOV dword ptr [EDX + ECX*0x8 + 0xf4],EAX
0043bca8  MOV ECX,dword ptr [EBP + 0x14]
0043bcab  PUSH ECX
0043bcac  MOV EDX,dword ptr [EBP + 0x10]
0043bcaf  PUSH EDX
0043bcb0  MOV EAX,dword ptr [EBP + 0xc]
0043bcb3  PUSH EAX
0043bcb4  MOV ECX,dword ptr [EBP + 0x8]
0043bcb7  PUSH ECX
0043bcb8  MOV ECX,dword ptr [EBP + -0x14]
0043bcbb  CALL 0x005cb6d0
0043bcc0  MOV ESP,EBP
0043bcc2  POP EBP
0043bcc3  RET 0x10
