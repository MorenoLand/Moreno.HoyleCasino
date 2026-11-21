; FUN_005d6cd0  005d6cd0
005d6cd0  PUSH EBP
005d6cd1  MOV EBP,ESP
005d6cd3  SUB ESP,0x44
005d6cd6  MOV dword ptr [EBP + -0x44],ECX
005d6cd9  PUSH 0x0
005d6cdb  PUSH 0x0
005d6cdd  CALL 0x0064c8a0
005d6ce2  ADD ESP,0x8
005d6ce5  MOV dword ptr [EBP + -0x34],EAX
005d6ce8  MOV dword ptr [EBP + -0x30],EDX
005d6ceb  MOV EAX,dword ptr [EBP + -0x34]
005d6cee  MOV dword ptr [EBP + -0x8],EAX
005d6cf1  MOV ECX,dword ptr [EBP + -0x30]
005d6cf4  MOV dword ptr [EBP + -0x4],ECX
005d6cf7  MOV dword ptr [EBP + -0x24],0x1388
005d6cfe  MOV dword ptr [EBP + -0x20],0x2710
005d6d05  MOV dword ptr [EBP + -0x1c],0xc350
005d6d0c  MOV dword ptr [EBP + -0x18],0x186a0
005d6d13  MOV dword ptr [EBP + -0x14],0xf4240
005d6d1a  MOV dword ptr [EBP + -0x10],0x5f5e100
005d6d21  MOV dword ptr [EBP + -0xc],0x3b9aca00
005d6d28  MOV ECX,dword ptr [EBP + -0x44]
005d6d2b  CALL 0x005d52e0
005d6d30  MOV DL,byte ptr [EAX + 0x29]
005d6d33  MOV byte ptr [EBP + -0x3d],DL
005d6d36  MOVZX EAX,byte ptr [EBP + -0x3d]
005d6d3a  TEST EAX,EAX
005d6d3c  JNZ 0x005d6d50
005d6d3e  MOV ECX,dword ptr [0x007947e4]
005d6d44  CALL 0x005da7b0
005d6d49  MOVZX ECX,AL
005d6d4c  TEST ECX,ECX
005d6d4e  JZ 0x005d6d54
005d6d50  XOR AL,AL
005d6d52  JMP 0x005d6dcd
005d6d54  LEA EDX,[EBP + -0x2c]
005d6d57  PUSH EDX
005d6d58  MOV ECX,dword ptr [EBP + -0x44]
005d6d5b  CALL 0x005d5ac0
005d6d60  PUSH -0x1
005d6d62  MOV EAX,[0x0162ee84]
005d6d67  MOV EDX,dword ptr [EAX]
005d6d69  MOV ECX,dword ptr [0x0162ee84]
005d6d6f  MOV EAX,dword ptr [EDX + 0x33c]
005d6d75  CALL EAX
005d6d77  MOVZX ECX,AL
005d6d7a  TEST ECX,ECX
005d6d7c  JZ 0x005d6dbe
005d6d7e  LEA EDX,[EBP + -0x8]
005d6d81  PUSH EDX
005d6d82  MOV EAX,dword ptr [EBP + -0x44]
005d6d85  MOV ECX,dword ptr [EAX + 0x4]
005d6d88  PUSH ECX
005d6d89  MOV EDX,dword ptr [0x007947e4]
005d6d8f  MOV EAX,dword ptr [EDX]
005d6d91  MOV ECX,dword ptr [0x007947e4]
005d6d97  MOV EDX,dword ptr [EAX + 0x27c]
005d6d9d  CALL EDX
005d6d9f  MOV EAX,dword ptr [EBP + -0x4]
005d6da2  PUSH EAX
005d6da3  MOV ECX,dword ptr [EBP + -0x8]
005d6da6  PUSH ECX
005d6da7  LEA EDX,[EBP + -0x3c]
005d6daa  PUSH EDX
005d6dab  LEA ECX,[EBP + -0x2c]
005d6dae  CALL 0x0064c5c0
005d6db3  MOV ECX,dword ptr [EAX]
005d6db5  MOV EDX,dword ptr [EAX + 0x4]
005d6db8  MOV dword ptr [EBP + -0x2c],ECX
005d6dbb  MOV dword ptr [EBP + -0x28],EDX
005d6dbe  CMP dword ptr [EBP + -0x2c],0x3e8
005d6dc5  JL 0x005d6dcb
005d6dc7  XOR AL,AL
005d6dc9  JMP 0x005d6dcd
005d6dcb  MOV AL,0x1
005d6dcd  MOV ESP,EBP
005d6dcf  POP EBP
005d6dd0  RET
