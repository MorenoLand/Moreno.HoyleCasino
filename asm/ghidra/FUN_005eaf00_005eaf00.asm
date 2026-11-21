; FUN_005eaf00  005eaf00
005eaf00  PUSH EBP
005eaf01  MOV EBP,ESP
005eaf03  PUSH ECX
005eaf04  MOV dword ptr [EBP + -0x4],ECX
005eaf07  MOV EAX,dword ptr [EBP + -0x4]
005eaf0a  MOV byte ptr [EAX + 0x50],0x0
005eaf0e  MOV ECX,dword ptr [EBP + -0x4]
005eaf11  MOV EDX,dword ptr [ECX + 0x4c]
005eaf14  CMP EDX,dword ptr [EBP + 0x8]
005eaf17  JZ 0x005eaf4d
005eaf19  MOV EAX,dword ptr [EBP + -0x4]
005eaf1c  MOV ECX,dword ptr [EBP + 0x8]
005eaf1f  MOV dword ptr [EAX + 0x4c],ECX
005eaf22  MOV EDX,dword ptr [EBP + -0x4]
005eaf25  CMP dword ptr [EDX + 0x28],0x0
005eaf29  JZ 0x005eaf4d
005eaf2b  CMP dword ptr [EBP + 0x8],0x0
005eaf2f  JGE 0x005eaf45
005eaf31  PUSH 0x6c
005eaf33  PUSH 0x6d62dc
005eaf38  PUSH 0x6d62cc
005eaf3d  CALL 0x005e9f20
005eaf42  ADD ESP,0xc
005eaf45  MOV ECX,dword ptr [EBP + -0x4]
005eaf48  CALL 0x005eacd0
005eaf4d  MOV ESP,EBP
005eaf4f  POP EBP
005eaf50  RET 0x4
