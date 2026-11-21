; FUN_0044ce90  0044ce90
0044ce90  PUSH EBP
0044ce91  MOV EBP,ESP
0044ce93  SUB ESP,0xc
0044ce96  MOV dword ptr [EBP + -0xc],ECX
0044ce99  MOV dword ptr [EBP + -0x8],0x0
0044cea0  MOV dword ptr [EBP + -0x4],0x0
0044cea7  JMP 0x0044ceb2
0044cea9  MOV EAX,dword ptr [EBP + -0x4]
0044ceac  ADD EAX,0x1
0044ceaf  MOV dword ptr [EBP + -0x4],EAX
0044ceb2  CMP dword ptr [EBP + -0x4],0x4
0044ceb6  JGE 0x0044cecc
0044ceb8  MOV ECX,dword ptr [EBP + -0x4]
0044cebb  PUSH ECX
0044cebc  MOV ECX,dword ptr [EBP + -0xc]
0044cebf  CALL 0x0044ce00
0044cec4  ADD EAX,dword ptr [EBP + -0x8]
0044cec7  MOV dword ptr [EBP + -0x8],EAX
0044ceca  JMP 0x0044cea9
0044cecc  MOV EAX,dword ptr [EBP + -0x8]
0044cecf  MOV ESP,EBP
0044ced1  POP EBP
0044ced2  RET
