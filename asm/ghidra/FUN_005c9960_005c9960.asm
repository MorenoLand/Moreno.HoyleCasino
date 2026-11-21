; FUN_005c9960  005c9960
005c9960  PUSH EBP
005c9961  MOV EBP,ESP
005c9963  SUB ESP,0x8
005c9966  MOV dword ptr [EBP + -0x4],ECX
005c9969  MOV ECX,dword ptr [EBP + -0x4]
005c996c  CALL 0x005c9140
005c9971  MOV EAX,dword ptr [EBP + 0x8]
005c9974  MOV ECX,dword ptr [EBP + -0x4]
005c9977  CMP dword ptr [ECX + EAX*0x4 + 0x18],0x0
005c997c  JL 0x005c998d
005c997e  MOV EDX,dword ptr [EBP + 0x8]
005c9981  MOV EAX,dword ptr [EBP + -0x4]
005c9984  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x18]
005c9988  MOV dword ptr [EBP + -0x8],ECX
005c998b  JMP 0x005c999c
005c998d  MOV EDX,dword ptr [EBP + 0x8]
005c9990  MOV EAX,dword ptr [EBP + -0x4]
005c9993  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x18]
005c9997  NEG ECX
005c9999  MOV dword ptr [EBP + -0x8],ECX
005c999c  MOV EDX,dword ptr [EBP + 0xc]
005c999f  SUB EDX,dword ptr [EBP + -0x8]
005c99a2  MOV dword ptr [EBP + 0xc],EDX
005c99a5  MOV EAX,dword ptr [EBP + 0xc]
005c99a8  ADD EAX,0x2
005c99ab  MOV dword ptr [EBP + 0xc],EAX
005c99ae  JS 0x005c99b6
005c99b0  CMP dword ptr [EBP + 0xc],0x5
005c99b4  JL 0x005c99ba
005c99b6  XOR EAX,EAX
005c99b8  JMP 0x005c99cd
005c99ba  MOV ECX,dword ptr [EBP + 0x8]
005c99bd  IMUL ECX,ECX,0x14
005c99c0  MOV EDX,dword ptr [EBP + -0x4]
005c99c3  LEA EAX,[EDX + ECX*0x1 + 0x54]
005c99c7  MOV ECX,dword ptr [EBP + 0xc]
005c99ca  MOV EAX,dword ptr [EAX + ECX*0x4]
005c99cd  MOV ESP,EBP
005c99cf  POP EBP
005c99d0  RET 0x8
