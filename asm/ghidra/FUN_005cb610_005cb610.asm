; FUN_005cb610  005cb610
005cb610  PUSH EBP
005cb611  MOV EBP,ESP
005cb613  SUB ESP,0x14
005cb616  MOV dword ptr [EBP + -0x14],ECX
005cb619  PUSH 0x0
005cb61b  PUSH 0x0
005cb61d  CALL 0x0064c8a0
005cb622  ADD ESP,0x8
005cb625  MOV dword ptr [EBP + -0x10],EAX
005cb628  MOV dword ptr [EBP + -0xc],EDX
005cb62b  MOV EAX,dword ptr [EBP + -0x10]
005cb62e  MOV dword ptr [EBP + -0x8],EAX
005cb631  MOV ECX,dword ptr [EBP + -0xc]
005cb634  MOV dword ptr [EBP + -0x4],ECX
005cb637  MOV EDX,dword ptr [EBP + -0x14]
005cb63a  MOV EAX,dword ptr [EDX]
005cb63c  MOV ECX,dword ptr [EBP + -0x14]
005cb63f  MOV EDX,dword ptr [EAX + 0xb4]
005cb645  CALL EDX
005cb647  MOVZX EAX,AL
005cb64a  TEST EAX,EAX
005cb64c  JZ 0x005cb6bb
005cb64e  LEA ECX,[EBP + -0x8]
005cb651  PUSH ECX
005cb652  MOV EDX,dword ptr [0x007947e4]
005cb658  MOV EAX,dword ptr [EDX]
005cb65a  MOV ECX,dword ptr [0x007947e4]
005cb660  MOV EDX,dword ptr [EAX + 0x25c]
005cb666  CALL EDX
005cb668  MOV ECX,EAX
005cb66a  CALL 0x005d5de0
005cb66f  CMP dword ptr [EBP + -0x8],0x0
005cb673  JNZ 0x005cb68d
005cb675  MOV EAX,[0x007947e4]
005cb67a  MOV EDX,dword ptr [EAX]
005cb67c  MOV ECX,dword ptr [0x007947e4]
005cb682  MOV EAX,dword ptr [EDX + 0x2b0]
005cb688  CALL EAX
005cb68a  MOV dword ptr [EBP + -0x8],EAX
005cb68d  MOV ECX,dword ptr [EBP + -0x8]
005cb690  IMUL ECX,ECX,-0x1
005cb693  MOV dword ptr [EBP + -0x8],ECX
005cb696  MOV EDX,dword ptr [EBP + -0x4]
005cb699  IMUL EDX,EDX,-0x1
005cb69c  MOV dword ptr [EBP + -0x4],EDX
005cb69f  PUSH 0x1
005cb6a1  PUSH 0x0
005cb6a3  LEA EAX,[EBP + -0x8]
005cb6a6  PUSH EAX
005cb6a7  MOV ECX,dword ptr [EBP + -0x14]
005cb6aa  MOV EDX,dword ptr [ECX]
005cb6ac  MOV ECX,dword ptr [EBP + -0x14]
005cb6af  MOV EAX,dword ptr [EDX + 0xc4]
005cb6b5  CALL EAX
005cb6b7  MOV AL,0x1
005cb6b9  JMP 0x005cb6bd
005cb6bb  XOR AL,AL
005cb6bd  MOV ESP,EBP
005cb6bf  POP EBP
005cb6c0  RET
