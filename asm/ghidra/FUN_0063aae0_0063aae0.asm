; FUN_0063aae0  0063aae0
0063aae0  PUSH EBP
0063aae1  MOV EBP,ESP
0063aae3  PUSH ECX
0063aae4  MOV dword ptr [EBP + -0x4],ECX
0063aae7  CMP dword ptr [EBP + 0x8],-0x1
0063aaeb  JNZ 0x0063aafb
0063aaed  MOV ECX,dword ptr [0x0162ee84]
0063aaf3  CALL 0x005f3bf0
0063aaf8  MOV dword ptr [EBP + 0x8],EAX
0063aafb  MOV EAX,dword ptr [EBP + -0x4]
0063aafe  MOV ECX,dword ptr [EAX + 0x3a8]
0063ab04  MOV EDX,dword ptr [EBP + 0x8]
0063ab07  MOV EAX,dword ptr [ECX + EDX*0x4]
0063ab0a  MOV ESP,EBP
0063ab0c  POP EBP
0063ab0d  RET 0x4
