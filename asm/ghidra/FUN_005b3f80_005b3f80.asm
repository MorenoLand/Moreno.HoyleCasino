; FUN_005b3f80  005b3f80
005b3f80  PUSH EBP
005b3f81  MOV EBP,ESP
005b3f83  SUB ESP,0x8
005b3f86  MOV dword ptr [EBP + -0x8],ECX
005b3f89  MOV EAX,dword ptr [EBP + 0x8]
005b3f8c  PUSH EAX
005b3f8d  MOV ECX,dword ptr [EBP + -0x8]
005b3f90  CALL 0x005b4e50
005b3f95  MOV dword ptr [EBP + -0x4],EAX
005b3f98  PUSH 0x1
005b3f9a  MOV ECX,dword ptr [EBP + -0x4]
005b3f9d  PUSH ECX
005b3f9e  MOV EDX,dword ptr [EBP + 0x8]
005b3fa1  PUSH EDX
005b3fa2  MOV ECX,dword ptr [EBP + -0x8]
005b3fa5  CALL 0x005b7170
005b3faa  CMP dword ptr [EBP + -0x4],-0x1
005b3fae  JLE 0x005b3fe4
005b3fb0  MOV EAX,dword ptr [EBP + -0x4]
005b3fb3  SUB EAX,0x1
005b3fb6  MOV dword ptr [EBP + -0x4],EAX
005b3fb9  MOV ECX,dword ptr [EBP + -0x4]
005b3fbc  PUSH ECX
005b3fbd  MOV EDX,dword ptr [EBP + 0x8]
005b3fc0  PUSH EDX
005b3fc1  MOV ECX,dword ptr [EBP + -0x8]
005b3fc4  CALL 0x005b6610
005b3fc9  MOVZX EAX,AL
005b3fcc  TEST EAX,EAX
005b3fce  JNZ 0x005b3fe2
005b3fd0  MOV ECX,dword ptr [EBP + -0x4]
005b3fd3  PUSH ECX
005b3fd4  MOV EDX,dword ptr [EBP + 0x8]
005b3fd7  PUSH EDX
005b3fd8  MOV ECX,dword ptr [EBP + -0x8]
005b3fdb  CALL 0x005b7090
005b3fe0  JMP 0x005b3ff2
005b3fe2  JMP 0x005b3faa
005b3fe4  PUSH -0x1
005b3fe6  MOV EAX,dword ptr [EBP + 0x8]
005b3fe9  PUSH EAX
005b3fea  MOV ECX,dword ptr [EBP + -0x8]
005b3fed  CALL 0x005b7090
005b3ff2  MOV ESP,EBP
005b3ff4  POP EBP
005b3ff5  RET 0x4
