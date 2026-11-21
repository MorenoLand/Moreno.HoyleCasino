; FUN_004fa880  004fa880
004fa880  PUSH EBP
004fa881  MOV EBP,ESP
004fa883  SUB ESP,0x8
004fa886  MOV dword ptr [EBP + -0x4],ECX
004fa889  MOV EAX,dword ptr [EBP + -0x4]
004fa88c  MOVZX ECX,byte ptr [EAX + 0x38]
004fa890  TEST ECX,ECX
004fa892  JNZ 0x004fa8bb
004fa894  CMP dword ptr [EBP + 0x8],0x186f9
004fa89b  JL 0x004fa8bb
004fa89d  CMP dword ptr [EBP + 0x8],0x18702
004fa8a4  JG 0x004fa8bb
004fa8a6  MOV EDX,dword ptr [EBP + 0xc]
004fa8a9  PUSH EDX
004fa8aa  MOV EAX,dword ptr [EBP + 0x8]
004fa8ad  PUSH EAX
004fa8ae  MOV ECX,dword ptr [EBP + -0x4]
004fa8b1  CALL 0x004fb640
004fa8b6  JMP 0x004faa44
004fa8bb  MOV ECX,dword ptr [EBP + 0x8]
004fa8be  MOV dword ptr [EBP + -0x8],ECX
004fa8c1  MOV EDX,dword ptr [EBP + -0x8]
004fa8c4  SUB EDX,0x30e79e
004fa8ca  MOV dword ptr [EBP + -0x8],EDX
004fa8cd  CMP dword ptr [EBP + -0x8],0x6
004fa8d1  JA 0x004faa34
004fa8d7  MOV EAX,dword ptr [EBP + -0x8]
004fa8da  JMP dword ptr [EAX*0x4 + 0x4faa4c]
004faa34  MOV EAX,dword ptr [EBP + 0xc]
004faa37  PUSH EAX
004faa38  MOV ECX,dword ptr [EBP + 0x8]
004faa3b  PUSH ECX
004faa3c  MOV ECX,dword ptr [EBP + -0x4]
004faa3f  CALL 0x005dc7d0
004faa44  MOV ESP,EBP
004faa46  POP EBP
004faa47  RET 0x8
