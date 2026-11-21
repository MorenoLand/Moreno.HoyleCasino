; FUN_0058acf0  0058acf0
0058acf0  PUSH EBP
0058acf1  MOV EBP,ESP
0058acf3  SUB ESP,0x10c
0058acf9  MOV EAX,[0x00781870]
0058acfe  XOR EAX,EBP
0058ad00  MOV dword ptr [EBP + -0x4],EAX
0058ad03  MOV dword ptr [EBP + 0xfffffef4],ECX
0058ad09  MOV ECX,dword ptr [EBP + 0xfffffef4]
0058ad0f  CALL 0x0058a530
0058ad14  CMP EAX,0x64
0058ad17  JL 0x0058ad5d
0058ad19  PUSH 0x64
0058ad1b  PUSH 0x6cd07c
0058ad20  CALL 0x00630f40
0058ad25  ADD ESP,0x4
0058ad28  PUSH EAX
0058ad29  LEA EAX,[EBP + 0xfffffef8]
0058ad2f  PUSH EAX
0058ad30  CALL dword ptr [0x006b2220]
0058ad36  ADD ESP,0xc
0058ad39  PUSH 0x0
0058ad3b  PUSH 0x6cd060
0058ad40  CALL 0x00630f40
0058ad45  ADD ESP,0x4
0058ad48  PUSH EAX
0058ad49  LEA ECX,[EBP + 0xfffffef8]
0058ad4f  PUSH ECX
0058ad50  CALL 0x0062ff10
0058ad55  ADD ESP,0xc
0058ad58  JMP 0x0058aee8
0058ad5d  MOV EDX,dword ptr [EBP + 0xfffffef4]
0058ad63  MOV ECX,dword ptr [EDX + 0x3b68]
0058ad69  CALL 0x00585eb0
0058ad6e  MOVZX EAX,AL
0058ad71  TEST EAX,EAX
0058ad73  JZ 0x0058ad8b
0058ad75  MOV ECX,dword ptr [EBP + 0xfffffef4]
0058ad7b  MOV ECX,dword ptr [ECX + 0x3b68]
0058ad81  CALL 0x005857a0
0058ad86  JMP 0x0058aee8
0058ad8b  MOV EDX,dword ptr [EBP + 0xfffffef4]
0058ad91  MOV EAX,dword ptr [EDX + 0x3c08]
0058ad97  IMUL EAX,EAX,0xe10
0058ad9d  MOV ECX,dword ptr [EBP + 0xfffffef4]
0058ada3  LEA EDX,[ECX + EAX*0x1 + 0x328]
0058adaa  MOV EAX,dword ptr [EBP + 0xfffffef4]
0058adb0  MOV ECX,dword ptr [EAX + 0x3c08]
0058adb6  MOV EAX,dword ptr [EBP + 0xfffffef4]
0058adbc  MOV ECX,dword ptr [EAX + ECX*0x4 + 0x3bf4]
0058adc3  SUB ECX,0x1
0058adc6  IMUL ECX,ECX,0x24
0058adc9  CMP dword ptr [EDX + ECX*0x1 + 0x1c],0x0
0058adce  JNZ 0x0058ae14
0058add0  MOV EDX,dword ptr [EBP + 0xfffffef4]
0058add6  MOV EAX,dword ptr [EDX + 0x3c08]
0058addc  MOV ECX,dword ptr [EBP + 0xfffffef4]
0058ade2  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3bf4]
0058ade9  SUB EDX,0x1
0058adec  PUSH EDX
0058aded  MOV EAX,dword ptr [EBP + 0xfffffef4]
0058adf3  MOV ECX,dword ptr [EAX + 0x314]
0058adf9  CALL 0x0058dfb0
0058adfe  MOV ECX,dword ptr [EBP + 0xfffffef4]
0058ae04  MOV ECX,dword ptr [ECX + 0x3b68]
0058ae0a  CALL 0x005857a0
0058ae0f  JMP 0x0058aee8
0058ae14  MOV EDX,dword ptr [EBP + 0xfffffef4]
0058ae1a  MOV EAX,dword ptr [EDX + 0x3c08]
0058ae20  MOV ECX,dword ptr [EBP + 0xfffffef4]
0058ae26  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3bf4]
0058ae2d  ADD EDX,0x1
0058ae30  MOV EAX,dword ptr [EBP + 0xfffffef4]
0058ae36  MOV ECX,dword ptr [EAX + 0x3c08]
0058ae3c  MOV EAX,dword ptr [EBP + 0xfffffef4]
0058ae42  MOV dword ptr [EAX + ECX*0x4 + 0x3bf4],EDX
0058ae49  MOV ECX,dword ptr [EBP + 0xfffffef4]
0058ae4f  MOV EDX,dword ptr [ECX + 0x3c08]
0058ae55  MOV EAX,dword ptr [EBP + 0xfffffef4]
0058ae5b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3bf4]
0058ae62  SUB ECX,0x1
0058ae65  MOV EDX,dword ptr [EBP + 0xfffffef4]
0058ae6b  MOV EAX,dword ptr [EDX + 0x3c08]
0058ae71  MOV EDX,dword ptr [EBP + 0xfffffef4]
0058ae77  MOV dword ptr [EDX + EAX*0x4 + 0x3be4],ECX
0058ae7e  MOV EAX,dword ptr [EBP + 0xfffffef4]
0058ae84  MOV ECX,dword ptr [EAX + 0x3c08]
0058ae8a  IMUL ECX,ECX,0xe10
0058ae90  MOV EDX,dword ptr [EBP + 0xfffffef4]
0058ae96  LEA EAX,[EDX + ECX*0x1 + 0x328]
0058ae9d  MOV ECX,dword ptr [EBP + 0xfffffef4]
0058aea3  MOV EDX,dword ptr [ECX + 0x3c08]
0058aea9  MOV ECX,dword ptr [EBP + 0xfffffef4]
0058aeaf  MOV EDX,dword ptr [ECX + EDX*0x4 + 0x3be4]
0058aeb6  IMUL EDX,EDX,0x24
0058aeb9  MOV byte ptr [EAX + EDX*0x1],0xff
0058aebd  MOV EAX,dword ptr [EBP + 0xfffffef4]
0058aec3  MOV ECX,dword ptr [EAX + 0x3c08]
0058aec9  MOV EDX,dword ptr [EBP + 0xfffffef4]
0058aecf  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3be4]
0058aed6  PUSH EAX
0058aed7  MOV ECX,dword ptr [EBP + 0xfffffef4]
0058aedd  MOV ECX,dword ptr [ECX + 0x314]
0058aee3  CALL 0x0058dfb0
0058aee8  MOV ECX,dword ptr [EBP + -0x4]
0058aeeb  XOR ECX,EBP
0058aeed  CALL 0x00686d72
0058aef2  MOV ESP,EBP
0058aef4  POP EBP
0058aef5  RET
