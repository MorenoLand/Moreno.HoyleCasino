; FUN_0042ad90  0042ad90
0042ad90  PUSH EBP
0042ad91  MOV EBP,ESP
0042ad93  PUSH -0x1
0042ad95  PUSH 0x69e4f9
0042ad9a  MOV EAX,FS:[0x0]
0042ada0  PUSH EAX
0042ada1  SUB ESP,0x28
0042ada4  MOV EAX,[0x00781870]
0042ada9  XOR EAX,EBP
0042adab  PUSH EAX
0042adac  LEA EAX,[EBP + -0xc]
0042adaf  MOV FS:[0x0],EAX
0042adb5  MOV dword ptr [EBP + -0x30],ECX
0042adb8  MOV EAX,dword ptr [EBP + -0x30]
0042adbb  CMP dword ptr [EAX + 0x168],0x0
0042adc2  JZ 0x0042addd
0042adc4  MOV ECX,dword ptr [EBP + -0x30]
0042adc7  MOV EDX,dword ptr [ECX + 0x168]
0042adcd  MOV EAX,dword ptr [EBP + -0x30]
0042add0  MOV ECX,dword ptr [EAX + 0x168]
0042add6  MOV EDX,dword ptr [EDX]
0042add8  MOV EAX,dword ptr [EDX + 0x70]
0042addb  CALL EAX
0042addd  PUSH 0x1
0042addf  MOV ECX,dword ptr [0x0162ee80]
0042ade5  MOV EDX,dword ptr [ECX + 0x4]
0042ade8  MOV EAX,[0x0162ee80]
0042aded  MOV ECX,dword ptr [EAX + 0x4]
0042adf0  MOV EDX,dword ptr [EDX]
0042adf2  MOV EAX,dword ptr [EDX + 0x4]
0042adf5  CALL EAX
0042adf7  MOV dword ptr [EBP + -0x20],0x0
0042adfe  JMP 0x0042ae09
0042ae00  MOV ECX,dword ptr [EBP + -0x20]
0042ae03  ADD ECX,0x1
0042ae06  MOV dword ptr [EBP + -0x20],ECX
0042ae09  CMP dword ptr [EBP + -0x20],0x4
0042ae0d  JGE 0x0042affe
0042ae13  MOV dword ptr [EBP + -0x18],0x0
0042ae1a  JMP 0x0042ae25
0042ae1c  MOV EDX,dword ptr [EBP + -0x18]
0042ae1f  ADD EDX,0x1
0042ae22  MOV dword ptr [EBP + -0x18],EDX
0042ae25  CMP dword ptr [EBP + -0x18],0x4c
0042ae29  JGE 0x0042aff9
0042ae2f  MOV EAX,dword ptr [EBP + -0x18]
0042ae32  MOV ECX,dword ptr [0x007906d4]
0042ae38  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4]
0042ae3c  CMP dword ptr [EDX + 0x110],0x1
0042ae43  JZ 0x0042ae5d
0042ae45  MOV EAX,dword ptr [EBP + -0x18]
0042ae48  MOV ECX,dword ptr [0x007906d4]
0042ae4e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4]
0042ae52  CMP dword ptr [EDX + 0x110],0x3
0042ae59  JZ 0x0042ae5d
0042ae5b  JMP 0x0042ae1c
0042ae5d  MOV EAX,dword ptr [EBP + -0x18]
0042ae60  MOV ECX,dword ptr [0x007906d4]
0042ae66  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x4]
0042ae6a  CALL 0x005f5400
0042ae6f  PUSH EAX
0042ae70  MOV ECX,dword ptr [0x007906d4]
0042ae76  CALL 0x00438870
0042ae7b  MOVZX EDX,AL
0042ae7e  TEST EDX,EDX
0042ae80  JZ 0x0042ae99
0042ae82  PUSH 0x0
0042ae84  MOV EAX,dword ptr [EBP + -0x20]
0042ae87  PUSH EAX
0042ae88  MOV ECX,dword ptr [EBP + -0x18]
0042ae8b  MOV EDX,dword ptr [EBP + -0x30]
0042ae8e  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x14]
0042ae92  CALL 0x0042c8a0
0042ae97  JMP 0x0042ae1c
0042ae99  MOV EAX,dword ptr [EBP + -0x20]
0042ae9c  PUSH EAX
0042ae9d  MOV ECX,dword ptr [0x0162ee80]
0042aea3  MOV EDX,dword ptr [ECX]
0042aea5  MOV ECX,dword ptr [0x0162ee80]
0042aeab  MOV EAX,dword ptr [EDX + 0x1c4]
0042aeb1  CALL EAX
0042aeb3  MOV dword ptr [EBP + -0x10],EAX
0042aeb6  MOV ECX,dword ptr [EBP + -0x20]
0042aeb9  PUSH ECX
0042aeba  MOV EDX,dword ptr [0x0162ee80]
0042aec0  MOV EAX,dword ptr [EDX]
0042aec2  MOV ECX,dword ptr [0x0162ee80]
0042aec8  MOV EDX,dword ptr [EAX + 0x1c8]
0042aece  CALL EDX
0042aed0  ADD EAX,0x64
0042aed3  MOV dword ptr [EBP + -0x1c],EAX
0042aed6  PUSH 0x0
0042aed8  MOV EAX,dword ptr [EBP + -0x20]
0042aedb  PUSH EAX
0042aedc  MOV ECX,dword ptr [EBP + -0x18]
0042aedf  MOV EDX,dword ptr [EBP + -0x30]
0042aee2  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x14]
0042aee6  CALL 0x0042c8a0
0042aeeb  MOV dword ptr [EBP + -0x24],0x0
0042aef2  JMP 0x0042aefd
0042aef4  MOV EAX,dword ptr [EBP + -0x24]
0042aef7  ADD EAX,0x1
0042aefa  MOV dword ptr [EBP + -0x24],EAX
0042aefd  PUSH 0x0
0042aeff  MOV ECX,dword ptr [EBP + -0x20]
0042af02  PUSH ECX
0042af03  MOV EDX,dword ptr [EBP + -0x18]
0042af06  MOV EAX,dword ptr [EBP + -0x30]
0042af09  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x14]
0042af0d  CALL 0x005ccdf0
0042af12  CMP dword ptr [EBP + -0x24],EAX
0042af15  JG 0x0042aff4
0042af1b  MOV ECX,dword ptr [EBP + -0x18]
0042af1e  MOV EDX,dword ptr [EBP + -0x30]
0042af21  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x14]
0042af25  MOV ECX,dword ptr [EBP + -0x20]
0042af28  IMUL ECX,ECX,0x1e0
0042af2e  LEA EDX,[EAX + ECX*0x1 + 0x17c]
0042af35  MOV EAX,dword ptr [EBP + -0x24]
0042af38  MOV ECX,dword ptr [EDX + EAX*0x4]
0042af3b  MOV dword ptr [EBP + -0x14],ECX
0042af3e  CMP dword ptr [EBP + -0x14],0x0
0042af42  JNZ 0x0042af49
0042af44  JMP 0x0042aff4
0042af49  PUSH 0x4
0042af4b  MOV ECX,dword ptr [0x0162ee84]
0042af51  CALL 0x00637810
0042af56  MOV EDX,dword ptr [EBP + -0x14]
0042af59  MOV dword ptr [EDX + 0x184],EAX
0042af5f  MOV EAX,dword ptr [EBP + -0x14]
0042af62  CMP dword ptr [EAX + 0x184],0x0
0042af69  JZ 0x0042afda
0042af6b  MOV ECX,dword ptr [0x0162ee84]
0042af71  CALL 0x00637630
0042af76  MOVZX ECX,AL
0042af79  TEST ECX,ECX
0042af7b  JZ 0x0042afda
0042af7d  PUSH 0x2c
0042af7f  CALL 0x00686d82
0042af84  ADD ESP,0x4
0042af87  MOV dword ptr [EBP + -0x2c],EAX
0042af8a  MOV dword ptr [EBP + -0x4],0x0
0042af91  CMP dword ptr [EBP + -0x2c],0x0
0042af95  JZ 0x0042afb8
0042af97  PUSH 0x0
0042af99  MOV EDX,dword ptr [EBP + -0x1c]
0042af9c  PUSH EDX
0042af9d  MOV EAX,dword ptr [EBP + -0x10]
0042afa0  PUSH EAX
0042afa1  MOV ECX,dword ptr [0x0162ee80]
0042afa7  MOV EDX,dword ptr [ECX + 0x4]
0042afaa  PUSH EDX
0042afab  MOV ECX,dword ptr [EBP + -0x2c]
0042afae  CALL 0x00606e60
0042afb3  MOV dword ptr [EBP + -0x34],EAX
0042afb6  JMP 0x0042afbf
0042afb8  MOV dword ptr [EBP + -0x34],0x0
0042afbf  MOV EAX,dword ptr [EBP + -0x34]
0042afc2  MOV dword ptr [EBP + -0x28],EAX
0042afc5  MOV dword ptr [EBP + -0x4],0xffffffff
0042afcc  MOV ECX,dword ptr [EBP + -0x28]
0042afcf  PUSH ECX
0042afd0  MOV ECX,dword ptr [EBP + -0x14]
0042afd3  CALL 0x005f6050
0042afd8  JMP 0x0042afef
0042afda  MOV EDX,dword ptr [EBP + -0x1c]
0042afdd  PUSH EDX
0042afde  MOV EAX,dword ptr [EBP + -0x10]
0042afe1  PUSH EAX
0042afe2  MOV ECX,dword ptr [EBP + -0x14]
0042afe5  MOV EDX,dword ptr [ECX]
0042afe7  MOV ECX,dword ptr [EBP + -0x14]
0042afea  MOV EAX,dword ptr [EDX + 0x44]
0042afed  CALL EAX
0042afef  JMP 0x0042aef4
0042aff4  JMP 0x0042ae1c
0042aff9  JMP 0x0042ae00
0042affe  PUSH 0x0
0042b000  MOV ECX,dword ptr [0x0162ee80]
0042b006  MOV EDX,dword ptr [ECX + 0x4]
0042b009  MOV EAX,[0x0162ee80]
0042b00e  MOV ECX,dword ptr [EAX + 0x4]
0042b011  MOV EDX,dword ptr [EDX]
0042b013  MOV EAX,dword ptr [EDX + 0x1c]
0042b016  CALL EAX
0042b018  MOV ECX,dword ptr [EBP + -0xc]
0042b01b  MOV dword ptr FS:[0x0],ECX
0042b022  POP ECX
0042b023  MOV ESP,EBP
0042b025  POP EBP
0042b026  RET
