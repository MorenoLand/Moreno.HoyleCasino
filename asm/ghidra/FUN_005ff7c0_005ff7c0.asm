; FUN_005ff7c0  005ff7c0
005ff7c0  PUSH EBP
005ff7c1  MOV EBP,ESP
005ff7c3  PUSH ECX
005ff7c4  MOV dword ptr [EBP + -0x4],ECX
005ff7c7  MOV ECX,dword ptr [EBP + -0x4]
005ff7ca  CALL 0x00600330
005ff7cf  MOV EAX,dword ptr [EBP + -0x4]
005ff7d2  MOVZX ECX,byte ptr [EAX + 0x1dc]
005ff7d9  TEST ECX,ECX
005ff7db  JZ 0x005ff830
005ff7dd  MOV EDX,dword ptr [EBP + -0x4]
005ff7e0  CMP dword ptr [EDX + 0x190],0x0
005ff7e7  JZ 0x005ff830
005ff7e9  MOV EAX,dword ptr [EBP + -0x4]
005ff7ec  CMP dword ptr [EAX + 0x194],0x3
005ff7f3  JZ 0x005ff801
005ff7f5  MOV ECX,dword ptr [EBP + -0x4]
005ff7f8  CMP dword ptr [ECX + 0x194],0x1
005ff7ff  JNZ 0x005ff830
005ff801  PUSH ECX
005ff802  MOV EDX,ESP
005ff804  MOV AX,[0x0075ee1c]
005ff80a  MOV word ptr [EDX],AX
005ff80d  MOV CL,byte ptr [0x0075ee1e]
005ff813  MOV byte ptr [EDX + 0x2],CL
005ff816  PUSH -0x1
005ff818  MOV EDX,dword ptr [EBP + -0x4]
005ff81b  MOV EAX,dword ptr [EDX + 0x1c8]
005ff821  PUSH EAX
005ff822  MOV ECX,dword ptr [EBP + -0x4]
005ff825  MOV ECX,dword ptr [ECX + 0x190]
005ff82b  CALL 0x005ecd00
005ff830  MOV ESP,EBP
005ff832  POP EBP
005ff833  RET
