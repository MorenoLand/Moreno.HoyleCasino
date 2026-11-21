; FUN_005bef20  005bef20
005bef20  PUSH EBP
005bef21  MOV EBP,ESP
005bef23  SUB ESP,0x60
005bef26  MOV dword ptr [EBP + -0x5c],ECX
005bef29  MOV EAX,dword ptr [EBP + -0x5c]
005bef2c  MOV dword ptr [EAX + 0x4],0x0
005bef33  MOV ECX,dword ptr [EBP + -0x5c]
005bef36  MOV dword ptr [ECX + 0x8],0x0
005bef3d  MOV EDX,dword ptr [EBP + -0x5c]
005bef40  MOV dword ptr [EDX + 0xc],0x0
005bef47  CMP dword ptr [EBP + 0x8],0x0
005bef4b  JNZ 0x005bef53
005bef4d  XOR AL,AL
005bef4f  JMP 0x005befb2
005bef53  MOV dword ptr [EBP + -0x4],0x3fffffff
005bef5a  CMP dword ptr [EBP + -0x4],0x0
005bef5e  JBE 0x005bef68
005bef60  MOV EAX,dword ptr [EBP + -0x4]
005bef63  MOV dword ptr [EBP + -0x60],EAX
005bef66  JMP 0x005bef6f
005bef68  MOV dword ptr [EBP + -0x60],0x1
005bef6f  MOV ECX,dword ptr [EBP + -0x60]
005bef72  CMP ECX,dword ptr [EBP + 0x8]
005bef75  JNC 0x005bef7e
005bef77  CALL 0x005bee10
005bef7c  JMP 0x005befb0
005bef7e  PUSH 0x0
005bef80  MOV EDX,dword ptr [EBP + 0x8]
005bef83  PUSH EDX
005bef84  CALL 0x005c6310
005bef89  ADD ESP,0x8
005bef8c  MOV ECX,dword ptr [EBP + -0x5c]
005bef8f  MOV dword ptr [ECX + 0x4],EAX
005bef92  MOV EDX,dword ptr [EBP + -0x5c]
005bef95  MOV EAX,dword ptr [EBP + -0x5c]
005bef98  MOV ECX,dword ptr [EAX + 0x4]
005bef9b  MOV dword ptr [EDX + 0x8],ECX
005bef9e  MOV EDX,dword ptr [EBP + -0x5c]
005befa1  MOV EAX,dword ptr [EDX + 0x4]
005befa4  MOV ECX,dword ptr [EBP + 0x8]
005befa7  LEA EDX,[EAX + ECX*0x4]
005befaa  MOV EAX,dword ptr [EBP + -0x5c]
005befad  MOV dword ptr [EAX + 0xc],EDX
005befb0  MOV AL,0x1
005befb2  MOV ESP,EBP
005befb4  POP EBP
005befb5  RET 0x4
