; FUN_0069bab0  0069bab0
0069bab0  SUB ESP,0x28
0069bab3  MOV EAX,dword ptr [ESP + 0x2c]
0069bab7  PUSH EBX
0069bab8  PUSH EBP
0069bab9  PUSH ESI
0069baba  MOV EBP,dword ptr [EAX]
0069babc  PUSH EDI
0069babd  MOV dword ptr [ESP + 0x34],EBP
0069bac1  MOV EBP,dword ptr [ESP + 0x40]
0069bac5  SHL EBP,0x5
0069bac8  XOR EDX,EDX
0069baca  XOR ESI,ESI
0069bacc  MOV EAX,dword ptr [EAX + EBP*0x1 + -0x1c]
0069bad0  MOV EBP,dword ptr [ESP + 0x40]
0069bad4  XOR EDI,EDI
0069bad6  XOR EBX,EBX
0069bad8  XOR ECX,ECX
0069bada  MOV dword ptr [ESP + 0x10],EDX
0069bade  TEST EBP,EBP
0069bae0  MOV dword ptr [ESP + 0x14],ESI
0069bae4  MOV dword ptr [ESP + 0x18],EDI
0069bae8  MOV dword ptr [ESP + 0x20],EBX
0069baec  MOV dword ptr [ESP + 0x28],ECX
0069baf0  MOV dword ptr [ESP + 0x30],EAX
0069baf4  JLE 0x0069bb29
0069baf6  MOV EAX,dword ptr [ESP + 0x3c]
0069bafa  ADD EAX,0xc
0069bafd  ADD EDX,dword ptr [EAX + -0x4]
0069bb00  ADD ESI,dword ptr [EAX]
0069bb02  ADD EDI,dword ptr [EAX + 0x4]
0069bb05  ADD EBX,dword ptr [EAX + 0xc]
0069bb08  ADD ECX,dword ptr [EAX + 0x10]
0069bb0b  ADD EAX,0x20
0069bb0e  DEC EBP
0069bb0f  JNZ 0x0069bafd
0069bb11  MOV EAX,dword ptr [ESP + 0x30]
0069bb15  MOV dword ptr [ESP + 0x28],ECX
0069bb19  MOV dword ptr [ESP + 0x20],EBX
0069bb1d  MOV dword ptr [ESP + 0x18],EDI
0069bb21  MOV dword ptr [ESP + 0x14],ESI
0069bb25  MOV dword ptr [ESP + 0x10],EDX
0069bb29  MOV EBP,dword ptr [ESP + 0x44]
0069bb2d  MOV EBP,dword ptr [EBP]
0069bb30  TEST EBP,EBP
0069bb32  MOV dword ptr [ESP + 0x40],EBP
0069bb36  JL 0x0069bb69
0069bb38  MOV EAX,dword ptr [ESP + 0x34]
0069bb3c  ADD ESI,EBP
0069bb3e  MOV EBP,EAX
0069bb40  ADD EDX,EAX
0069bb42  IMUL EBP,EAX
0069bb45  ADD EDI,EBP
0069bb47  MOV EBP,dword ptr [ESP + 0x40]
0069bb4b  IMUL EBP,EAX
0069bb4e  MOV EAX,dword ptr [ESP + 0x30]
0069bb52  ADD EBX,EBP
0069bb54  INC ECX
0069bb55  MOV dword ptr [ESP + 0x10],EDX
0069bb59  MOV dword ptr [ESP + 0x14],ESI
0069bb5d  MOV dword ptr [ESP + 0x18],EDI
0069bb61  MOV dword ptr [ESP + 0x20],EBX
0069bb65  MOV dword ptr [ESP + 0x28],ECX
0069bb69  MOV EBP,dword ptr [ESP + 0x48]
0069bb6d  MOV EBP,dword ptr [EBP]
0069bb70  TEST EBP,EBP
0069bb72  JL 0x0069bb99
0069bb74  ADD EDX,EAX
0069bb76  ADD ESI,EBP
0069bb78  MOV dword ptr [ESP + 0x10],EDX
0069bb7c  MOV EDX,EAX
0069bb7e  IMUL EDX,EAX
0069bb81  IMUL EBP,EAX
0069bb84  ADD EDI,EDX
0069bb86  ADD EBX,EBP
0069bb88  INC ECX
0069bb89  MOV dword ptr [ESP + 0x14],ESI
0069bb8d  MOV dword ptr [ESP + 0x18],EDI
0069bb91  MOV dword ptr [ESP + 0x20],EBX
0069bb95  MOV dword ptr [ESP + 0x28],ECX
0069bb99  TEST ECX,ECX
0069bb9b  JZ 0x0069bc80
0069bba1  FILD dword ptr [ESP + 0x10]
0069bba5  FILD dword ptr [ESP + 0x14]
0069bba9  FILD dword ptr [ESP + 0x18]
0069bbad  SUB ESP,0x8
0069bbb0  FSTP double ptr [ESP + 0x20]
0069bbb4  FILD dword ptr [ESP + 0x28]
0069bbb8  FILD dword ptr [ESP + 0x30]
0069bbbc  FLD double ptr [ESP + 0x20]
0069bbc0  FMUL ST1
0069bbc2  FLD ST4
0069bbc4  FMUL ST5
0069bbc6  FSUBP
0069bbc8  FDIVR double ptr [0x006b2c48]
0069bbce  FLD double ptr [ESP + 0x20]
0069bbd2  FMUL ST4
0069bbd4  FLD ST3
0069bbd6  FMUL ST6
0069bbd8  FSUBP
0069bbda  FMUL ST1
0069bbdc  FSTP double ptr [ESP + 0x28]
0069bbe0  FXCH
0069bbe2  FMUL ST2
0069bbe4  FXCH ST3
0069bbe6  FMUL ST4
0069bbe8  FSUBP ST3,ST0
0069bbea  FXCH ST2
0069bbec  FMUL ST2
0069bbee  FSTP double ptr [ESP + 0x30]
0069bbf2  FSTP ST1
0069bbf4  FSTP ST0
0069bbf6  FSTP ST0
0069bbf8  FILD dword ptr [ESP + 0x3c]
0069bbfc  FMUL double ptr [ESP + 0x30]
0069bc00  FADD double ptr [ESP + 0x28]
0069bc04  FADD double ptr [0x006b2c38]
0069bc0a  FSTP double ptr [ESP]
0069bc0d  CALL 0x00686fb4
0069bc12  CALL 0x00687450
0069bc17  FILD dword ptr [ESP + 0x38]
0069bc1b  MOV ESI,dword ptr [ESP + 0x4c]
0069bc1f  FMUL double ptr [ESP + 0x30]
0069bc23  MOV dword ptr [ESI],EAX
0069bc25  FADD double ptr [ESP + 0x28]
0069bc29  FADD double ptr [0x006b2c38]
0069bc2f  FSTP double ptr [ESP]
0069bc32  CALL 0x00686fb4
0069bc37  ADD ESP,0x8
0069bc3a  CALL 0x00687450
0069bc3f  MOV ECX,dword ptr [ESP + 0x48]
0069bc43  MOV dword ptr [ECX],EAX
0069bc45  MOV EAX,dword ptr [ESI]
0069bc47  CMP EAX,0x3ff
0069bc4c  JLE 0x0069bc54
0069bc4e  MOV dword ptr [ESI],0x3ff
0069bc54  CMP dword ptr [ECX],0x3ff
0069bc5a  JLE 0x0069bc62
0069bc5c  MOV dword ptr [ECX],0x3ff
0069bc62  CMP dword ptr [ESI],0x0
0069bc65  JGE 0x0069bc6d
0069bc67  MOV dword ptr [ESI],0x0
0069bc6d  CMP dword ptr [ECX],0x0
0069bc70  JGE 0x0069bc94
0069bc72  POP EDI
0069bc73  POP ESI
0069bc74  POP EBP
0069bc75  MOV dword ptr [ECX],0x0
0069bc7b  POP EBX
0069bc7c  ADD ESP,0x28
0069bc7f  RET
0069bc80  MOV EAX,dword ptr [ESP + 0x44]
0069bc84  MOV ECX,dword ptr [ESP + 0x48]
0069bc88  MOV dword ptr [EAX],0x0
0069bc8e  MOV dword ptr [ECX],0x0
0069bc94  POP EDI
0069bc95  POP ESI
0069bc96  POP EBP
0069bc97  POP EBX
0069bc98  ADD ESP,0x28
0069bc9b  RET
