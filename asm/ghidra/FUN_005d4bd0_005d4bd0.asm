; FUN_005d4bd0  005d4bd0
005d4bd0  PUSH EBP
005d4bd1  MOV EBP,ESP
005d4bd3  SUB ESP,0x8
005d4bd6  MOV dword ptr [EBP + -0x8],ECX
005d4bd9  MOV EAX,dword ptr [EBP + -0x8]
005d4bdc  MOVZX ECX,byte ptr [EAX + 0x18]
005d4be0  TEST ECX,ECX
005d4be2  JNZ 0x005d4be6
005d4be4  JMP 0x005d4c4e
005d4be6  MOV EDX,dword ptr [EBP + -0x8]
005d4be9  MOV EAX,dword ptr [EDX]
005d4beb  MOV ECX,dword ptr [EBP + -0x8]
005d4bee  MOV EDX,dword ptr [EAX + 0x10]
005d4bf1  CALL EDX
005d4bf3  MOV dword ptr [EBP + -0x4],EAX
005d4bf6  MOV EAX,dword ptr [EBP + -0x8]
005d4bf9  MOV ECX,dword ptr [EAX + 0x4]
005d4bfc  CALL 0x005eb220
005d4c01  CMP EAX,dword ptr [EBP + -0x4]
005d4c04  JZ 0x005d4c4e
005d4c06  MOV ECX,dword ptr [EBP + -0x8]
005d4c09  MOV EDX,dword ptr [EBP + -0x4]
005d4c0c  CMP EDX,dword ptr [ECX + 0x1c]
005d4c0f  JNZ 0x005d4c34
005d4c11  MOV dword ptr [EBP + -0x4],0x0
005d4c18  MOV EAX,dword ptr [EBP + -0x4]
005d4c1b  PUSH EAX
005d4c1c  MOV ECX,dword ptr [EBP + -0x8]
005d4c1f  MOV EDX,dword ptr [ECX + 0x4]
005d4c22  MOV EAX,dword ptr [EBP + -0x8]
005d4c25  MOV ECX,dword ptr [EAX + 0x4]
005d4c28  MOV EDX,dword ptr [EDX]
005d4c2a  MOV EAX,dword ptr [EDX + 0xb0]
005d4c30  CALL EAX
005d4c32  JMP 0x005d4c4e
005d4c34  MOV ECX,dword ptr [EBP + -0x4]
005d4c37  PUSH ECX
005d4c38  MOV EDX,dword ptr [EBP + -0x8]
005d4c3b  MOV EAX,dword ptr [EDX + 0x4]
005d4c3e  MOV ECX,dword ptr [EBP + -0x8]
005d4c41  MOV ECX,dword ptr [ECX + 0x4]
005d4c44  MOV EDX,dword ptr [EAX]
005d4c46  MOV EAX,dword ptr [EDX + 0xb0]
005d4c4c  CALL EAX
005d4c4e  MOV ESP,EBP
005d4c50  POP EBP
005d4c51  RET
