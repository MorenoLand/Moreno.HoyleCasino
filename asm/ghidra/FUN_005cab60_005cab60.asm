; FUN_005cab60  005cab60
005cab60  PUSH EBP
005cab61  MOV EBP,ESP
005cab63  SUB ESP,0xc
005cab66  MOV dword ptr [EBP + -0x8],ECX
005cab69  MOV dword ptr [EBP + -0x4],0x0
005cab70  MOV EAX,dword ptr [EBP + -0x8]
005cab73  FLD double ptr [0x006b3e40]
005cab79  FCOMP double ptr [EAX + 0x1e0]
005cab7f  FNSTSW AX
005cab81  TEST AH,0x44
005cab84  JP 0x005cab90
005cab86  MOV EAX,0x42d
005cab8b  JMP 0x005cad07
005cab90  MOV ECX,dword ptr [EBP + -0x8]
005cab93  FLD double ptr [ECX + 0x1e0]
005cab99  CALL 0x00686cc0
005cab9e  MOV dword ptr [EBP + -0xc],EAX
005caba1  CMP dword ptr [EBP + -0xc],0x2710
005caba8  JG 0x005cac17
005cabaa  CMP dword ptr [EBP + -0xc],0x2710
005cabb1  JZ 0x005cac9e
005cabb7  CMP dword ptr [EBP + -0xc],0x64
005cabbb  JG 0x005cabeb
005cabbd  CMP dword ptr [EBP + -0xc],0x64
005cabc1  JZ 0x005cacc2
005cabc7  MOV EDX,dword ptr [EBP + -0xc]
005cabca  SUB EDX,0x5
005cabcd  MOV dword ptr [EBP + -0xc],EDX
005cabd0  CMP dword ptr [EBP + -0xc],0x2d
005cabd4  JA 0x005cacff
005cabda  MOV EAX,dword ptr [EBP + -0xc]
005cabdd  MOVZX ECX,byte ptr [EAX + 0x5cad20]
005cabe4  JMP dword ptr [ECX*0x4 + 0x5cad0c]
005cabeb  CMP dword ptr [EBP + -0xc],0x1f4
005cabf2  JZ 0x005cacb9
005cabf8  CMP dword ptr [EBP + -0xc],0x3e8
005cabff  JZ 0x005cacb0
005cac05  CMP dword ptr [EBP + -0xc],0x1388
005cac0c  JZ 0x005caca7
005cac12  JMP 0x005cacff
005cac17  CMP dword ptr [EBP + -0xc],0x7a120
005cac1e  JG 0x005cac49
005cac20  CMP dword ptr [EBP + -0xc],0x7a120
005cac27  JZ 0x005cac7a
005cac29  CMP dword ptr [EBP + -0xc],0x61a8
005cac30  JZ 0x005cac95
005cac32  CMP dword ptr [EBP + -0xc],0xc350
005cac39  JZ 0x005cac8c
005cac3b  CMP dword ptr [EBP + -0xc],0x186a0
005cac42  JZ 0x005cac83
005cac44  JMP 0x005cacff
005cac49  CMP dword ptr [EBP + -0xc],0xf4240
005cac50  JZ 0x005cac71
005cac52  CMP dword ptr [EBP + -0xc],0x989680
005cac59  JZ 0x005cacf1
005cac5f  CMP dword ptr [EBP + -0xc],0x5f5e100
005cac66  JZ 0x005cacf8
005cac6c  JMP 0x005cacff
005cac71  MOV EDX,dword ptr [EBP + -0x4]
005cac74  ADD EDX,0x1
005cac77  MOV dword ptr [EBP + -0x4],EDX
005cac7a  MOV EAX,dword ptr [EBP + -0x4]
005cac7d  ADD EAX,0x1
005cac80  MOV dword ptr [EBP + -0x4],EAX
005cac83  MOV ECX,dword ptr [EBP + -0x4]
005cac86  ADD ECX,0x1
005cac89  MOV dword ptr [EBP + -0x4],ECX
005cac8c  MOV EDX,dword ptr [EBP + -0x4]
005cac8f  ADD EDX,0x1
005cac92  MOV dword ptr [EBP + -0x4],EDX
005cac95  MOV EAX,dword ptr [EBP + -0x4]
005cac98  ADD EAX,0x1
005cac9b  MOV dword ptr [EBP + -0x4],EAX
005cac9e  MOV ECX,dword ptr [EBP + -0x4]
005caca1  ADD ECX,0x1
005caca4  MOV dword ptr [EBP + -0x4],ECX
005caca7  MOV EDX,dword ptr [EBP + -0x4]
005cacaa  ADD EDX,0x1
005cacad  MOV dword ptr [EBP + -0x4],EDX
005cacb0  MOV EAX,dword ptr [EBP + -0x4]
005cacb3  ADD EAX,0x1
005cacb6  MOV dword ptr [EBP + -0x4],EAX
005cacb9  MOV ECX,dword ptr [EBP + -0x4]
005cacbc  ADD ECX,0x1
005cacbf  MOV dword ptr [EBP + -0x4],ECX
005cacc2  MOV EDX,dword ptr [EBP + -0x4]
005cacc5  ADD EDX,0x1
005cacc8  MOV dword ptr [EBP + -0x4],EDX
005caccb  MOV EAX,dword ptr [EBP + -0x4]
005cacce  ADD EAX,0x1
005cacd1  MOV dword ptr [EBP + -0x4],EAX
005cacd4  MOV ECX,dword ptr [EBP + -0x4]
005cacd7  ADD ECX,0x1
005cacda  MOV dword ptr [EBP + -0x4],ECX
005cacdd  MOV EDX,dword ptr [EBP + -0x4]
005cace0  ADD EDX,0x1
005cace3  MOV dword ptr [EBP + -0x4],EDX
005cace6  MOV EAX,dword ptr [EBP + -0x4]
005cace9  ADD EAX,0x1
005cacec  MOV dword ptr [EBP + -0x4],EAX
005cacef  JMP 0x005cacff
005cacf1  MOV EAX,0x440
005cacf6  JMP 0x005cad07
005cacf8  MOV EAX,0x43f
005cacfd  JMP 0x005cad07
005cacff  MOV EAX,dword ptr [EBP + -0x4]
005cad02  ADD EAX,0x3f8
005cad07  MOV ESP,EBP
005cad09  POP EBP
005cad0a  RET
