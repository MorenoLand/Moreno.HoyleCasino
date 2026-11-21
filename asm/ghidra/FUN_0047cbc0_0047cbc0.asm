; FUN_0047cbc0  0047cbc0
0047cbc0  PUSH EBP
0047cbc1  MOV EBP,ESP
0047cbc3  PUSH ECX
0047cbc4  MOV dword ptr [EBP + -0x4],ECX
0047cbc7  CMP dword ptr [EBP + 0x8],0x0
0047cbcb  SETNZ AL
0047cbce  MOV ECX,dword ptr [EBP + -0x4]
0047cbd1  MOV byte ptr [ECX + 0x494],AL
0047cbd7  MOV ESP,EBP
0047cbd9  POP EBP
0047cbda  RET 0x4
