; FUN_005f4ed0  005f4ed0
005f4ed0  PUSH EBP
005f4ed1  MOV EBP,ESP
005f4ed3  PUSH ECX
005f4ed4  MOV dword ptr [EBP + -0x4],ECX
005f4ed7  MOV EAX,dword ptr [EBP + 0x8]
005f4eda  MOV ECX,dword ptr [EAX + 0x1c]
005f4edd  AND ECX,0x8
005f4ee0  JZ 0x005f4f2c
005f4ee2  MOV EDX,dword ptr [EBP + -0x4]
005f4ee5  MOV byte ptr [EDX + 0x8],0x1
005f4ee9  MOV EAX,dword ptr [EBP + -0x4]
005f4eec  MOVZX ECX,byte ptr [EAX + 0xa]
005f4ef0  TEST ECX,ECX
005f4ef2  JZ 0x005f4f2a
005f4ef4  MOV EDX,dword ptr [EBP + -0x4]
005f4ef7  MOV EAX,dword ptr [EDX]
005f4ef9  MOV ECX,dword ptr [EBP + -0x4]
005f4efc  MOV EDX,dword ptr [EAX + 0x4c]
005f4eff  CALL EDX
005f4f01  MOV ECX,dword ptr [EBP + 0x8]
005f4f04  MOV EDX,dword ptr [ECX + 0x8]
005f4f07  SUB EDX,EAX
005f4f09  MOV EAX,dword ptr [EBP + -0x4]
005f4f0c  MOV dword ptr [EAX + 0x2c],EDX
005f4f0f  MOV ECX,dword ptr [EBP + -0x4]
005f4f12  MOV EDX,dword ptr [ECX]
005f4f14  MOV ECX,dword ptr [EBP + -0x4]
005f4f17  MOV EAX,dword ptr [EDX + 0x54]
005f4f1a  CALL EAX
005f4f1c  MOV ECX,dword ptr [EBP + 0x8]
005f4f1f  MOV EDX,dword ptr [ECX + 0xc]
005f4f22  SUB EDX,EAX
005f4f24  MOV EAX,dword ptr [EBP + -0x4]
005f4f27  MOV dword ptr [EAX + 0x30],EDX
005f4f2a  JMP 0x005f4f3e
005f4f2c  MOV ECX,dword ptr [EBP + 0x8]
005f4f2f  MOV EDX,dword ptr [ECX + 0x1c]
005f4f32  AND EDX,0x10
005f4f35  JZ 0x005f4f3e
005f4f37  MOV EAX,dword ptr [EBP + -0x4]
005f4f3a  MOV byte ptr [EAX + 0x9],0x1
005f4f3e  MOV ESP,EBP
005f4f40  POP EBP
005f4f41  RET 0x4
