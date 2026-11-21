; FUN_005eb630  005eb630
005eb630  PUSH EBP
005eb631  MOV EBP,ESP
005eb633  SUB ESP,0x8
005eb636  MOV dword ptr [EBP + -0x4],ECX
005eb639  MOV EAX,dword ptr [EBP + 0xc]
005eb63c  PUSH EAX
005eb63d  MOV ECX,dword ptr [EBP + 0x8]
005eb640  PUSH ECX
005eb641  MOV ECX,dword ptr [EBP + -0x4]
005eb644  CALL 0x005f5640
005eb649  MOVZX EDX,AL
005eb64c  TEST EDX,EDX
005eb64e  JZ 0x005eb6ba
005eb650  MOV EAX,dword ptr [EBP + -0x4]
005eb653  CMP dword ptr [EAX + 0x174],0x0
005eb65a  JZ 0x005eb6b1
005eb65c  MOV ECX,dword ptr [EBP + -0x4]
005eb65f  MOVZX EDX,byte ptr [ECX + 0x16d]
005eb666  TEST EDX,EDX
005eb668  JZ 0x005eb6b1
005eb66a  MOV EAX,dword ptr [EBP + -0x4]
005eb66d  MOV CL,byte ptr [EAX + 0x16e]
005eb673  PUSH ECX
005eb674  MOV EDX,dword ptr [EBP + -0x4]
005eb677  MOV EAX,dword ptr [EBP + 0xc]
005eb67a  SUB EAX,dword ptr [EDX + 0x14]
005eb67d  PUSH EAX
005eb67e  MOV ECX,dword ptr [EBP + -0x4]
005eb681  MOV EDX,dword ptr [EBP + 0x8]
005eb684  SUB EDX,dword ptr [ECX + 0x10]
005eb687  PUSH EDX
005eb688  MOV EAX,dword ptr [EBP + -0x4]
005eb68b  MOV ECX,dword ptr [EAX + 0x15c]
005eb691  PUSH ECX
005eb692  MOV EDX,dword ptr [EBP + -0x4]
005eb695  MOV EAX,dword ptr [EDX + 0x164]
005eb69b  PUSH EAX
005eb69c  MOV ECX,dword ptr [EBP + -0x4]
005eb69f  MOV ECX,dword ptr [ECX + 0x174]
005eb6a5  CALL 0x00616ac0
005eb6aa  MOVZX EDX,AL
005eb6ad  TEST EDX,EDX
005eb6af  JZ 0x005eb6ba
005eb6b1  MOV dword ptr [EBP + -0x8],0x1
005eb6b8  JMP 0x005eb6c1
005eb6ba  MOV dword ptr [EBP + -0x8],0x0
005eb6c1  MOV AL,byte ptr [EBP + -0x8]
005eb6c4  MOV ESP,EBP
005eb6c6  POP EBP
005eb6c7  RET 0x8
