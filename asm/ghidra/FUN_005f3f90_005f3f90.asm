; FUN_005f3f90  005f3f90
005f3f90  PUSH EBP
005f3f91  MOV EBP,ESP
005f3f93  PUSH ECX
005f3f94  MOV dword ptr [EBP + -0x4],ECX
005f3f97  MOV EAX,dword ptr [EBP + -0x4]
005f3f9a  MOV ECX,dword ptr [EBP + 0x8]
005f3f9d  MOV dword ptr [EAX + 0x3c],ECX
005f3fa0  MOV EDX,dword ptr [EBP + -0x4]
005f3fa3  CMP dword ptr [EDX + 0x3c],0x0
005f3fa7  JZ 0x005f3fcd
005f3fa9  PUSH 0x0
005f3fab  MOV ECX,dword ptr [EBP + -0x4]
005f3fae  CALL 0x005f41c0
005f3fb3  MOV EAX,dword ptr [EBP + -0x4]
005f3fb6  MOV EDX,dword ptr [EAX]
005f3fb8  MOV ECX,dword ptr [EBP + -0x4]
005f3fbb  MOV EAX,dword ptr [EDX + 0x70]
005f3fbe  CALL EAX
005f3fc0  MOV ECX,dword ptr [EBP + -0x4]
005f3fc3  MOV ECX,dword ptr [ECX + 0x3c]
005f3fc6  CALL 0x005f8720
005f3fcb  JMP 0x005f3fda
005f3fcd  MOV EDX,dword ptr [EBP + -0x4]
005f3fd0  MOV EAX,dword ptr [EDX]
005f3fd2  MOV ECX,dword ptr [EBP + -0x4]
005f3fd5  MOV EDX,dword ptr [EAX + 0x74]
005f3fd8  CALL EDX
005f3fda  MOV ESP,EBP
005f3fdc  POP EBP
005f3fdd  RET 0x4
