; FUN_0041fd80  0041fd80
0041fd80  PUSH EBP
0041fd81  MOV EBP,ESP
0041fd83  SUB ESP,0x8
0041fd86  MOV dword ptr [EBP + -0x8],ECX
0041fd89  MOV ECX,dword ptr [EBP + -0x8]
0041fd8c  CALL 0x005e9e20
0041fd91  MOV EAX,dword ptr [EBP + -0x8]
0041fd94  MOV dword ptr [EAX],0x6b5dd4
0041fd9a  MOV dword ptr [EBP + -0x4],0x0
0041fda1  JMP 0x0041fdac
0041fda3  MOV ECX,dword ptr [EBP + -0x4]
0041fda6  ADD ECX,0x1
0041fda9  MOV dword ptr [EBP + -0x4],ECX
0041fdac  CMP dword ptr [EBP + -0x4],0x5
0041fdb0  JGE 0x0041fdc2
0041fdb2  MOV EDX,dword ptr [EBP + -0x4]
0041fdb5  MOV EAX,dword ptr [EBP + -0x8]
0041fdb8  MOV dword ptr [EAX + EDX*0x4 + 0x8],0x0
0041fdc0  JMP 0x0041fda3
0041fdc2  MOV ECX,dword ptr [EBP + -0x8]
0041fdc5  MOV dword ptr [ECX + 0x1c],0x0
0041fdcc  MOV EDX,dword ptr [EBP + -0x8]
0041fdcf  MOV dword ptr [EDX + 0x20],0x0
0041fdd6  MOV EAX,dword ptr [EBP + -0x8]
0041fdd9  MOV ESP,EBP
0041fddb  POP EBP
0041fddc  RET
