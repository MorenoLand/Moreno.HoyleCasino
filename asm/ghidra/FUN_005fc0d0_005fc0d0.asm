; FUN_005fc0d0  005fc0d0
005fc0d0  PUSH EBP
005fc0d1  MOV EBP,ESP
005fc0d3  PUSH ECX
005fc0d4  MOV dword ptr [EBP + -0x4],ECX
005fc0d7  MOV ECX,dword ptr [EBP + -0x4]
005fc0da  CALL 0x005e9e20
005fc0df  MOV EAX,dword ptr [EBP + -0x4]
005fc0e2  MOV dword ptr [EAX],0x6d6e94
005fc0e8  MOV ECX,dword ptr [EBP + -0x4]
005fc0eb  MOV EDX,dword ptr [EBP + 0x8]
005fc0ee  MOV dword ptr [ECX + 0x10],EDX
005fc0f1  MOV EAX,dword ptr [EBP + -0x4]
005fc0f4  CMP dword ptr [EAX + 0x10],0x0
005fc0f8  JZ 0x005fc106
005fc0fa  MOV ECX,dword ptr [EBP + -0x4]
005fc0fd  MOV EDX,dword ptr [ECX + 0x10]
005fc100  MOV EAX,dword ptr [EBP + -0x4]
005fc103  MOV dword ptr [EDX + 0x8],EAX
005fc106  MOV ECX,dword ptr [EBP + -0x4]
005fc109  MOV dword ptr [ECX + 0x8],0x0
005fc110  MOV EDX,dword ptr [EBP + -0x4]
005fc113  MOV dword ptr [EDX + 0xc],0x0
005fc11a  MOV EAX,dword ptr [EBP + -0x4]
005fc11d  MOV dword ptr [EAX + 0x14],0xffffffff
005fc124  MOV ECX,dword ptr [EBP + -0x4]
005fc127  MOV dword ptr [ECX + 0x1c],0xffffffff
005fc12e  MOV EDX,dword ptr [EBP + -0x4]
005fc131  MOV dword ptr [EDX + 0x18],0x0
005fc138  MOV EAX,dword ptr [EBP + -0x4]
005fc13b  MOV dword ptr [EAX + 0x4],0x0
005fc142  MOV EAX,dword ptr [EBP + -0x4]
005fc145  MOV ESP,EBP
005fc147  POP EBP
005fc148  RET 0x4
