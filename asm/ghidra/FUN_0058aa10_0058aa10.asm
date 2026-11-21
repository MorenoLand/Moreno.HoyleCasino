; FUN_0058aa10  0058aa10
0058aa10  PUSH EBP
0058aa11  MOV EBP,ESP
0058aa13  SUB ESP,0x8
0058aa16  PUSH ESI
0058aa17  PUSH EDI
0058aa18  MOV dword ptr [EBP + -0x8],ECX
0058aa1b  MOV EAX,dword ptr [EBP + -0x8]
0058aa1e  MOV ECX,dword ptr [EAX + 0x3b68]
0058aa24  CALL 0x00585eb0
0058aa29  MOVZX ECX,AL
0058aa2c  TEST ECX,ECX
0058aa2e  JZ 0x0058aa43
0058aa30  MOV EDX,dword ptr [EBP + -0x8]
0058aa33  MOV ECX,dword ptr [EDX + 0x3b68]
0058aa39  CALL 0x005857a0
0058aa3e  JMP 0x0058acdf
0058aa43  PUSH 0x4
0058aa45  PUSH 0x6cd044
0058aa4a  CALL 0x00630f40
0058aa4f  ADD ESP,0x4
0058aa52  PUSH EAX
0058aa53  PUSH 0x6cd024
0058aa58  CALL 0x00630f40
0058aa5d  ADD ESP,0x4
0058aa60  PUSH EAX
0058aa61  CALL 0x0062ff10
0058aa66  ADD ESP,0xc
0058aa69  CMP EAX,0x7
0058aa6c  JNZ 0x0058aa73
0058aa6e  JMP 0x0058acdf
0058aa73  MOV EAX,dword ptr [EBP + -0x8]
0058aa76  MOV ECX,dword ptr [EAX + 0x3c08]
0058aa7c  MOV EDX,dword ptr [EBP + -0x8]
0058aa7f  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3be4]
0058aa86  MOV dword ptr [EBP + -0x4],EAX
0058aa89  JMP 0x0058aa94
0058aa8b  MOV ECX,dword ptr [EBP + -0x4]
0058aa8e  ADD ECX,0x1
0058aa91  MOV dword ptr [EBP + -0x4],ECX
0058aa94  CMP dword ptr [EBP + -0x4],0x63
0058aa98  JGE 0x0058aae8
0058aa9a  MOV EDX,dword ptr [EBP + -0x8]
0058aa9d  MOV EAX,dword ptr [EDX + 0x3c08]
0058aaa3  IMUL EAX,EAX,0xe10
0058aaa9  MOV ECX,dword ptr [EBP + -0x8]
0058aaac  LEA ESI,[ECX + EAX*0x1 + 0x328]
0058aab3  MOV EDX,dword ptr [EBP + -0x4]
0058aab6  ADD EDX,0x1
0058aab9  IMUL EDX,EDX,0x24
0058aabc  ADD ESI,EDX
0058aabe  MOV EAX,dword ptr [EBP + -0x8]
0058aac1  MOV ECX,dword ptr [EAX + 0x3c08]
0058aac7  IMUL ECX,ECX,0xe10
0058aacd  MOV EDX,dword ptr [EBP + -0x8]
0058aad0  LEA EDI,[EDX + ECX*0x1 + 0x328]
0058aad7  MOV EAX,dword ptr [EBP + -0x4]
0058aada  IMUL EAX,EAX,0x24
0058aadd  ADD EDI,EAX
0058aadf  MOV ECX,0x9
0058aae4  MOVSD.REP ES:EDI,ESI
0058aae6  JMP 0x0058aa8b
0058aae8  MOV ECX,dword ptr [EBP + -0x8]
0058aaeb  MOV EDX,dword ptr [ECX + 0x3c08]
0058aaf1  MOV EAX,dword ptr [EBP + -0x8]
0058aaf4  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3be4]
0058aafb  PUSH ECX
0058aafc  MOV EDX,dword ptr [EBP + -0x8]
0058aaff  MOV EAX,dword ptr [EDX + 0x3c08]
0058ab05  SHL EAX,0x4
0058ab08  MOV ECX,dword ptr [EBP + -0x8]
0058ab0b  LEA EDX,[ECX + EAX*0x1 + 0x3ba4]
0058ab12  PUSH EDX
0058ab13  MOV ECX,dword ptr [0x007947e0]
0058ab19  CALL 0x005e2e40
0058ab1e  MOV EAX,dword ptr [EBP + -0x8]
0058ab21  MOV ECX,dword ptr [EAX + 0x3c08]
0058ab27  IMUL ECX,ECX,0xe10
0058ab2d  MOV EDX,dword ptr [EBP + -0x8]
0058ab30  MOV byte ptr [EDX + ECX*0x1 + 0x1114],0x0
0058ab38  MOV EAX,dword ptr [EBP + -0x8]
0058ab3b  MOV ECX,dword ptr [EAX + 0x3c08]
0058ab41  IMUL ECX,ECX,0xe10
0058ab47  MOV EDX,dword ptr [EBP + -0x8]
0058ab4a  MOV byte ptr [EDX + ECX*0x1 + 0x1115],0x1
0058ab52  MOV EAX,dword ptr [EBP + -0x8]
0058ab55  MOV ECX,dword ptr [EAX + 0x3c08]
0058ab5b  IMUL ECX,ECX,0xe10
0058ab61  MOV EDX,dword ptr [EBP + -0x8]
0058ab64  MOV byte ptr [EDX + ECX*0x1 + 0x1116],0x1
0058ab6c  MOV EAX,dword ptr [EBP + -0x8]
0058ab6f  MOV ECX,dword ptr [EAX + 0x3c08]
0058ab75  IMUL ECX,ECX,0xe10
0058ab7b  MOV EDX,dword ptr [EBP + -0x8]
0058ab7e  MOV byte ptr [EDX + ECX*0x1 + 0x1117],0x0
0058ab86  MOV EAX,dword ptr [EBP + -0x8]
0058ab89  MOV ECX,dword ptr [EAX + 0x3c08]
0058ab8f  IMUL ECX,ECX,0xe10
0058ab95  MOV EDX,dword ptr [EBP + -0x8]
0058ab98  MOV byte ptr [EDX + ECX*0x1 + 0x1118],0x0
0058aba0  MOV EAX,dword ptr [EBP + -0x8]
0058aba3  MOV ECX,dword ptr [EAX + 0x3c08]
0058aba9  IMUL ECX,ECX,0xe10
0058abaf  MOV EDX,dword ptr [EBP + -0x8]
0058abb2  MOV dword ptr [EDX + ECX*0x1 + 0x1130],0x0
0058abbd  MOV EAX,dword ptr [EBP + -0x8]
0058abc0  MOV ECX,dword ptr [EAX + 0x3c08]
0058abc6  IMUL ECX,ECX,0xe10
0058abcc  MOV EDX,dword ptr [EBP + -0x8]
0058abcf  MOV dword ptr [EDX + ECX*0x1 + 0x1134],0x0
0058abda  MOV dword ptr [EBP + -0x4],0x0
0058abe1  JMP 0x0058abec
0058abe3  MOV EAX,dword ptr [EBP + -0x4]
0058abe6  ADD EAX,0x1
0058abe9  MOV dword ptr [EBP + -0x4],EAX
0058abec  CMP dword ptr [EBP + -0x4],0x14
0058abf0  JGE 0x0058ac11
0058abf2  MOV ECX,dword ptr [EBP + -0x8]
0058abf5  MOV EDX,dword ptr [ECX + 0x3c08]
0058abfb  IMUL EDX,EDX,0xe10
0058ac01  ADD EDX,dword ptr [EBP + -0x4]
0058ac04  MOV EAX,dword ptr [EBP + -0x8]
0058ac07  MOV byte ptr [EAX + EDX*0x1 + 0x1119],0x0
0058ac0f  JMP 0x0058abe3
0058ac11  MOV ECX,dword ptr [EBP + -0x8]
0058ac14  MOV EDX,dword ptr [ECX + 0x3c08]
0058ac1a  MOV EAX,dword ptr [EBP + -0x8]
0058ac1d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3be4]
0058ac24  SUB ECX,0x1
0058ac27  MOV EDX,dword ptr [EBP + -0x8]
0058ac2a  MOV EAX,dword ptr [EDX + 0x3c08]
0058ac30  MOV EDX,dword ptr [EBP + -0x8]
0058ac33  MOV dword ptr [EDX + EAX*0x4 + 0x3be4],ECX
0058ac3a  MOV EAX,dword ptr [EBP + -0x8]
0058ac3d  MOV ECX,dword ptr [EAX + 0x3c08]
0058ac43  MOV EDX,dword ptr [EBP + -0x8]
0058ac46  CMP dword ptr [EDX + ECX*0x4 + 0x3be4],0x0
0058ac4e  JGE 0x0058ac67
0058ac50  MOV EAX,dword ptr [EBP + -0x8]
0058ac53  MOV ECX,dword ptr [EAX + 0x3c08]
0058ac59  MOV EDX,dword ptr [EBP + -0x8]
0058ac5c  MOV dword ptr [EDX + ECX*0x4 + 0x3be4],0x0
0058ac67  MOV EAX,dword ptr [EBP + -0x8]
0058ac6a  MOV ECX,dword ptr [EAX + 0x3c08]
0058ac70  MOV EDX,dword ptr [EBP + -0x8]
0058ac73  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3bf4]
0058ac7a  SUB EAX,0x1
0058ac7d  MOV ECX,dword ptr [EBP + -0x8]
0058ac80  MOV EDX,dword ptr [ECX + 0x3c08]
0058ac86  MOV ECX,dword ptr [EBP + -0x8]
0058ac89  MOV dword ptr [ECX + EDX*0x4 + 0x3bf4],EAX
0058ac90  MOV EDX,dword ptr [EBP + -0x8]
0058ac93  MOV EAX,dword ptr [EDX + 0x3c08]
0058ac99  MOV ECX,dword ptr [EBP + -0x8]
0058ac9c  CMP dword ptr [ECX + EAX*0x4 + 0x3bf4],0x1
0058aca4  JGE 0x0058acbd
0058aca6  MOV EDX,dword ptr [EBP + -0x8]
0058aca9  MOV EAX,dword ptr [EDX + 0x3c08]
0058acaf  MOV ECX,dword ptr [EBP + -0x8]
0058acb2  MOV dword ptr [ECX + EAX*0x4 + 0x3bf4],0x1
0058acbd  MOV EDX,dword ptr [EBP + -0x8]
0058acc0  MOV EAX,dword ptr [EDX + 0x3c08]
0058acc6  MOV ECX,dword ptr [EBP + -0x8]
0058acc9  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3be4]
0058acd0  PUSH EDX
0058acd1  MOV EAX,dword ptr [EBP + -0x8]
0058acd4  MOV ECX,dword ptr [EAX + 0x314]
0058acda  CALL 0x0058dfb0
0058acdf  POP EDI
0058ace0  POP ESI
0058ace1  MOV ESP,EBP
0058ace3  POP EBP
0058ace4  RET
