; FUN_00447a70  00447a70
00447a70  PUSH EBP
00447a71  MOV EBP,ESP
00447a73  SUB ESP,0x28
00447a76  MOV dword ptr [EBP + -0x28],ECX
00447a79  MOV dword ptr [EBP + -0x24],0x154
00447a80  MOV dword ptr [EBP + -0x20],0xe2
00447a87  MOV dword ptr [EBP + -0x1c],0x1b5
00447a8e  MOV dword ptr [EBP + -0x18],0x75
00447a95  MOV dword ptr [EBP + -0x10],0x148
00447a9c  MOV dword ptr [EBP + -0xc],0x9d
00447aa3  MOV dword ptr [EBP + -0x8],0x1de
00447aaa  MOV dword ptr [EBP + -0x4],0x6
00447ab1  CMP dword ptr [EBP + 0x8],-0x1
00447ab5  JNZ 0x00447ac8
00447ab7  MOV EAX,dword ptr [EBP + 0xc]
00447aba  NEG EAX
00447abc  SBB EAX,EAX
00447abe  AND EAX,0x11
00447ac1  ADD EAX,0x114
00447ac6  JMP 0x00447adf
00447ac8  MOV EAX,dword ptr [EBP + 0xc]
00447acb  IMUL EAX,EAX,0x11
00447ace  MOV ECX,dword ptr [EBP + 0x8]
00447ad1  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x24]
00447ad5  LEA EAX,[EDX + EAX*0x1 + -0x4]
00447ad9  MOV dword ptr [EBP + -0x14],EAX
00447adc  MOV EAX,dword ptr [EBP + -0x14]
00447adf  MOV ESP,EBP
00447ae1  POP EBP
00447ae2  RET 0x8
