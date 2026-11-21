; FUN_00544ac0  00544ac0
00544ac0  PUSH EBP
00544ac1  MOV EBP,ESP
00544ac3  SUB ESP,0xc
00544ac6  MOV dword ptr [EBP + -0x8],ECX
00544ac9  MOV dword ptr [EBP + -0x4],0xffffffff
00544ad0  MOV EAX,dword ptr [EBP + 0x8]
00544ad3  PUSH EAX
00544ad4  MOV ECX,dword ptr [0x0162ee84]
00544ada  MOV ECX,dword ptr [ECX + 0x14]
00544add  CALL 0x005fb300
00544ae2  MOV dword ptr [EBP + -0xc],EAX
00544ae5  MOV EDX,dword ptr [EBP + -0xc]
00544ae8  MOV EAX,dword ptr [EDX]
00544aea  MOV ECX,dword ptr [EBP + -0xc]
00544aed  MOV EDX,dword ptr [EAX + 0xcc]
00544af3  CALL EDX
00544af5  MOV EAX,dword ptr [EBP + 0x8]
00544af8  PUSH EAX
00544af9  MOV ECX,dword ptr [EBP + -0x8]
00544afc  CALL 0x00544a70
00544b01  MOV dword ptr [EBP + -0x4],EAX
00544b04  CMP dword ptr [EBP + -0x4],-0x1
00544b08  JZ 0x00544b1b
00544b0a  PUSH 0x1
00544b0c  MOV ECX,dword ptr [EBP + -0x4]
00544b0f  PUSH ECX
00544b10  MOV ECX,dword ptr [0x0162ee80]
00544b16  CALL 0x005f2b20
00544b1b  MOV ESP,EBP
00544b1d  POP EBP
00544b1e  RET 0x4
