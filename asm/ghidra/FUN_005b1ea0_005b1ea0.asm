; FUN_005b1ea0  005b1ea0
005b1ea0  PUSH EBP
005b1ea1  MOV EBP,ESP
005b1ea3  SUB ESP,0x8
005b1ea6  MOV dword ptr [EBP + -0x4],ECX
005b1ea9  CMP dword ptr [EBP + 0x10],0x37
005b1ead  JZ 0x005b1ec1
005b1eaf  CMP dword ptr [EBP + 0x10],0x38
005b1eb3  JZ 0x005b1ec1
005b1eb5  CMP dword ptr [EBP + 0x10],0x39
005b1eb9  JZ 0x005b1ec1
005b1ebb  CMP dword ptr [EBP + 0x10],0x3a
005b1ebf  JNZ 0x005b1ee8
005b1ec1  PUSH 0x32
005b1ec3  MOV ECX,dword ptr [0x0163068c]
005b1ec9  CALL 0x005fb5e0
005b1ece  MOV dword ptr [EBP + -0x8],EAX
005b1ed1  PUSH 0x0
005b1ed3  PUSH 0x3154f9
005b1ed8  MOV EAX,dword ptr [EBP + -0x8]
005b1edb  MOV EDX,dword ptr [EAX]
005b1edd  MOV ECX,dword ptr [EBP + -0x8]
005b1ee0  MOV EAX,dword ptr [EDX + 0xf0]
005b1ee6  CALL EAX
005b1ee8  MOV ESP,EBP
005b1eea  POP EBP
005b1eeb  RET 0xc
