; FUN_005fc760  005fc760
005fc760  PUSH EBP
005fc761  MOV EBP,ESP
005fc763  PUSH ECX
005fc764  MOV dword ptr [EBP + -0x4],ECX
005fc767  MOV EAX,dword ptr [EBP + -0x4]
005fc76a  MOV ECX,dword ptr [EAX + 0x1ec]
005fc770  PUSH ECX
005fc771  MOV ECX,dword ptr [0x015e55e4]
005fc777  CALL 0x005f2920
005fc77c  MOVZX EDX,AL
005fc77f  TEST EDX,EDX
005fc781  JZ 0x005fc79a
005fc783  MOV EAX,dword ptr [EBP + -0x4]
005fc786  MOV ECX,dword ptr [EAX + 0x1ec]
005fc78c  PUSH ECX
005fc78d  MOV ECX,dword ptr [0x015e55e4]
005fc793  CALL 0x005f2840
005fc798  JMP 0x005fc7e4
005fc79a  MOV ECX,dword ptr [0x015e55e4]
005fc7a0  CALL 0x005f2870
005fc7a5  PUSH 0x0
005fc7a7  PUSH 0x0
005fc7a9  MOV EDX,dword ptr [EBP + -0x4]
005fc7ac  MOV EAX,dword ptr [EDX + 0x1e8]
005fc7b2  PUSH EAX
005fc7b3  MOV ECX,dword ptr [EBP + -0x4]
005fc7b6  MOV EDX,dword ptr [ECX]
005fc7b8  MOV ECX,dword ptr [EBP + -0x4]
005fc7bb  MOV EAX,dword ptr [EDX + 0x54]
005fc7be  CALL EAX
005fc7c0  PUSH EAX
005fc7c1  MOV ECX,dword ptr [EBP + -0x4]
005fc7c4  MOV EDX,dword ptr [ECX]
005fc7c6  MOV ECX,dword ptr [EBP + -0x4]
005fc7c9  MOV EAX,dword ptr [EDX + 0x4c]
005fc7cc  CALL EAX
005fc7ce  PUSH EAX
005fc7cf  MOV ECX,dword ptr [EBP + -0x4]
005fc7d2  MOV EDX,dword ptr [ECX + 0x1ec]
005fc7d8  PUSH EDX
005fc7d9  MOV ECX,dword ptr [0x015e55e4]
005fc7df  CALL 0x005f2670
005fc7e4  MOV ESP,EBP
005fc7e6  POP EBP
005fc7e7  RET
