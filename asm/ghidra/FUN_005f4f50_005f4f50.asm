; FUN_005f4f50  005f4f50
005f4f50  PUSH EBP
005f4f51  MOV EBP,ESP
005f4f53  PUSH ECX
005f4f54  MOV dword ptr [EBP + -0x4],ECX
005f4f57  MOV EAX,dword ptr [EBP + 0x8]
005f4f5a  MOV ECX,dword ptr [EAX + 0x1c]
005f4f5d  AND ECX,0x8
005f4f60  JZ 0x005f4f9d
005f4f62  MOV EDX,dword ptr [EBP + -0x4]
005f4f65  MOV byte ptr [EDX + 0x8],0x0
005f4f69  MOV EAX,dword ptr [EBP + -0x4]
005f4f6c  MOVZX ECX,byte ptr [EAX + 0xa]
005f4f70  TEST ECX,ECX
005f4f72  JZ 0x005f4f9b
005f4f74  MOV EDX,dword ptr [EBP + 0x8]
005f4f77  MOV EAX,dword ptr [EBP + -0x4]
005f4f7a  MOV ECX,dword ptr [EDX + 0xc]
005f4f7d  SUB ECX,dword ptr [EAX + 0x30]
005f4f80  PUSH ECX
005f4f81  MOV EDX,dword ptr [EBP + 0x8]
005f4f84  MOV EAX,dword ptr [EBP + -0x4]
005f4f87  MOV ECX,dword ptr [EDX + 0x8]
005f4f8a  SUB ECX,dword ptr [EAX + 0x2c]
005f4f8d  PUSH ECX
005f4f8e  MOV EDX,dword ptr [EBP + -0x4]
005f4f91  MOV EAX,dword ptr [EDX]
005f4f93  MOV ECX,dword ptr [EBP + -0x4]
005f4f96  MOV EDX,dword ptr [EAX + 0x44]
005f4f99  CALL EDX
005f4f9b  JMP 0x005f4faf
005f4f9d  MOV EAX,dword ptr [EBP + 0x8]
005f4fa0  MOV ECX,dword ptr [EAX + 0x1c]
005f4fa3  AND ECX,0x10
005f4fa6  JZ 0x005f4faf
005f4fa8  MOV EDX,dword ptr [EBP + -0x4]
005f4fab  MOV byte ptr [EDX + 0x9],0x0
005f4faf  MOV ESP,EBP
005f4fb1  POP EBP
005f4fb2  RET 0x4
