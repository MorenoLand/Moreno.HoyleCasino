; FUN_0059ca80  0059ca80
0059ca80  PUSH EBP
0059ca81  MOV EBP,ESP
0059ca83  SUB ESP,0x18
0059ca86  MOV dword ptr [EBP + -0x14],ECX
0059ca89  MOV ECX,dword ptr [0x007935d0]
0059ca8f  CALL 0x005a2460
0059ca94  CMP EAX,-0x1
0059ca97  JZ 0x0059cb38
0059ca9d  MOV ECX,dword ptr [0x007935d0]
0059caa3  CALL 0x005a2460
0059caa8  MOV dword ptr [EBP + -0x4],EAX
0059caab  CMP dword ptr [EBP + -0x4],0x0
0059caaf  JL 0x0059cb38
0059cab5  CMP dword ptr [EBP + -0x4],0x3
0059cab9  JG 0x0059cb38
0059cabb  MOV EAX,dword ptr [EBP + -0x4]
0059cabe  PUSH EAX
0059cabf  CALL 0x005dcb00
0059cac4  ADD ESP,0x4
0059cac7  MOV dword ptr [EBP + -0x8],EAX
0059caca  CMP dword ptr [EBP + -0x8],0x0
0059cace  JZ 0x0059cb38
0059cad0  MOV ECX,dword ptr [EBP + -0x8]
0059cad3  CALL 0x0063aac0
0059cad8  MOV ECX,dword ptr [EAX]
0059cada  MOV dword ptr [EBP + -0xc],ECX
0059cadd  CMP dword ptr [EBP + -0xc],0x2
0059cae1  JZ 0x0059caff
0059cae3  MOV ECX,dword ptr [EBP + -0x8]
0059cae6  CALL 0x0063aac0
0059caeb  MOV EDX,dword ptr [EAX]
0059caed  MOV dword ptr [EBP + -0x10],EDX
0059caf0  CMP dword ptr [EBP + -0x10],0x3
0059caf4  JZ 0x0059caff
0059caf6  MOV dword ptr [EBP + -0x18],0x0
0059cafd  JMP 0x0059cb06
0059caff  MOV dword ptr [EBP + -0x18],0x1
0059cb06  MOVZX EAX,byte ptr [EBP + -0x18]
0059cb0a  TEST EAX,EAX
0059cb0c  JZ 0x0059cb38
0059cb0e  MOV ECX,dword ptr [EBP + -0x4]
0059cb11  PUSH ECX
0059cb12  MOV ECX,dword ptr [0x007935d0]
0059cb18  CALL 0x005a29f0
0059cb1d  MOVZX EDX,AL
0059cb20  TEST EDX,EDX
0059cb22  JZ 0x0059cb38
0059cb24  PUSH 0x1
0059cb26  PUSH 0x315102
0059cb2b  MOV ECX,dword ptr [0x0162ee80]
0059cb31  CALL 0x005f2b20
0059cb36  JMP 0x0059cb48
0059cb38  PUSH 0x315102
0059cb3d  MOV ECX,dword ptr [0x0162ee80]
0059cb43  CALL 0x005f2ba0
0059cb48  MOV ESP,EBP
0059cb4a  POP EBP
0059cb4b  RET
