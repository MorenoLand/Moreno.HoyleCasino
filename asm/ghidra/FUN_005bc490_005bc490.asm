; FUN_005bc490  005bc490
005bc490  PUSH EBP
005bc491  MOV EBP,ESP
005bc493  SUB ESP,0x38
005bc496  MOV dword ptr [EBP + -0x38],ECX
005bc499  CMP dword ptr [EBP + 0xc],0x0
005bc49d  JZ 0x005bc4a7
005bc49f  MOV EAX,dword ptr [EBP + 0xc]
005bc4a2  CMP EAX,dword ptr [EBP + 0x14]
005bc4a5  JZ 0x005bc4ad
005bc4a7  CALL dword ptr [0x006b2274]
005bc4ad  MOV ECX,dword ptr [EBP + 0x10]
005bc4b0  XOR EDX,EDX
005bc4b2  CMP ECX,dword ptr [EBP + 0x18]
005bc4b5  SETZ DL
005bc4b8  MOVZX EAX,DL
005bc4bb  NEG EAX
005bc4bd  SBB EAX,EAX
005bc4bf  ADD EAX,0x1
005bc4c2  MOVZX ECX,AL
005bc4c5  TEST ECX,ECX
005bc4c7  JZ 0x005bc507
005bc4c9  MOV EDX,dword ptr [EBP + 0x10]
005bc4cc  PUSH EDX
005bc4cd  MOV EAX,dword ptr [EBP + -0x38]
005bc4d0  MOV ECX,dword ptr [EAX + 0x8]
005bc4d3  PUSH ECX
005bc4d4  MOV EDX,dword ptr [EBP + 0x18]
005bc4d7  PUSH EDX
005bc4d8  CALL 0x005c0980
005bc4dd  ADD ESP,0xc
005bc4e0  MOV dword ptr [EBP + -0x4],EAX
005bc4e3  MOV EAX,dword ptr [EBP + -0x38]
005bc4e6  MOV ECX,dword ptr [EAX + 0x8]
005bc4e9  MOV dword ptr [EBP + -0x34],ECX
005bc4ec  MOV EDX,dword ptr [EBP + -0x34]
005bc4ef  MOV dword ptr [EBP + -0x30],EDX
005bc4f2  MOV EAX,dword ptr [EBP + -0x4]
005bc4f5  MOV dword ptr [EBP + -0x2c],EAX
005bc4f8  MOV CL,byte ptr [EBP + -0x28]
005bc4fb  MOV byte ptr [EBP + -0x27],CL
005bc4fe  MOV EDX,dword ptr [EBP + -0x38]
005bc501  MOV EAX,dword ptr [EBP + -0x4]
005bc504  MOV dword ptr [EDX + 0x8],EAX
005bc507  MOV ECX,dword ptr [EBP + 0x8]
005bc50a  MOV EDX,dword ptr [EBP + 0xc]
005bc50d  MOV dword ptr [ECX],EDX
005bc50f  MOV EAX,dword ptr [EBP + 0x10]
005bc512  MOV dword ptr [ECX + 0x4],EAX
005bc515  MOV EAX,dword ptr [EBP + 0x8]
005bc518  MOV ESP,EBP
005bc51a  POP EBP
005bc51b  RET 0x14
