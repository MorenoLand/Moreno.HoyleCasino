; FUN_005b6e30  005b6e30
005b6e30  PUSH EBP
005b6e31  MOV EBP,ESP
005b6e33  SUB ESP,0x28
005b6e36  MOV dword ptr [EBP + -0x28],ECX
005b6e39  MOV dword ptr [EBP + -0x4],0x0
005b6e40  JMP 0x005b6e4b
005b6e42  MOV EAX,dword ptr [EBP + -0x4]
005b6e45  ADD EAX,0x1
005b6e48  MOV dword ptr [EBP + -0x4],EAX
005b6e4b  CMP dword ptr [EBP + -0x4],0x4
005b6e4f  JGE 0x005b6f39
005b6e55  MOV ECX,dword ptr [EBP + -0x4]
005b6e58  PUSH ECX
005b6e59  CALL 0x005dcb00
005b6e5e  ADD ESP,0x4
005b6e61  MOV dword ptr [EBP + -0x18],EAX
005b6e64  MOV EDX,dword ptr [EBP + -0x18]
005b6e67  MOV AL,byte ptr [EDX + 0x4a0]
005b6e6d  MOV byte ptr [EBP + -0x19],AL
005b6e70  MOVZX ECX,byte ptr [EBP + -0x19]
005b6e74  TEST ECX,ECX
005b6e76  JZ 0x005b6f34
005b6e7c  MOV EDX,dword ptr [EBP + -0x4]
005b6e7f  MOV EAX,dword ptr [EBP + -0x28]
005b6e82  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x580]
005b6e89  MOV dword ptr [EBP + -0x20],ECX
005b6e8c  MOV EDX,dword ptr [EBP + -0x4]
005b6e8f  SHL EDX,0x5
005b6e92  MOV EAX,dword ptr [EBP + -0x20]
005b6e95  LEA ECX,[EAX + EDX*0x1 + 0x48]
005b6e99  XOR EDX,EDX
005b6e9b  SHL EDX,0x3
005b6e9e  MOV EAX,dword ptr [ECX + EDX*0x1]
005b6ea1  MOV ECX,dword ptr [ECX + EDX*0x1 + 0x4]
005b6ea5  MOV dword ptr [EBP + -0xc],EAX
005b6ea8  MOV dword ptr [EBP + -0x8],ECX
005b6eab  MOV EDX,dword ptr [EBP + -0x8]
005b6eae  PUSH EDX
005b6eaf  MOV EAX,dword ptr [EBP + -0xc]
005b6eb2  PUSH EAX
005b6eb3  MOV ECX,dword ptr [EBP + -0x4]
005b6eb6  PUSH ECX
005b6eb7  CALL 0x005dcb00
005b6ebc  ADD ESP,0x4
005b6ebf  MOV ECX,EAX
005b6ec1  CALL 0x005d5cf0
005b6ec6  MOV EDX,dword ptr [EBP + -0x4]
005b6ec9  MOV EAX,dword ptr [EBP + -0x28]
005b6ecc  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x580]
005b6ed3  CALL 0x005cb9b0
005b6ed8  MOV ECX,dword ptr [EBP + -0x4]
005b6edb  MOV EDX,dword ptr [EBP + -0x28]
005b6ede  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x634]
005b6ee5  MOV dword ptr [EBP + -0x24],EAX
005b6ee8  MOV ECX,dword ptr [EBP + -0x4]
005b6eeb  SHL ECX,0x5
005b6eee  MOV EDX,dword ptr [EBP + -0x24]
005b6ef1  LEA EAX,[EDX + ECX*0x1 + 0x48]
005b6ef5  XOR ECX,ECX
005b6ef7  SHL ECX,0x3
005b6efa  MOV EDX,dword ptr [EAX + ECX*0x1]
005b6efd  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x4]
005b6f01  MOV dword ptr [EBP + -0x14],EDX
005b6f04  MOV dword ptr [EBP + -0x10],EAX
005b6f07  MOV ECX,dword ptr [EBP + -0x10]
005b6f0a  PUSH ECX
005b6f0b  MOV EDX,dword ptr [EBP + -0x14]
005b6f0e  PUSH EDX
005b6f0f  MOV EAX,dword ptr [EBP + -0x4]
005b6f12  PUSH EAX
005b6f13  CALL 0x005dcb00
005b6f18  ADD ESP,0x4
005b6f1b  MOV ECX,EAX
005b6f1d  CALL 0x005d5cf0
005b6f22  MOV ECX,dword ptr [EBP + -0x4]
005b6f25  MOV EDX,dword ptr [EBP + -0x28]
005b6f28  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x634]
005b6f2f  CALL 0x005cb9b0
005b6f34  JMP 0x005b6e42
005b6f39  MOV ESP,EBP
005b6f3b  POP EBP
005b6f3c  RET
