; FUN_0064be50  0064be50
0064be50  PUSH EBP
0064be51  MOV EBP,ESP
0064be53  PUSH ECX
0064be54  MOV dword ptr [EBP + -0x4],ECX
0064be57  MOV EAX,dword ptr [EBP + -0x4]
0064be5a  CMP dword ptr [EAX + 0x17c],0x0
0064be61  JZ 0x0064be7c
0064be63  MOV ECX,dword ptr [EBP + -0x4]
0064be66  MOV EDX,dword ptr [ECX + 0x17c]
0064be6c  MOV EAX,dword ptr [EBP + -0x4]
0064be6f  MOV ECX,dword ptr [EAX + 0x17c]
0064be75  MOV EDX,dword ptr [EDX]
0064be77  MOV EAX,dword ptr [EDX + 0x70]
0064be7a  CALL EAX
0064be7c  MOV ECX,dword ptr [EBP + -0x4]
0064be7f  CMP dword ptr [ECX + 0x180],0x0
0064be86  JZ 0x0064bea1
0064be88  MOV EDX,dword ptr [EBP + -0x4]
0064be8b  MOV EAX,dword ptr [EDX + 0x180]
0064be91  MOV ECX,dword ptr [EBP + -0x4]
0064be94  MOV ECX,dword ptr [ECX + 0x180]
0064be9a  MOV EDX,dword ptr [EAX]
0064be9c  MOV EAX,dword ptr [EDX + 0x70]
0064be9f  CALL EAX
0064bea1  MOV ESP,EBP
0064bea3  POP EBP
0064bea4  RET
