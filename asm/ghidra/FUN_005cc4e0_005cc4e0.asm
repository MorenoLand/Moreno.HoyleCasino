; FUN_005cc4e0  005cc4e0
005cc4e0  PUSH EBP
005cc4e1  MOV EBP,ESP
005cc4e3  SUB ESP,0xc
005cc4e6  MOV dword ptr [EBP + -0xc],ECX
005cc4e9  MOV dword ptr [EBP + -0x4],0x0
005cc4f0  JMP 0x005cc4fb
005cc4f2  MOV EAX,dword ptr [EBP + -0x4]
005cc4f5  ADD EAX,0x1
005cc4f8  MOV dword ptr [EBP + -0x4],EAX
005cc4fb  CMP dword ptr [EBP + -0x4],0x5
005cc4ff  JGE 0x005cc535
005cc501  MOV dword ptr [EBP + -0x8],0x0
005cc508  JMP 0x005cc513
005cc50a  MOV ECX,dword ptr [EBP + -0x8]
005cc50d  ADD ECX,0x1
005cc510  MOV dword ptr [EBP + -0x8],ECX
005cc513  CMP dword ptr [EBP + -0x8],0x4
005cc517  JGE 0x005cc533
005cc519  MOV EDX,dword ptr [EBP + -0x8]
005cc51c  PUSH EDX
005cc51d  MOV EAX,dword ptr [EBP + -0x4]
005cc520  PUSH EAX
005cc521  MOV ECX,dword ptr [EBP + -0xc]
005cc524  MOV EDX,dword ptr [ECX]
005cc526  MOV ECX,dword ptr [EBP + -0xc]
005cc529  MOV EAX,dword ptr [EDX + 0xb8]
005cc52f  CALL EAX
005cc531  JMP 0x005cc50a
005cc533  JMP 0x005cc4f2
005cc535  MOV ESP,EBP
005cc537  POP EBP
005cc538  RET
