; FUN_0069bee0  0069bee0
0069bee0  MOV ECX,dword ptr [ESP + 0xc]
0069bee4  MOV EAX,dword ptr [ESP + 0x4]
0069bee8  MOV EDX,dword ptr [ESP + 0x8]
0069beec  MOV EAX,dword ptr [EAX + ECX*0x4]
0069beef  TEST EAX,EAX
0069bef1  JGE 0x0069bef7
0069bef3  MOV EAX,dword ptr [EDX + ECX*0x4]
0069bef6  RET
0069bef7  MOV ECX,dword ptr [EDX + ECX*0x4]
0069befa  TEST ECX,ECX
0069befc  JL 0x0069bf02
0069befe  ADD EAX,ECX
0069bf00  SAR EAX,0x1
0069bf02  RET
