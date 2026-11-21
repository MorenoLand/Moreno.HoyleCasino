; FUN_0062e170  0062e170
0062e170  PUSH EBP
0062e171  MOV EBP,ESP
0062e173  PUSH -0x1
0062e175  PUSH 0x6ab778
0062e17a  MOV EAX,FS:[0x0]
0062e180  PUSH EAX
0062e181  SUB ESP,0xc
0062e184  MOV EAX,[0x00781870]
0062e189  XOR EAX,EBP
0062e18b  PUSH EAX
0062e18c  LEA EAX,[EBP + -0xc]
0062e18f  MOV FS:[0x0],EAX
0062e195  MOV dword ptr [EBP + -0x18],ECX
0062e198  MOV ECX,dword ptr [EBP + -0x18]
0062e19b  CALL 0x0062aea0
0062e1a0  MOV dword ptr [EBP + -0x4],0x0
0062e1a7  MOV EAX,dword ptr [EBP + -0x18]
0062e1aa  MOV dword ptr [EAX],0x6d9b8c
0062e1b0  MOV ECX,dword ptr [EBP + -0x18]
0062e1b3  MOV dword ptr [ECX + 0x408],0x0
0062e1bd  CMP dword ptr [EBP + 0x8],0x0
0062e1c1  JZ 0x0062e1c9
0062e1c3  CMP dword ptr [EBP + 0xc],0x0
0062e1c7  JNZ 0x0062e202
0062e1c9  MOV EDX,dword ptr [EBP + -0x18]
0062e1cc  MOV dword ptr [EDX + 0x40c],0x0
0062e1d6  MOV EAX,dword ptr [EBP + -0x18]
0062e1d9  MOV dword ptr [EAX + 0x410],0x0
0062e1e3  MOV ECX,dword ptr [EBP + -0x18]
0062e1e6  MOV dword ptr [ECX + 0x414],0x0
0062e1f0  MOV EDX,dword ptr [EBP + -0x18]
0062e1f3  MOV dword ptr [EDX + 0x418],0x0
0062e1fd  JMP 0x0062e2b4
0062e202  MOV EAX,dword ptr [EBP + -0x18]
0062e205  MOV ECX,dword ptr [EBP + 0x8]
0062e208  MOV dword ptr [EAX + 0x40c],ECX
0062e20e  MOV EDX,dword ptr [EBP + -0x18]
0062e211  MOV EAX,dword ptr [EBP + 0xc]
0062e214  MOV dword ptr [EDX + 0x410],EAX
0062e21a  MOV ECX,dword ptr [EBP + -0x18]
0062e21d  MOV dword ptr [ECX + 0x418],0x4
0062e227  MOV EDX,dword ptr [EBP + -0x18]
0062e22a  MOV EAX,dword ptr [EBP + -0x18]
0062e22d  MOV ECX,dword ptr [EDX + 0x40c]
0062e233  IMUL ECX,dword ptr [EAX + 0x418]
0062e23a  ADD ECX,0x3
0062e23d  MOV EDX,dword ptr [EBP + -0x18]
0062e240  MOV EAX,dword ptr [EBP + -0x18]
0062e243  MOV EDX,dword ptr [EDX + 0x40c]
0062e249  IMUL EDX,dword ptr [EAX + 0x418]
0062e250  SUB EDX,0x1
0062e253  AND EDX,0x80000003
0062e259  JNS 0x0062e260
0062e25b  DEC EDX
0062e25c  OR EDX,0xfffffffc
0062e25f  INC EDX
0062e260  SUB ECX,EDX
0062e262  MOV EAX,dword ptr [EBP + -0x18]
0062e265  MOV dword ptr [EAX + 0x414],ECX
0062e26b  MOV ECX,dword ptr [EBP + -0x18]
0062e26e  MOV EDX,dword ptr [EBP + -0x18]
0062e271  MOV EAX,dword ptr [ECX + 0x414]
0062e277  IMUL EAX,dword ptr [EDX + 0x410]
0062e27e  MOV dword ptr [EBP + -0x10],EAX
0062e281  MOV ECX,dword ptr [EBP + -0x10]
0062e284  PUSH ECX
0062e285  CALL 0x00686d82
0062e28a  ADD ESP,0x4
0062e28d  MOV dword ptr [EBP + -0x14],EAX
0062e290  MOV EDX,dword ptr [EBP + -0x18]
0062e293  MOV EAX,dword ptr [EBP + -0x14]
0062e296  MOV dword ptr [EDX + 0x408],EAX
0062e29c  MOV ECX,dword ptr [EBP + -0x10]
0062e29f  PUSH ECX
0062e2a0  PUSH 0x0
0062e2a2  MOV EDX,dword ptr [EBP + -0x18]
0062e2a5  MOV EAX,dword ptr [EDX + 0x408]
0062e2ab  PUSH EAX
0062e2ac  CALL 0x00686fa2
0062e2b1  ADD ESP,0xc
0062e2b4  MOV dword ptr [EBP + -0x4],0xffffffff
0062e2bb  MOV EAX,dword ptr [EBP + -0x18]
0062e2be  MOV ECX,dword ptr [EBP + -0xc]
0062e2c1  MOV dword ptr FS:[0x0],ECX
0062e2c8  POP ECX
0062e2c9  MOV ESP,EBP
0062e2cb  POP EBP
0062e2cc  RET 0x8
