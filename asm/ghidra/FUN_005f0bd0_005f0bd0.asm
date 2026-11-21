; FUN_005f0bd0  005f0bd0
005f0bd0  PUSH EBP
005f0bd1  MOV EBP,ESP
005f0bd3  PUSH ECX
005f0bd4  MOV dword ptr [EBP + -0x4],ECX
005f0bd7  MOV EAX,dword ptr [EBP + -0x4]
005f0bda  MOVZX ECX,byte ptr [EAX + 0x9e]
005f0be1  TEST ECX,ECX
005f0be3  JZ 0x005f0c18
005f0be5  MOV EDX,dword ptr [EBP + -0x4]
005f0be8  MOV AL,byte ptr [EBP + 0x8]
005f0beb  MOV byte ptr [EDX + 0x9f],AL
005f0bf1  MOV ECX,dword ptr [EBP + -0x4]
005f0bf4  MOV EDX,dword ptr [ECX]
005f0bf6  MOV ECX,dword ptr [EBP + -0x4]
005f0bf9  MOV EAX,dword ptr [EDX + 0xc0]
005f0bff  CALL EAX
005f0c01  MOVZX ECX,AL
005f0c04  TEST ECX,ECX
005f0c06  JZ 0x005f0c18
005f0c08  MOV EDX,dword ptr [EBP + -0x4]
005f0c0b  MOV EAX,dword ptr [EDX]
005f0c0d  MOV ECX,dword ptr [EBP + -0x4]
005f0c10  MOV EDX,dword ptr [EAX + 0xac]
005f0c16  CALL EDX
005f0c18  MOV ESP,EBP
005f0c1a  POP EBP
005f0c1b  RET 0x4
