; FUN_005b4f50  005b4f50
005b4f50  PUSH EBP
005b4f51  MOV EBP,ESP
005b4f53  SUB ESP,0x18
005b4f56  MOV dword ptr [EBP + -0x18],ECX
005b4f59  CMP dword ptr [EBP + 0xc],-0x1
005b4f5d  JNZ 0x005b4f6e
005b4f5f  MOV EAX,dword ptr [EBP + 0x8]
005b4f62  PUSH EAX
005b4f63  MOV ECX,dword ptr [EBP + -0x18]
005b4f66  CALL 0x005b4e50
005b4f6b  MOV dword ptr [EBP + 0xc],EAX
005b4f6e  MOV dword ptr [EBP + -0xc],0x0
005b4f75  MOV dword ptr [EBP + -0x8],0x0
005b4f7c  MOV ECX,dword ptr [EBP + 0xc]
005b4f7f  PUSH ECX
005b4f80  MOV EDX,dword ptr [EBP + 0x8]
005b4f83  PUSH EDX
005b4f84  MOV ECX,dword ptr [EBP + -0x18]
005b4f87  CALL 0x005b5830
005b4f8c  MOV dword ptr [EBP + -0x4],EAX
005b4f8f  MOV dword ptr [EBP + -0x10],0x0
005b4f96  JMP 0x005b4fa1
005b4f98  MOV EAX,dword ptr [EBP + -0x10]
005b4f9b  ADD EAX,0x1
005b4f9e  MOV dword ptr [EBP + -0x10],EAX
005b4fa1  MOV ECX,dword ptr [EBP + -0x10]
005b4fa4  CMP ECX,dword ptr [EBP + -0x4]
005b4fa7  JGE 0x005b4fe1
005b4fa9  MOV EDX,dword ptr [EBP + -0x10]
005b4fac  PUSH EDX
005b4fad  MOV EAX,dword ptr [EBP + 0xc]
005b4fb0  PUSH EAX
005b4fb1  MOV ECX,dword ptr [EBP + 0x8]
005b4fb4  PUSH ECX
005b4fb5  MOV ECX,dword ptr [EBP + -0x18]
005b4fb8  CALL 0x005b5f60
005b4fbd  MOV dword ptr [EBP + -0x14],EAX
005b4fc0  CMP dword ptr [EBP + -0x14],0x1
005b4fc4  JNZ 0x005b4fd6
005b4fc6  MOV dword ptr [EBP + -0x14],0xb
005b4fcd  MOV EDX,dword ptr [EBP + -0xc]
005b4fd0  ADD EDX,0x1
005b4fd3  MOV dword ptr [EBP + -0xc],EDX
005b4fd6  MOV EAX,dword ptr [EBP + -0x8]
005b4fd9  ADD EAX,dword ptr [EBP + -0x14]
005b4fdc  MOV dword ptr [EBP + -0x8],EAX
005b4fdf  JMP 0x005b4f98
005b4fe1  CMP dword ptr [EBP + -0x8],0x15
005b4fe5  JLE 0x005b5001
005b4fe7  CMP dword ptr [EBP + -0xc],0x0
005b4feb  JLE 0x005b5001
005b4fed  MOV ECX,dword ptr [EBP + -0x8]
005b4ff0  SUB ECX,0xa
005b4ff3  MOV dword ptr [EBP + -0x8],ECX
005b4ff6  MOV EDX,dword ptr [EBP + -0xc]
005b4ff9  SUB EDX,0x1
005b4ffc  MOV dword ptr [EBP + -0xc],EDX
005b4fff  JMP 0x005b4fe1
005b5001  MOV EAX,dword ptr [EBP + -0x8]
005b5004  MOV ESP,EBP
005b5006  POP EBP
005b5007  RET 0x8
