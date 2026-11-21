; FUN_005df010  005df010
005df010  PUSH EBP
005df011  MOV EBP,ESP
005df013  SUB ESP,0x10
005df016  MOV dword ptr [EBP + -0x10],ECX
005df019  MOV dword ptr [EBP + -0xc],0x0
005df020  MOV dword ptr [EBP + -0x8],0x0
005df027  MOV dword ptr [EBP + -0x4],0x0
005df02e  MOV EAX,dword ptr [EBP + -0x10]
005df031  MOV EDX,dword ptr [EAX]
005df033  MOV ECX,dword ptr [EBP + -0x10]
005df036  MOV EAX,dword ptr [EDX + 0x1fc]
005df03c  CALL EAX
005df03e  CMP dword ptr [EBP + 0xc],EAX
005df041  JGE 0x005df093
005df043  MOV ECX,dword ptr [EBP + -0x10]
005df046  MOV EDX,dword ptr [ECX]
005df048  MOV ECX,dword ptr [EBP + -0x10]
005df04b  MOV EAX,dword ptr [EDX + 0x1f4]
005df051  CALL EAX
005df053  CMP dword ptr [EBP + 0xc],EAX
005df056  JGE 0x005df07e
005df058  MOV ECX,dword ptr [EBP + 0xc]
005df05b  IMUL ECX,ECX,0xc
005df05e  ADD ECX,0x75d870
005df064  MOV EDX,dword ptr [EBP + 0x8]
005df067  MOV EAX,dword ptr [ECX]
005df069  MOV dword ptr [EDX],EAX
005df06b  MOV EAX,dword ptr [ECX + 0x4]
005df06e  MOV dword ptr [EDX + 0x4],EAX
005df071  MOV ECX,dword ptr [ECX + 0x8]
005df074  MOV dword ptr [EDX + 0x8],ECX
005df077  MOV EAX,dword ptr [EBP + 0x8]
005df07a  JMP 0x005df0aa
005df07e  MOV EDX,dword ptr [EBP + 0xc]
005df081  PUSH EDX
005df082  MOV EAX,dword ptr [EBP + 0x8]
005df085  PUSH EAX
005df086  MOV ECX,dword ptr [EBP + -0x10]
005df089  CALL 0x00632d40
005df08e  MOV EAX,dword ptr [EBP + 0x8]
005df091  JMP 0x005df0aa
005df093  MOV ECX,dword ptr [EBP + 0x8]
005df096  MOV EDX,dword ptr [EBP + -0xc]
005df099  MOV dword ptr [ECX],EDX
005df09b  MOV EAX,dword ptr [EBP + -0x8]
005df09e  MOV dword ptr [ECX + 0x4],EAX
005df0a1  MOV EDX,dword ptr [EBP + -0x4]
005df0a4  MOV dword ptr [ECX + 0x8],EDX
005df0a7  MOV EAX,dword ptr [EBP + 0x8]
005df0aa  MOV ESP,EBP
005df0ac  POP EBP
005df0ad  RET 0x8
