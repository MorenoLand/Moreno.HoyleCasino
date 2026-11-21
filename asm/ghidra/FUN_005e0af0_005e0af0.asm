; FUN_005e0af0  005e0af0
005e0af0  PUSH EBP
005e0af1  MOV EBP,ESP
005e0af3  SUB ESP,0xc
005e0af6  MOV dword ptr [EBP + -0xc],ECX
005e0af9  MOV dword ptr [EBP + -0x8],0x0
005e0b00  MOV dword ptr [EBP + -0x4],0x0
005e0b07  JMP 0x005e0b12
005e0b09  MOV EAX,dword ptr [EBP + -0x4]
005e0b0c  ADD EAX,0x1
005e0b0f  MOV dword ptr [EBP + -0x4],EAX
005e0b12  MOV ECX,dword ptr [EBP + -0xc]
005e0b15  MOV EDX,dword ptr [ECX]
005e0b17  MOV ECX,dword ptr [EBP + -0xc]
005e0b1a  MOV EAX,dword ptr [EDX + 0xe4]
005e0b20  CALL EAX
005e0b22  CMP dword ptr [EBP + -0x4],EAX
005e0b25  JGE 0x005e0b82
005e0b27  MOV ECX,dword ptr [EBP + -0x4]
005e0b2a  IMUL ECX,ECX,0xc
005e0b2d  MOV EDX,dword ptr [ECX + 0x7947f4]
005e0b33  MOV dword ptr [EBP + -0x8],EDX
005e0b36  CMP dword ptr [0x0163069c],0x0
005e0b3d  JZ 0x005e0b60
005e0b3f  MOV EAX,dword ptr [EBP + -0x4]
005e0b42  IMUL EAX,EAX,0xc
005e0b45  MOV ECX,dword ptr [EAX + 0x7947f0]
005e0b4b  PUSH ECX
005e0b4c  MOV ECX,dword ptr [0x0163069c]
005e0b52  CALL 0x00653e30
005e0b57  MOVZX EDX,AL
005e0b5a  TEST EDX,EDX
005e0b5c  JZ 0x005e0b60
005e0b5e  JMP 0x005e0b09
005e0b60  MOV EAX,dword ptr [EBP + 0x14]
005e0b63  PUSH EAX
005e0b64  MOV ECX,dword ptr [EBP + 0x10]
005e0b67  PUSH ECX
005e0b68  MOV EDX,dword ptr [EBP + 0xc]
005e0b6b  PUSH EDX
005e0b6c  MOV EAX,dword ptr [EBP + 0x8]
005e0b6f  PUSH EAX
005e0b70  MOV ECX,dword ptr [EBP + -0x8]
005e0b73  MOV EDX,dword ptr [ECX]
005e0b75  MOV ECX,dword ptr [EBP + -0x8]
005e0b78  MOV EAX,dword ptr [EDX + 0x98]
005e0b7e  CALL EAX
005e0b80  JMP 0x005e0b09
005e0b82  MOV ESP,EBP
005e0b84  POP EBP
005e0b85  RET 0x10
