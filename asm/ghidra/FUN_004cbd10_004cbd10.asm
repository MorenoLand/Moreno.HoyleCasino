; FUN_004cbd10  004cbd10
004cbd10  PUSH EBP
004cbd11  MOV EBP,ESP
004cbd13  SUB ESP,0x8
004cbd16  PUSH ESI
004cbd17  MOV dword ptr [EBP + -0x8],ECX
004cbd1a  MOV EAX,dword ptr [EBP + -0x8]
004cbd1d  MOVSX ECX,word ptr [EAX + 0x64]
004cbd21  TEST ECX,ECX
004cbd23  JNZ 0x004cbd39
004cbd25  MOV EDX,dword ptr [EBP + -0x8]
004cbd28  MOV AX,word ptr [EDX + 0x10e]
004cbd2f  JMP 0x004cbded
004cbd39  MOV EAX,dword ptr [EBP + -0x8]
004cbd3c  MOVSX ECX,word ptr [EAX + 0x64]
004cbd40  CMP ECX,0x1
004cbd43  JNZ 0x004cbd7d
004cbd45  MOV EDX,dword ptr [EBP + -0x8]
004cbd48  MOV AX,word ptr [EDX + 0x10e]
004cbd4f  MOV word ptr [EBP + -0x4],AX
004cbd53  PUSH 0x5
004cbd55  CALL 0x0062fbf0
004cbd5a  ADD ESP,0x4
004cbd5d  MOVSX ECX,word ptr [EBP + -0x4]
004cbd61  SUB ECX,EAX
004cbd63  MOV word ptr [EBP + -0x4],CX
004cbd67  MOVSX EDX,word ptr [EBP + -0x4]
004cbd6b  TEST EDX,EDX
004cbd6d  JGE 0x004cbd75
004cbd6f  MOV word ptr [EBP + -0x4],0x0
004cbd75  MOV AX,word ptr [EBP + -0x4]
004cbd79  JMP 0x004cbded
004cbd7d  MOV EAX,dword ptr [EBP + -0x8]
004cbd80  MOVSX ECX,word ptr [EAX + 0x64]
004cbd84  CMP ECX,0x2
004cbd87  JNZ 0x004cbda6
004cbd89  MOV EDX,dword ptr [EBP + -0x8]
004cbd8c  MOVSX ESI,word ptr [EDX + 0x10e]
004cbd93  PUSH 0x3
004cbd95  CALL 0x0062fbf0
004cbd9a  ADD ESP,0x4
004cbd9d  ADD ESI,EAX
004cbd9f  MOV AX,SI
004cbda2  JMP 0x004cbded
004cbda6  MOV EAX,dword ptr [EBP + -0x8]
004cbda9  MOVSX ECX,word ptr [EAX + 0x64]
004cbdad  CMP ECX,0x3
004cbdb0  JNZ 0x004cbdcf
004cbdb2  MOV EDX,dword ptr [EBP + -0x8]
004cbdb5  MOVSX ESI,word ptr [EDX + 0x10e]
004cbdbc  PUSH 0x6
004cbdbe  CALL 0x0062fbf0
004cbdc3  ADD ESP,0x4
004cbdc6  ADD ESI,EAX
004cbdc8  MOV AX,SI
004cbdcb  JMP 0x004cbded
004cbdcf  XOR EAX,EAX
004cbdd1  JNZ 0x004cbdea
004cbdd3  PUSH 0x931
004cbdd8  PUSH 0x6bf384
004cbddd  PUSH 0x6b2b64
004cbde2  CALL 0x005e9f20
004cbde7  ADD ESP,0xc
004cbdea  XOR AX,AX
004cbded  POP ESI
004cbdee  MOV ESP,EBP
004cbdf0  POP EBP
004cbdf1  RET
