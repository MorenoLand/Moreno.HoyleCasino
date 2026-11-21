; FUN_0056da30  0056da30
0056da30  PUSH EBP
0056da31  MOV EBP,ESP
0056da33  SUB ESP,0x18
0056da36  MOV dword ptr [EBP + -0x14],ECX
0056da39  PUSH 0x0
0056da3b  PUSH 0x0
0056da3d  CALL 0x0064c8a0
0056da42  ADD ESP,0x8
0056da45  MOV dword ptr [EBP + -0x10],EAX
0056da48  MOV dword ptr [EBP + -0xc],EDX
0056da4b  MOV EAX,dword ptr [EBP + -0x10]
0056da4e  MOV dword ptr [EBP + -0x8],EAX
0056da51  MOV ECX,dword ptr [EBP + -0xc]
0056da54  MOV dword ptr [EBP + -0x4],ECX
0056da57  CMP dword ptr [EBP + 0xc],0x3b9ac9ff
0056da5e  JLE 0x0056da77
0056da60  PUSH 0x15a
0056da65  PUSH 0x6ca2b4
0056da6a  PUSH 0x6ca2d0
0056da6f  CALL 0x005e9f20
0056da74  ADD ESP,0xc
0056da77  MOV EAX,dword ptr [EBP + -0x14]
0056da7a  MOV ECX,dword ptr [EAX + 0x9c]
0056da80  MOV dword ptr [EBP + -0x18],ECX
0056da83  CMP dword ptr [EBP + -0x18],0xb
0056da87  JA 0x0056dc0c
0056da8d  MOV EDX,dword ptr [EBP + -0x18]
0056da90  JMP dword ptr [EDX*0x4 + 0x56dc24]
0056da97  MOV EAX,dword ptr [EBP + 0xc]
0056da9a  CDQ
0056da9b  MOV ECX,0x14
0056daa0  IDIV ECX
0056daa2  MOV dword ptr [EBP + -0x8],EAX
0056daa5  MOV EAX,dword ptr [EBP + 0xc]
0056daa8  CDQ
0056daa9  MOV ECX,0x14
0056daae  IDIV ECX
0056dab0  IMUL EDX,EDX,0x5
0056dab3  MOV dword ptr [EBP + -0x4],EDX
0056dab6  JMP 0x0056dc0c
0056dabb  MOV EAX,dword ptr [EBP + 0xc]
0056dabe  CDQ
0056dabf  MOV ECX,0xa
0056dac4  IDIV ECX
0056dac6  MOV dword ptr [EBP + -0x8],EAX
0056dac9  MOV EAX,dword ptr [EBP + 0xc]
0056dacc  CDQ
0056dacd  MOV ECX,0xa
0056dad2  IDIV ECX
0056dad4  IMUL EDX,EDX,0xa
0056dad7  MOV dword ptr [EBP + -0x4],EDX
0056dada  JMP 0x0056dc0c
0056dadf  MOV EAX,dword ptr [EBP + 0xc]
0056dae2  CDQ
0056dae3  AND EDX,0x3
0056dae6  ADD EAX,EDX
0056dae8  SAR EAX,0x2
0056daeb  MOV dword ptr [EBP + -0x8],EAX
0056daee  MOV EDX,dword ptr [EBP + 0xc]
0056daf1  AND EDX,0x80000003
0056daf7  JNS 0x0056dafe
0056daf9  DEC EDX
0056dafa  OR EDX,0xfffffffc
0056dafd  INC EDX
0056dafe  IMUL EDX,EDX,0x19
0056db01  MOV dword ptr [EBP + -0x4],EDX
0056db04  JMP 0x0056dc0c
0056db09  MOV EAX,dword ptr [EBP + 0xc]
0056db0c  MOV dword ptr [EBP + -0x8],EAX
0056db0f  JMP 0x0056dc0c
0056db14  CMP dword ptr [EBP + 0xc],0xbebc200
0056db1b  JL 0x0056db26
0056db1d  MOV dword ptr [EBP + -0x8],0x3b9aca00
0056db24  JMP 0x0056db2f
0056db26  MOV ECX,dword ptr [EBP + 0xc]
0056db29  IMUL ECX,ECX,0x5
0056db2c  MOV dword ptr [EBP + -0x8],ECX
0056db2f  JMP 0x0056dc0c
0056db34  CMP dword ptr [EBP + 0xc],0x5f5e100
0056db3b  JL 0x0056db46
0056db3d  MOV dword ptr [EBP + -0x8],0x3b9aca00
0056db44  JMP 0x0056db4f
0056db46  MOV EDX,dword ptr [EBP + 0xc]
0056db49  IMUL EDX,EDX,0xa
0056db4c  MOV dword ptr [EBP + -0x8],EDX
0056db4f  JMP 0x0056dc0c
0056db54  CMP dword ptr [EBP + 0xc],0x2625a00
0056db5b  JL 0x0056db66
0056db5d  MOV dword ptr [EBP + -0x8],0x3b9aca00
0056db64  JMP 0x0056db6f
0056db66  MOV EAX,dword ptr [EBP + 0xc]
0056db69  IMUL EAX,EAX,0x19
0056db6c  MOV dword ptr [EBP + -0x8],EAX
0056db6f  JMP 0x0056dc0c
0056db74  CMP dword ptr [EBP + 0xc],0x1312d00
0056db7b  JL 0x0056db86
0056db7d  MOV dword ptr [EBP + -0x8],0x3b9aca00
0056db84  JMP 0x0056db8f
0056db86  MOV ECX,dword ptr [EBP + 0xc]
0056db89  IMUL ECX,ECX,0x32
0056db8c  MOV dword ptr [EBP + -0x8],ECX
0056db8f  JMP 0x0056dc0c
0056db91  CMP dword ptr [EBP + 0xc],0x989680
0056db98  JL 0x0056dba3
0056db9a  MOV dword ptr [EBP + -0x8],0x3b9aca00
0056dba1  JMP 0x0056dbac
0056dba3  MOV EDX,dword ptr [EBP + 0xc]
0056dba6  IMUL EDX,EDX,0x64
0056dba9  MOV dword ptr [EBP + -0x8],EDX
0056dbac  JMP 0x0056dc0c
0056dbae  CMP dword ptr [EBP + 0xc],0x989680
0056dbb5  JL 0x0056dbc0
0056dbb7  MOV dword ptr [EBP + -0x8],0x3b9aca00
0056dbbe  JMP 0x0056dbcc
0056dbc0  MOV EAX,dword ptr [EBP + 0xc]
0056dbc3  IMUL EAX,EAX,0xfa
0056dbc9  MOV dword ptr [EBP + -0x8],EAX
0056dbcc  JMP 0x0056dc0c
0056dbce  CMP dword ptr [EBP + 0xc],0x1312d00
0056dbd5  JL 0x0056dbe0
0056dbd7  MOV dword ptr [EBP + -0x8],0x3b9aca00
0056dbde  JMP 0x0056dbec
0056dbe0  MOV ECX,dword ptr [EBP + 0xc]
0056dbe3  IMUL ECX,ECX,0x1f4
0056dbe9  MOV dword ptr [EBP + -0x8],ECX
0056dbec  JMP 0x0056dc0c
0056dbee  CMP dword ptr [EBP + 0xc],0xf4240
0056dbf5  JL 0x0056dc00
0056dbf7  MOV dword ptr [EBP + -0x8],0x3b9aca00
0056dbfe  JMP 0x0056dc0c
0056dc00  MOV EDX,dword ptr [EBP + 0xc]
0056dc03  IMUL EDX,EDX,0x3e8
0056dc09  MOV dword ptr [EBP + -0x8],EDX
0056dc0c  MOV EAX,dword ptr [EBP + 0x8]
0056dc0f  MOV ECX,dword ptr [EBP + -0x8]
0056dc12  MOV dword ptr [EAX],ECX
0056dc14  MOV EDX,dword ptr [EBP + -0x4]
0056dc17  MOV dword ptr [EAX + 0x4],EDX
0056dc1a  MOV EAX,dword ptr [EBP + 0x8]
0056dc1d  MOV ESP,EBP
0056dc1f  POP EBP
0056dc20  RET 0x8
