; FUN_005f3f00  005f3f00
005f3f00  PUSH EBP
005f3f01  MOV EBP,ESP
005f3f03  SUB ESP,0x10
005f3f06  MOV dword ptr [EBP + -0x10],ECX
005f3f09  MOV dword ptr [EBP + -0x4],0x0
005f3f10  JMP 0x005f3f1b
005f3f12  MOV EAX,dword ptr [EBP + -0x4]
005f3f15  ADD EAX,0x1
005f3f18  MOV dword ptr [EBP + -0x4],EAX
005f3f1b  MOV ECX,dword ptr [EBP + -0x10]
005f3f1e  ADD ECX,0x4
005f3f21  CALL 0x0060c9a0
005f3f26  CMP dword ptr [EBP + -0x4],EAX
005f3f29  JGE 0x005f3f5b
005f3f2b  MOV ECX,dword ptr [EBP + -0x4]
005f3f2e  PUSH ECX
005f3f2f  MOV ECX,dword ptr [EBP + -0x10]
005f3f32  ADD ECX,0x4
005f3f35  CALL 0x0060ca40
005f3f3a  MOV dword ptr [EBP + -0x8],EAX
005f3f3d  MOV EDX,dword ptr [EBP + -0x8]
005f3f40  MOV EAX,dword ptr [EDX + 0x1a4]
005f3f46  MOV dword ptr [EBP + -0xc],EAX
005f3f49  MOV ECX,dword ptr [EBP + -0xc]
005f3f4c  CMP ECX,dword ptr [EBP + 0x8]
005f3f4f  JNZ 0x005f3f59
005f3f51  MOV ECX,dword ptr [EBP + -0x8]
005f3f54  CALL 0x005f8990
005f3f59  JMP 0x005f3f12
005f3f5b  MOV ECX,dword ptr [EBP + 0x8]
005f3f5e  CALL 0x005f8990
005f3f63  MOV ESP,EBP
005f3f65  POP EBP
005f3f66  RET 0x4
