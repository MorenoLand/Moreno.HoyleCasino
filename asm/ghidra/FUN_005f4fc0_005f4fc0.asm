; FUN_005f4fc0  005f4fc0
005f4fc0  PUSH EBP
005f4fc1  MOV EBP,ESP
005f4fc3  PUSH ECX
005f4fc4  MOV dword ptr [EBP + -0x4],ECX
005f4fc7  MOV EAX,dword ptr [EBP + -0x4]
005f4fca  MOVZX ECX,byte ptr [EAX + 0xa]
005f4fce  TEST ECX,ECX
005f4fd0  JZ 0x005f5004
005f4fd2  MOV EDX,dword ptr [EBP + -0x4]
005f4fd5  MOVZX EAX,byte ptr [EDX + 0x8]
005f4fd9  TEST EAX,EAX
005f4fdb  JZ 0x005f5004
005f4fdd  MOV ECX,dword ptr [EBP + 0x8]
005f4fe0  MOV EDX,dword ptr [EBP + -0x4]
005f4fe3  MOV EAX,dword ptr [ECX + 0xc]
005f4fe6  SUB EAX,dword ptr [EDX + 0x30]
005f4fe9  PUSH EAX
005f4fea  MOV ECX,dword ptr [EBP + 0x8]
005f4fed  MOV EDX,dword ptr [EBP + -0x4]
005f4ff0  MOV EAX,dword ptr [ECX + 0x8]
005f4ff3  SUB EAX,dword ptr [EDX + 0x2c]
005f4ff6  PUSH EAX
005f4ff7  MOV ECX,dword ptr [EBP + -0x4]
005f4ffa  MOV EDX,dword ptr [ECX]
005f4ffc  MOV ECX,dword ptr [EBP + -0x4]
005f4fff  MOV EAX,dword ptr [EDX + 0x44]
005f5002  CALL EAX
005f5004  MOV ESP,EBP
005f5006  POP EBP
005f5007  RET 0x4
