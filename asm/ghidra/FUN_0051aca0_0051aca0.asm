; FUN_0051aca0  0051aca0
0051aca0  PUSH EBP
0051aca1  MOV EBP,ESP
0051aca3  PUSH -0x1
0051aca5  PUSH 0x6a3d79
0051acaa  MOV EAX,FS:[0x0]
0051acb0  PUSH EAX
0051acb1  SUB ESP,0x1c
0051acb4  MOV EAX,[0x00781870]
0051acb9  XOR EAX,EBP
0051acbb  PUSH EAX
0051acbc  LEA EAX,[EBP + -0xc]
0051acbf  MOV FS:[0x0],EAX
0051acc5  MOV dword ptr [EBP + -0x20],ECX
0051acc8  MOV EAX,dword ptr [EBP + -0x20]
0051accb  CMP dword ptr [EAX + 0x1bc],0x0
0051acd2  JNZ 0x0051ae2e
0051acd8  PUSH 0x184
0051acdd  CALL 0x00686d82
0051ace2  ADD ESP,0x4
0051ace5  MOV dword ptr [EBP + -0x14],EAX
0051ace8  MOV dword ptr [EBP + -0x4],0x0
0051acef  CMP dword ptr [EBP + -0x14],0x0
0051acf3  JZ 0x0051ad02
0051acf5  MOV ECX,dword ptr [EBP + -0x14]
0051acf8  CALL 0x005f5bf0
0051acfd  MOV dword ptr [EBP + -0x24],EAX
0051ad00  JMP 0x0051ad09
0051ad02  MOV dword ptr [EBP + -0x24],0x0
0051ad09  MOV ECX,dword ptr [EBP + -0x24]
0051ad0c  MOV dword ptr [EBP + -0x10],ECX
0051ad0f  MOV dword ptr [EBP + -0x4],0xffffffff
0051ad16  MOV EDX,dword ptr [EBP + -0x20]
0051ad19  MOV EAX,dword ptr [EBP + -0x10]
0051ad1c  MOV dword ptr [EDX + 0x1bc],EAX
0051ad22  MOV ECX,dword ptr [EBP + -0x20]
0051ad25  MOV EDX,dword ptr [ECX + 0x1bc]
0051ad2b  MOV EAX,dword ptr [EBP + -0x20]
0051ad2e  MOV dword ptr [EDX + 0x4],EAX
0051ad31  MOV ECX,dword ptr [EBP + -0x20]
0051ad34  MOV EDX,dword ptr [ECX + 0x1bc]
0051ad3a  MOV EAX,dword ptr [EBP + -0x20]
0051ad3d  MOV ECX,dword ptr [EAX + 0x1bc]
0051ad43  MOV EDX,dword ptr [EDX]
0051ad45  MOV EAX,dword ptr [EDX + 0x40]
0051ad48  CALL EAX
0051ad4a  MOV ECX,dword ptr [EBP + -0x20]
0051ad4d  MOV EDX,dword ptr [ECX + 0x1dc]
0051ad53  MOV EAX,dword ptr [EDX*0x4 + 0x7218cc]
0051ad5a  PUSH EAX
0051ad5b  MOV ECX,dword ptr [EBP + -0x20]
0051ad5e  MOV ECX,dword ptr [ECX + 0x1bc]
0051ad64  CALL 0x005eaf00
0051ad69  MOV EDX,dword ptr [EBP + -0x20]
0051ad6c  MOV EAX,dword ptr [EDX + 0x1dc]
0051ad72  MOV ECX,dword ptr [EAX*0x8 + 0x7218a8]
0051ad79  NEG ECX
0051ad7b  ADD ECX,0x28
0051ad7e  PUSH ECX
0051ad7f  MOV EDX,dword ptr [EBP + -0x20]
0051ad82  MOV EAX,dword ptr [EDX + 0x1dc]
0051ad88  MOV ECX,dword ptr [EAX*0x8 + 0x7218a4]
0051ad8f  NEG ECX
0051ad91  ADD ECX,0xca
0051ad97  PUSH ECX
0051ad98  MOV EDX,dword ptr [EBP + -0x20]
0051ad9b  MOV EAX,dword ptr [EDX + 0x1bc]
0051ada1  MOV ECX,dword ptr [EBP + -0x20]
0051ada4  MOV ECX,dword ptr [ECX + 0x1bc]
0051adaa  MOV EDX,dword ptr [EAX]
0051adac  MOV EAX,dword ptr [EDX + 0x44]
0051adaf  CALL EAX
0051adb1  MOV ECX,dword ptr [EBP + -0x20]
0051adb4  MOV EDX,dword ptr [ECX + 0x1bc]
0051adba  MOV dword ptr [EDX + 0x178],0x5
0051adc4  PUSH 0x1c
0051adc6  CALL 0x00686d82
0051adcb  ADD ESP,0x4
0051adce  MOV dword ptr [EBP + -0x1c],EAX
0051add1  MOV dword ptr [EBP + -0x4],0x1
0051add8  CMP dword ptr [EBP + -0x1c],0x0
0051addc  JZ 0x0051aded
0051adde  PUSH 0x0
0051ade0  MOV ECX,dword ptr [EBP + -0x1c]
0051ade3  CALL 0x00600a70
0051ade8  MOV dword ptr [EBP + -0x28],EAX
0051adeb  JMP 0x0051adf4
0051aded  MOV dword ptr [EBP + -0x28],0x0
0051adf4  MOV EAX,dword ptr [EBP + -0x28]
0051adf7  MOV dword ptr [EBP + -0x18],EAX
0051adfa  MOV dword ptr [EBP + -0x4],0xffffffff
0051ae01  MOV ECX,dword ptr [EBP + -0x18]
0051ae04  PUSH ECX
0051ae05  MOV EDX,dword ptr [EBP + -0x20]
0051ae08  MOV ECX,dword ptr [EDX + 0x1bc]
0051ae0e  CALL 0x005f5d50
0051ae13  MOV EAX,dword ptr [EBP + -0x20]
0051ae16  MOV ECX,dword ptr [EAX + 0x1bc]
0051ae1c  MOV EDX,dword ptr [EBP + -0x20]
0051ae1f  MOV EAX,dword ptr [EDX + 0x1bc]
0051ae25  MOV EDX,dword ptr [ECX]
0051ae27  MOV ECX,EAX
0051ae29  MOV EAX,dword ptr [EDX + 0x74]
0051ae2c  CALL EAX
0051ae2e  MOV ECX,dword ptr [EBP + -0xc]
0051ae31  MOV dword ptr FS:[0x0],ECX
0051ae38  POP ECX
0051ae39  MOV ESP,EBP
0051ae3b  POP EBP
0051ae3c  RET
