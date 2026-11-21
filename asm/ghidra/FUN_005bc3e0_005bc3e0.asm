; FUN_005bc3e0  005bc3e0
005bc3e0  PUSH EBP
005bc3e1  MOV EBP,ESP
005bc3e3  SUB ESP,0x58
005bc3e6  MOV dword ptr [EBP + -0x58],ECX
005bc3e9  MOV EAX,dword ptr [EBP + -0x58]
005bc3ec  MOV ECX,dword ptr [EAX + 0x8]
005bc3ef  MOV dword ptr [EBP + -0x1c],ECX
005bc3f2  MOV dword ptr [EBP + -0x8],0x0
005bc3f9  CMP dword ptr [EBP + -0x58],0x0
005bc3fd  JZ 0x005bc415
005bc3ff  MOV EDX,dword ptr [EBP + -0x58]
005bc402  MOV EAX,dword ptr [EDX + 0x4]
005bc405  CMP EAX,dword ptr [EBP + -0x1c]
005bc408  JA 0x005bc415
005bc40a  MOV ECX,dword ptr [EBP + -0x58]
005bc40d  MOV EDX,dword ptr [EBP + -0x1c]
005bc410  CMP EDX,dword ptr [ECX + 0x8]
005bc413  JBE 0x005bc41b
005bc415  CALL dword ptr [0x006b2274]
005bc41b  MOV EAX,dword ptr [EBP + -0x58]
005bc41e  MOV dword ptr [EBP + -0x8],EAX
005bc421  MOV ECX,dword ptr [EBP + -0x1c]
005bc424  MOV dword ptr [EBP + -0x4],ECX
005bc427  MOV EDX,dword ptr [EBP + -0x58]
005bc42a  MOV EAX,dword ptr [EDX + 0x4]
005bc42d  MOV dword ptr [EBP + -0x20],EAX
005bc430  MOV dword ptr [EBP + -0x10],0x0
005bc437  CMP dword ptr [EBP + -0x58],0x0
005bc43b  JZ 0x005bc453
005bc43d  MOV ECX,dword ptr [EBP + -0x58]
005bc440  MOV EDX,dword ptr [ECX + 0x4]
005bc443  CMP EDX,dword ptr [EBP + -0x20]
005bc446  JA 0x005bc453
005bc448  MOV EAX,dword ptr [EBP + -0x58]
005bc44b  MOV ECX,dword ptr [EBP + -0x20]
005bc44e  CMP ECX,dword ptr [EAX + 0x8]
005bc451  JBE 0x005bc459
005bc453  CALL dword ptr [0x006b2274]
005bc459  MOV EDX,dword ptr [EBP + -0x58]
005bc45c  MOV dword ptr [EBP + -0x10],EDX
005bc45f  MOV EAX,dword ptr [EBP + -0x20]
005bc462  MOV dword ptr [EBP + -0xc],EAX
005bc465  MOV ECX,dword ptr [EBP + -0x4]
005bc468  PUSH ECX
005bc469  MOV EDX,dword ptr [EBP + -0x8]
005bc46c  PUSH EDX
005bc46d  MOV EAX,dword ptr [EBP + -0xc]
005bc470  PUSH EAX
005bc471  MOV ECX,dword ptr [EBP + -0x10]
005bc474  PUSH ECX
005bc475  LEA EDX,[EBP + -0x18]
005bc478  PUSH EDX
005bc479  MOV ECX,dword ptr [EBP + -0x58]
005bc47c  CALL 0x005bc490
005bc481  MOV ESP,EBP
005bc483  POP EBP
005bc484  RET
