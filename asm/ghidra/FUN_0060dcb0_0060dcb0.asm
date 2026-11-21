; FUN_0060dcb0  0060dcb0
0060dcb0  PUSH EBP
0060dcb1  MOV EBP,ESP
0060dcb3  SUB ESP,0x8
0060dcb6  MOV dword ptr [EBP + -0x4],ECX
0060dcb9  MOV EAX,dword ptr [EBP + -0x4]
0060dcbc  MOVZX ECX,byte ptr [EAX + 0x96]
0060dcc3  TEST ECX,ECX
0060dcc5  JNZ 0x0060dcdb
0060dcc7  MOV EDX,dword ptr [EBP + -0x4]
0060dcca  MOVZX EAX,byte ptr [EDX + 0x5c]
0060dcce  TEST EAX,EAX
0060dcd0  JNZ 0x0060dcdb
0060dcd2  MOV dword ptr [EBP + -0x8],0x1
0060dcd9  JMP 0x0060dce2
0060dcdb  MOV dword ptr [EBP + -0x8],0x0
0060dce2  MOV AL,byte ptr [EBP + -0x8]
0060dce5  MOV ESP,EBP
0060dce7  POP EBP
0060dce8  RET
