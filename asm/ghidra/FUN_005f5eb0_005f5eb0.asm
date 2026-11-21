; FUN_005f5eb0  005f5eb0
005f5eb0  PUSH EBP
005f5eb1  MOV EBP,ESP
005f5eb3  PUSH ECX
005f5eb4  MOV dword ptr [EBP + -0x4],ECX
005f5eb7  MOV EAX,dword ptr [EBP + -0x4]
005f5eba  CMP dword ptr [EAX + 0x4],0x0
005f5ebe  JZ 0x005f5edf
005f5ec0  MOV ECX,dword ptr [EBP + -0x4]
005f5ec3  MOV EDX,dword ptr [ECX]
005f5ec5  MOV ECX,dword ptr [EBP + -0x4]
005f5ec8  MOV EAX,dword ptr [EDX + 0xac]
005f5ece  CALL EAX
005f5ed0  MOV ECX,dword ptr [EBP + -0x4]
005f5ed3  PUSH ECX
005f5ed4  MOV EDX,dword ptr [EBP + -0x4]
005f5ed7  MOV ECX,dword ptr [EDX + 0x4]
005f5eda  CALL 0x005f8e60
005f5edf  MOV EAX,dword ptr [EBP + 0x8]
005f5ee2  PUSH EAX
005f5ee3  MOV ECX,dword ptr [EBP + -0x4]
005f5ee6  CALL 0x005f5860
005f5eeb  MOV ECX,dword ptr [EBP + -0x4]
005f5eee  CMP dword ptr [ECX + 0x28],0x0
005f5ef2  JZ 0x005f5f13
005f5ef4  MOV EDX,dword ptr [EBP + -0x4]
005f5ef7  PUSH EDX
005f5ef8  MOV EAX,dword ptr [EBP + -0x4]
005f5efb  MOV ECX,dword ptr [EAX + 0x4]
005f5efe  CALL 0x005f8e20
005f5f03  MOV ECX,dword ptr [EBP + -0x4]
005f5f06  MOV EDX,dword ptr [ECX]
005f5f08  MOV ECX,dword ptr [EBP + -0x4]
005f5f0b  MOV EAX,dword ptr [EDX + 0xac]
005f5f11  CALL EAX
005f5f13  MOV ESP,EBP
005f5f15  POP EBP
005f5f16  RET 0x4
