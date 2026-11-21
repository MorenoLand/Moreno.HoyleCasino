; FUN_005e63b0  005e63b0
005e63b0  PUSH EBP
005e63b1  MOV EBP,ESP
005e63b3  PUSH ECX
005e63b4  MOV dword ptr [EBP + -0x4],ECX
005e63b7  MOV EAX,dword ptr [EBP + 0x8]
005e63ba  PUSH EAX
005e63bb  MOV ECX,dword ptr [EBP + -0x4]
005e63be  CALL 0x005d7f40
005e63c3  MOV ECX,dword ptr [EBP + -0x4]
005e63c6  CMP dword ptr [ECX + 0x4],0x0
005e63ca  JZ 0x005e6409
005e63cc  MOV EDX,dword ptr [EBP + 0x8]
005e63cf  MOVZX EAX,byte ptr [EDX + 0x4]
005e63d3  TEST EAX,EAX
005e63d5  JNZ 0x005e63e0
005e63d7  MOV ECX,dword ptr [EBP + 0x8]
005e63da  CMP dword ptr [ECX + 0x18],0x1
005e63de  JZ 0x005e63e9
005e63e0  MOV EDX,dword ptr [EBP + 0x8]
005e63e3  CMP dword ptr [EDX + 0x18],0x4
005e63e7  JNZ 0x005e6409
005e63e9  PUSH 0x0
005e63eb  PUSH 0x4
005e63ed  MOV EAX,dword ptr [EBP + -0x4]
005e63f0  MOV ECX,dword ptr [EAX + 0x4]
005e63f3  MOV EDX,dword ptr [EBP + -0x4]
005e63f6  MOV EAX,dword ptr [EDX + 0x4]
005e63f9  MOV EDX,dword ptr [ECX]
005e63fb  MOV ECX,EAX
005e63fd  MOV EAX,dword ptr [EDX + 0x8]
005e6400  CALL EAX
005e6402  MOV ECX,dword ptr [EBP + 0x8]
005e6405  MOV byte ptr [ECX + 0x4],0x1
005e6409  MOV ESP,EBP
005e640b  POP EBP
005e640c  RET 0x4
