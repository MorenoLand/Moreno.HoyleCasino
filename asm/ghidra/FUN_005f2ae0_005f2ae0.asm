; FUN_005f2ae0  005f2ae0
005f2ae0  PUSH EBP
005f2ae1  MOV EBP,ESP
005f2ae3  SUB ESP,0x8
005f2ae6  MOV dword ptr [EBP + -0x8],ECX
005f2ae9  PUSH 0x0
005f2aeb  MOV EAX,dword ptr [EBP + 0xc]
005f2aee  PUSH EAX
005f2aef  MOV ECX,dword ptr [EBP + -0x8]
005f2af2  CALL 0x005f2a60
005f2af7  MOV dword ptr [EBP + -0x4],EAX
005f2afa  CMP dword ptr [EBP + -0x4],0x0
005f2afe  JZ 0x005f2b16
005f2b00  MOV ECX,dword ptr [EBP + 0xc]
005f2b03  PUSH ECX
005f2b04  MOV EDX,dword ptr [EBP + 0x8]
005f2b07  PUSH EDX
005f2b08  MOV EAX,dword ptr [EBP + -0x4]
005f2b0b  MOV ECX,dword ptr [EAX + 0x1f0]
005f2b11  CALL 0x005fdff0
005f2b16  MOV ESP,EBP
005f2b18  POP EBP
005f2b19  RET 0x8
