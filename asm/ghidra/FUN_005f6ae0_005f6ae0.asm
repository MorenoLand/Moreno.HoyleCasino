; FUN_005f6ae0  005f6ae0
005f6ae0  PUSH EBP
005f6ae1  MOV EBP,ESP
005f6ae3  PUSH ECX
005f6ae4  MOV dword ptr [EBP + -0x4],ECX
005f6ae7  MOVZX EAX,byte ptr [EBP + 0x8]
005f6aeb  MOV ECX,dword ptr [EBP + -0x4]
005f6aee  MOVZX EDX,byte ptr [ECX + 0x58]
005f6af2  CMP EAX,EDX
005f6af4  JZ 0x005f6b0f
005f6af6  MOV ECX,dword ptr [EBP + -0x4]
005f6af9  CALL 0x005f6b60
005f6afe  MOV EAX,dword ptr [EBP + -0x4]
005f6b01  MOV CL,byte ptr [EBP + 0x8]
005f6b04  MOV byte ptr [EAX + 0x58],CL
005f6b07  MOV ECX,dword ptr [EBP + -0x4]
005f6b0a  CALL 0x005f6b60
005f6b0f  MOV ESP,EBP
005f6b11  POP EBP
005f6b12  RET 0x4
