; FUN_005bf2d0  005bf2d0
005bf2d0  PUSH EBP
005bf2d1  MOV EBP,ESP
005bf2d3  SUB ESP,0x10
005bf2d6  MOV dword ptr [EBP + -0xc],ECX
005bf2d9  MOV EAX,dword ptr [EBP + -0xc]
005bf2dc  CMP dword ptr [EAX + 0x10],0x0
005bf2e0  JZ 0x005bf334
005bf2e2  MOV ECX,dword ptr [0x015e55e8]
005bf2e8  CALL 0x005f3e50
005bf2ed  MOV ECX,dword ptr [EBP + -0xc]
005bf2f0  CMP EAX,dword ptr [ECX + 0x10]
005bf2f3  JLE 0x005bf334
005bf2f5  MOV EDX,dword ptr [EBP + -0xc]
005bf2f8  MOV EAX,dword ptr [EDX + 0x4]
005bf2fb  MOV ECX,dword ptr [EBP + -0xc]
005bf2fe  MOV ECX,dword ptr [ECX + 0x4]
005bf301  MOV EDX,dword ptr [EAX]
005bf303  MOV EAX,dword ptr [EDX + 0x1c]
005bf306  CALL EAX
005bf308  MOV ECX,dword ptr [EBP + -0xc]
005bf30b  MOV dword ptr [EBP + -0x8],ECX
005bf30e  MOV EDX,dword ptr [EBP + -0x8]
005bf311  MOV dword ptr [EBP + -0x4],EDX
005bf314  CMP dword ptr [EBP + -0x4],0x0
005bf318  JZ 0x005bf32d
005bf31a  PUSH 0x1
005bf31c  MOV EAX,dword ptr [EBP + -0x4]
005bf31f  MOV EDX,dword ptr [EAX]
005bf321  MOV ECX,dword ptr [EBP + -0x4]
005bf324  MOV EAX,dword ptr [EDX]
005bf326  CALL EAX
005bf328  MOV dword ptr [EBP + -0x10],EAX
005bf32b  JMP 0x005bf334
005bf32d  MOV dword ptr [EBP + -0x10],0x0
005bf334  MOV ESP,EBP
005bf336  POP EBP
005bf337  RET
