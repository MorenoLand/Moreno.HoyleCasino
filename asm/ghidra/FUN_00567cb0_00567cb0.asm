; FUN_00567cb0  00567cb0
00567cb0  PUSH EBP
00567cb1  MOV EBP,ESP
00567cb3  PUSH ECX
00567cb4  MOV dword ptr [EBP + -0x4],ECX
00567cb7  CMP dword ptr [EBP + 0x8],0x0
00567cbb  JNZ 0x00567cc1
00567cbd  XOR AL,AL
00567cbf  JMP 0x00567d08
00567cc1  MOV EAX,dword ptr [EBP + 0x8]
00567cc4  MOV dword ptr [EAX],0x1
00567cca  MOV ECX,dword ptr [EBP + 0x8]
00567ccd  MOV dword ptr [ECX + 0x4],0x1
00567cd4  MOV EDX,dword ptr [EBP + 0x8]
00567cd7  MOV dword ptr [EDX + 0x8],0x1
00567cde  MOV EAX,dword ptr [EBP + 0x8]
00567ce1  MOV dword ptr [EAX + 0xc],0x1
00567ce8  MOV ECX,dword ptr [EBP + 0x8]
00567ceb  MOV dword ptr [ECX + 0x10],0x1
00567cf2  MOV EDX,dword ptr [EBP + 0x8]
00567cf5  MOV dword ptr [EDX + 0x14],0x0
00567cfc  MOV EAX,dword ptr [EBP + 0x8]
00567cff  MOV dword ptr [EAX + 0x18],0x0
00567d06  MOV AL,0x1
00567d08  MOV ESP,EBP
00567d0a  POP EBP
00567d0b  RET 0x8
