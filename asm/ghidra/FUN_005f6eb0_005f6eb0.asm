; FUN_005f6eb0  005f6eb0
005f6eb0  PUSH EBP
005f6eb1  MOV EBP,ESP
005f6eb3  SUB ESP,0x8
005f6eb6  MOV dword ptr [EBP + -0x8],ECX
005f6eb9  MOV EAX,dword ptr [EBP + 0x8]
005f6ebc  PUSH EAX
005f6ebd  MOV ECX,dword ptr [EBP + -0x8]
005f6ec0  CALL 0x005f5300
005f6ec5  MOV dword ptr [EBP + -0x4],0x0
005f6ecc  JMP 0x005f6ed7
005f6ece  MOV ECX,dword ptr [EBP + -0x4]
005f6ed1  ADD ECX,0x1
005f6ed4  MOV dword ptr [EBP + -0x4],ECX
005f6ed7  CMP dword ptr [EBP + -0x4],0x4
005f6edb  JGE 0x005f6f10
005f6edd  MOV EDX,dword ptr [EBP + -0x4]
005f6ee0  MOV EAX,dword ptr [EBP + -0x8]
005f6ee3  CMP dword ptr [EAX + EDX*0x4 + 0x48],0x0
005f6ee8  JZ 0x005f6f0e
005f6eea  MOV ECX,dword ptr [EBP + 0x8]
005f6eed  ADD ECX,0x2
005f6ef0  PUSH ECX
005f6ef1  MOV EDX,dword ptr [EBP + -0x4]
005f6ef4  MOV EAX,dword ptr [EBP + -0x8]
005f6ef7  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x48]
005f6efb  MOV EDX,dword ptr [EBP + -0x4]
005f6efe  MOV EAX,dword ptr [EBP + -0x8]
005f6f01  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x48]
005f6f05  MOV EAX,dword ptr [ECX]
005f6f07  MOV ECX,EDX
005f6f09  MOV EDX,dword ptr [EAX + 0x6c]
005f6f0c  CALL EDX
005f6f0e  JMP 0x005f6ece
005f6f10  MOV ECX,dword ptr [EBP + -0x8]
005f6f13  CALL 0x005f54a0
005f6f18  MOVZX EAX,AL
005f6f1b  TEST EAX,EAX
005f6f1d  JZ 0x005f6f2c
005f6f1f  MOV ECX,dword ptr [EBP + -0x8]
005f6f22  MOV EDX,dword ptr [ECX]
005f6f24  MOV ECX,dword ptr [EBP + -0x8]
005f6f27  MOV EAX,dword ptr [EDX + 0x74]
005f6f2a  CALL EAX
005f6f2c  MOV ESP,EBP
005f6f2e  POP EBP
005f6f2f  RET 0x4
