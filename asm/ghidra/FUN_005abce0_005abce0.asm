; FUN_005abce0  005abce0
005abce0  PUSH EBP
005abce1  MOV EBP,ESP
005abce3  SUB ESP,0x8
005abce6  MOV dword ptr [EBP + -0x4],ECX
005abce9  MOV EAX,[0x007935f8]
005abcee  MOV ECX,dword ptr [EAX + 0x3c]
005abcf1  CALL 0x005eb240
005abcf6  TEST EAX,EAX
005abcf8  JLE 0x005abd60
005abcfa  MOV ECX,dword ptr [0x007935f8]
005abd00  MOV ECX,dword ptr [ECX + 0x40]
005abd03  CALL 0x005eb240
005abd08  TEST EAX,EAX
005abd0a  JLE 0x005abd60
005abd0c  MOV EDX,dword ptr [0x007935f8]
005abd12  MOV ECX,dword ptr [EDX + 0x44]
005abd15  CALL 0x005eb240
005abd1a  TEST EAX,EAX
005abd1c  JLE 0x005abd60
005abd1e  MOV ECX,dword ptr [0x0162ee84]
005abd24  CALL 0x00637630
005abd29  MOVZX EAX,AL
005abd2c  TEST EAX,EAX
005abd2e  JZ 0x005abd60
005abd30  MOVZX ECX,byte ptr [0x00795f94]
005abd37  TEST ECX,ECX
005abd39  JNZ 0x005abd60
005abd3b  MOV EDX,dword ptr [EBP + -0x4]
005abd3e  MOVZX EAX,byte ptr [EDX + 0x20]
005abd42  TEST EAX,EAX
005abd44  JNZ 0x005abd60
005abd46  MOV ECX,dword ptr [0x00793604]
005abd4c  MOVZX EDX,byte ptr [ECX + 0x5c0]
005abd53  TEST EDX,EDX
005abd55  JNZ 0x005abd60
005abd57  MOV dword ptr [EBP + -0x8],0x1
005abd5e  JMP 0x005abd67
005abd60  MOV dword ptr [EBP + -0x8],0x0
005abd67  MOV AL,byte ptr [EBP + -0x8]
005abd6a  MOV ESP,EBP
005abd6c  POP EBP
005abd6d  RET
