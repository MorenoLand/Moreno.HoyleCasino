; FUN_005dedc0  005dedc0
005dedc0  PUSH EBP
005dedc1  MOV EBP,ESP
005dedc3  SUB ESP,0xc
005dedc6  MOV dword ptr [EBP + -0xc],ECX
005dedc9  MOV dword ptr [EBP + -0x8],0x0
005dedd0  CMP dword ptr [EBP + 0x8],-0x1
005dedd4  JNZ 0x005dede1
005dedd6  MOV ECX,dword ptr [EBP + -0xc]
005dedd9  CALL 0x005f3bf0
005dedde  MOV dword ptr [EBP + 0x8],EAX
005dede1  CMP dword ptr [EBP + 0x8],0x30d401
005dede8  JNZ 0x005dedf1
005dedea  MOV EAX,0x2f7471
005dedef  JMP 0x005dee5e
005dedf1  MOV dword ptr [EBP + -0x4],0x0
005dedf8  JMP 0x005dee03
005dedfa  MOV EAX,dword ptr [EBP + -0x4]
005dedfd  ADD EAX,0x1
005dee00  MOV dword ptr [EBP + -0x4],EAX
005dee03  MOV ECX,dword ptr [EBP + -0xc]
005dee06  MOV EDX,dword ptr [ECX]
005dee08  MOV ECX,dword ptr [EBP + -0xc]
005dee0b  MOV EAX,dword ptr [EDX + 0xe4]
005dee11  CALL EAX
005dee13  CMP dword ptr [EBP + -0x4],EAX
005dee16  JGE 0x005dee3a
005dee18  MOV ECX,dword ptr [EBP + -0x4]
005dee1b  IMUL ECX,ECX,0xc
005dee1e  MOV EDX,dword ptr [ECX + 0x7947f0]
005dee24  CMP EDX,dword ptr [EBP + 0x8]
005dee27  JNZ 0x005dee38
005dee29  MOV EAX,dword ptr [EBP + -0x4]
005dee2c  IMUL EAX,EAX,0xc
005dee2f  MOV ECX,dword ptr [EAX + 0x7947f8]
005dee35  MOV dword ptr [EBP + -0x8],ECX
005dee38  JMP 0x005dedfa
005dee3a  CMP dword ptr [EBP + -0x8],0x0
005dee3e  JNZ 0x005dee5b
005dee40  XOR EDX,EDX
005dee42  JNZ 0x005dee5b
005dee44  PUSH 0x423
005dee49  PUSH 0x6d4b54
005dee4e  PUSH 0x6b2f58
005dee53  CALL 0x005e9f20
005dee58  ADD ESP,0xc
005dee5b  MOV EAX,dword ptr [EBP + -0x8]
005dee5e  MOV ESP,EBP
005dee60  POP EBP
005dee61  RET 0x4
