; FUN_005eb5a0  005eb5a0
005eb5a0  PUSH EBP
005eb5a1  MOV EBP,ESP
005eb5a3  PUSH ECX
005eb5a4  MOV dword ptr [EBP + -0x4],ECX
005eb5a7  MOV EAX,dword ptr [EBP + -0x4]
005eb5aa  MOVZX ECX,byte ptr [EAX + 0x24]
005eb5ae  TEST ECX,ECX
005eb5b0  JNZ 0x005eb5ca
005eb5b2  MOV EDX,dword ptr [EBP + -0x4]
005eb5b5  MOV EAX,dword ptr [EDX]
005eb5b7  MOV ECX,dword ptr [EBP + -0x4]
005eb5ba  MOV EDX,dword ptr [EAX + 0xac]
005eb5c0  CALL EDX
005eb5c2  MOV ECX,dword ptr [EBP + -0x4]
005eb5c5  CALL 0x005f5420
005eb5ca  MOV ESP,EBP
005eb5cc  POP EBP
005eb5cd  RET
