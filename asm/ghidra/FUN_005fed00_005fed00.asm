; FUN_005fed00  005fed00
005fed00  PUSH EBP
005fed01  MOV EBP,ESP
005fed03  SUB ESP,0xc
005fed06  MOV dword ptr [EBP + -0xc],ECX
005fed09  MOV dword ptr [EBP + -0x8],0x0
005fed10  MOV dword ptr [EBP + -0x4],0x0
005fed17  JMP 0x005fed22
005fed19  MOV EAX,dword ptr [EBP + -0x4]
005fed1c  ADD EAX,0x1
005fed1f  MOV dword ptr [EBP + -0x4],EAX
005fed22  MOV ECX,dword ptr [EBP + -0xc]
005fed25  CALL 0x005feda0
005fed2a  CMP dword ptr [EBP + -0x4],EAX
005fed2d  JGE 0x005fed4a
005fed2f  MOV ECX,dword ptr [EBP + -0x4]
005fed32  PUSH ECX
005fed33  MOV ECX,dword ptr [EBP + -0xc]
005fed36  CALL 0x005ff080
005fed3b  MOV ECX,EAX
005fed3d  CALL 0x005f5590
005fed42  ADD EAX,dword ptr [EBP + -0x8]
005fed45  MOV dword ptr [EBP + -0x8],EAX
005fed48  JMP 0x005fed19
005fed4a  PUSH 0x0
005fed4c  MOV ECX,dword ptr [EBP + -0xc]
005fed4f  CALL 0x005fb2b0
005fed54  TEST EAX,EAX
005fed56  JZ 0x005fed6f
005fed58  PUSH 0x0
005fed5a  MOV ECX,dword ptr [EBP + -0xc]
005fed5d  CALL 0x005fb2b0
005fed62  MOV ECX,EAX
005fed64  CALL 0x005f5590
005fed69  ADD EAX,dword ptr [EBP + -0x8]
005fed6c  MOV dword ptr [EBP + -0x8],EAX
005fed6f  PUSH 0x1
005fed71  MOV ECX,dword ptr [EBP + -0xc]
005fed74  CALL 0x005fb2b0
005fed79  TEST EAX,EAX
005fed7b  JZ 0x005fed94
005fed7d  PUSH 0x1
005fed7f  MOV ECX,dword ptr [EBP + -0xc]
005fed82  CALL 0x005fb2b0
005fed87  MOV ECX,EAX
005fed89  CALL 0x005f5590
005fed8e  ADD EAX,dword ptr [EBP + -0x8]
005fed91  MOV dword ptr [EBP + -0x8],EAX
005fed94  MOV EAX,dword ptr [EBP + -0x8]
005fed97  MOV ESP,EBP
005fed99  POP EBP
005fed9a  RET
