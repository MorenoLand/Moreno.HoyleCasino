; FUN_005c0349  005c0349
005c0349  MOV dword ptr [EBP + -0x4],0xffffffff
005c0350  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c0356  CMP dword ptr [EAX + 0x4],0x0
005c035a  JNZ 0x005c0368
005c035c  MOV dword ptr [EBP + 0xfffffdd0],0x0
005c0366  JMP 0x005c0383
005c0368  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c036e  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c0374  MOV EAX,dword ptr [ECX + 0x8]
005c0377  SUB EAX,dword ptr [EDX + 0x4]
005c037a  SAR EAX,0x2
005c037d  MOV dword ptr [EBP + 0xfffffdd0],EAX
005c0383  MOV ECX,dword ptr [EBP + 0x10]
005c0386  ADD ECX,dword ptr [EBP + 0xfffffdd0]
005c038c  MOV dword ptr [EBP + 0x10],ECX
005c038f  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c0395  CMP dword ptr [EDX + 0x4],0x0
005c0399  JZ 0x005c0416
005c039b  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c03a1  MOV ECX,dword ptr [EAX + 0x8]
005c03a4  MOV dword ptr [EBP + 0xffffff10],ECX
005c03aa  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c03b0  MOV EAX,dword ptr [EDX + 0x4]
005c03b3  MOV dword ptr [EBP + 0xffffff14],EAX
005c03b9  MOV ECX,dword ptr [EBP + 0xffffff10]
005c03bf  MOV dword ptr [EBP + 0xffffff18],ECX
005c03c5  MOV EDX,dword ptr [EBP + 0xffffff14]
005c03cb  MOV dword ptr [EBP + 0xffffff1c],EDX
005c03d1  MOV AL,byte ptr [EBP + 0xffffff22]
005c03d7  MOV byte ptr [EBP + 0xffffff23],AL
005c03dd  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c03e3  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c03e9  MOV EAX,dword ptr [ECX + 0xc]
005c03ec  SUB EAX,dword ptr [EDX + 0x4]
005c03ef  SAR EAX,0x2
005c03f2  MOV dword ptr [EBP + 0xffffff08],EAX
005c03f8  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c03fe  MOV EDX,dword ptr [ECX + 0x4]
005c0401  MOV dword ptr [EBP + 0xffffff0c],EDX
005c0407  MOV EAX,dword ptr [EBP + 0xffffff0c]
005c040d  PUSH EAX
005c040e  CALL 0x00686cae
005c0413  ADD ESP,0x4
005c0416  MOV ECX,dword ptr [EBP + -0x18]
005c0419  MOV EDX,dword ptr [EBP + -0x20]
005c041c  LEA EAX,[EDX + ECX*0x4]
005c041f  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c0425  MOV dword ptr [ECX + 0xc],EAX
005c0428  MOV EDX,dword ptr [EBP + 0x10]
005c042b  MOV EAX,dword ptr [EBP + -0x20]
005c042e  LEA ECX,[EAX + EDX*0x4]
005c0431  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c0437  MOV dword ptr [EDX + 0x8],ECX
005c043a  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c0440  MOV ECX,dword ptr [EBP + -0x20]
005c0443  MOV dword ptr [EAX + 0x4],ECX
005c0446  JMP 0x005c06d1
