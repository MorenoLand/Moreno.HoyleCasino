; FUN_005cf060  005cf060
005cf060  PUSH EBP
005cf061  MOV EBP,ESP
005cf063  PUSH ECX
005cf064  MOV dword ptr [EBP + -0x4],ECX
005cf067  MOV ECX,dword ptr [EBP + -0x4]
005cf06a  CALL 0x005f88f0
005cf06f  MOVZX EAX,AL
005cf072  TEST EAX,EAX
005cf074  JNZ 0x005cf081
005cf076  MOV ECX,dword ptr [EBP + 0x8]
005cf079  MOVZX EDX,byte ptr [ECX + 0x4]
005cf07d  TEST EDX,EDX
005cf07f  JZ 0x005cf083
005cf081  JMP 0x005cf0ec
005cf083  MOV EAX,dword ptr [EBP + 0x8]
005cf086  CMP dword ptr [EAX + 0x18],0x4
005cf08a  JNZ 0x005cf0a2
005cf08c  MOV ECX,dword ptr [EBP + 0x8]
005cf08f  MOVSX EDX,byte ptr [ECX + 0x14]
005cf093  CMP EDX,0x1b
005cf096  JNZ 0x005cf0a2
005cf098  MOV EAX,dword ptr [EBP + -0x4]
005cf09b  MOV byte ptr [EAX + 0x1bc],0x1
005cf0a2  MOV ECX,dword ptr [EBP + 0x8]
005cf0a5  CMP dword ptr [ECX + 0x18],0x1
005cf0a9  JNZ 0x005cf0b5
005cf0ab  MOV EDX,dword ptr [EBP + -0x4]
005cf0ae  MOV byte ptr [EDX + 0x1bc],0x1
005cf0b5  MOV EAX,dword ptr [EBP + -0x4]
005cf0b8  MOVZX ECX,byte ptr [EAX + 0x1bc]
005cf0bf  TEST ECX,ECX
005cf0c1  JZ 0x005cf0ec
005cf0c3  PUSH 0x1
005cf0c5  MOV EDX,dword ptr [EBP + -0x4]
005cf0c8  MOV EAX,dword ptr [EDX + 0x1c0]
005cf0ce  PUSH EAX
005cf0cf  MOV ECX,dword ptr [0x0162ee84]
005cf0d5  CALL 0x005f4510
005cf0da  MOV ECX,dword ptr [EBP + 0x8]
005cf0dd  MOV byte ptr [ECX + 0x4],0x1
005cf0e1  MOV ECX,dword ptr [0x007947e4]
005cf0e7  CALL 0x005dc190
005cf0ec  MOV ESP,EBP
005cf0ee  POP EBP
005cf0ef  RET 0x4
