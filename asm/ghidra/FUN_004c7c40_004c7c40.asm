; FUN_004c7c40  004c7c40
004c7c40  PUSH EBP
004c7c41  MOV EBP,ESP
004c7c43  PUSH -0x1
004c7c45  PUSH 0x6a22a2
004c7c4a  MOV EAX,FS:[0x0]
004c7c50  PUSH EAX
004c7c51  SUB ESP,0x20
004c7c54  MOV EAX,[0x00781870]
004c7c59  XOR EAX,EBP
004c7c5b  PUSH EAX
004c7c5c  LEA EAX,[EBP + -0xc]
004c7c5f  MOV FS:[0x0],EAX
004c7c65  MOV dword ptr [EBP + -0x24],ECX
004c7c68  MOV dword ptr [EBP + -0x20],0x0
004c7c6f  LEA ECX,[EBP + -0x14]
004c7c72  CALL 0x00484300
004c7c77  MOV dword ptr [EBP + -0x4],0x1
004c7c7e  MOV EAX,dword ptr [EBP + -0x24]
004c7c81  CMP dword ptr [EAX + 0x8],0x0
004c7c85  JZ 0x004c7cf0
004c7c87  MOV dword ptr [EBP + -0x18],0x0
004c7c8e  JMP 0x004c7c99
004c7c90  MOV ECX,dword ptr [EBP + -0x18]
004c7c93  ADD ECX,0x1
004c7c96  MOV dword ptr [EBP + -0x18],ECX
004c7c99  MOV EDX,dword ptr [EBP + -0x24]
004c7c9c  MOV ECX,dword ptr [EDX + 0x8]
004c7c9f  CALL 0x0060c9a0
004c7ca4  CMP dword ptr [EBP + -0x18],EAX
004c7ca7  JGE 0x004c7cf0
004c7ca9  MOV EAX,dword ptr [EBP + -0x18]
004c7cac  PUSH EAX
004c7cad  MOV ECX,dword ptr [EBP + -0x24]
004c7cb0  MOV EDX,dword ptr [ECX + 0x8]
004c7cb3  PUSH EDX
004c7cb4  CALL 0x004c7310
004c7cb9  ADD ESP,0x8
004c7cbc  PUSH EAX
004c7cbd  LEA EAX,[EBP + -0x19]
004c7cc0  PUSH EAX
004c7cc1  MOV ECX,dword ptr [EBP + -0x24]
004c7cc4  CALL 0x004dd780
004c7cc9  MOV dword ptr [EBP + -0x28],EAX
004c7ccc  MOV ECX,dword ptr [EBP + -0x28]
004c7ccf  MOV dword ptr [EBP + -0x2c],ECX
004c7cd2  MOV byte ptr [EBP + -0x4],0x2
004c7cd6  MOV EDX,dword ptr [EBP + -0x2c]
004c7cd9  PUSH EDX
004c7cda  LEA ECX,[EBP + -0x14]
004c7cdd  CALL 0x00484830
004c7ce2  MOV byte ptr [EBP + -0x4],0x1
004c7ce6  LEA ECX,[EBP + -0x19]
004c7ce9  CALL 0x00464210
004c7cee  JMP 0x004c7c90
004c7cf0  LEA EAX,[EBP + -0x14]
004c7cf3  PUSH EAX
004c7cf4  MOV ECX,dword ptr [EBP + 0x8]
004c7cf7  CALL 0x00484320
004c7cfc  MOV ECX,dword ptr [EBP + -0x20]
004c7cff  OR ECX,0x1
004c7d02  MOV dword ptr [EBP + -0x20],ECX
004c7d05  MOV byte ptr [EBP + -0x4],0x0
004c7d09  LEA ECX,[EBP + -0x14]
004c7d0c  CALL 0x00484470
004c7d11  MOV EAX,dword ptr [EBP + 0x8]
004c7d14  MOV ECX,dword ptr [EBP + -0xc]
004c7d17  MOV dword ptr FS:[0x0],ECX
004c7d1e  POP ECX
004c7d1f  MOV ESP,EBP
004c7d21  POP EBP
004c7d22  RET 0x4
