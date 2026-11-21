; FUN_0047ae60  0047ae60
0047ae60  PUSH EBP
0047ae61  MOV EBP,ESP
0047ae63  PUSH -0x1
0047ae65  PUSH 0x69ff08
0047ae6a  MOV EAX,FS:[0x0]
0047ae70  PUSH EAX
0047ae71  SUB ESP,0x2c
0047ae74  MOV EAX,[0x00781870]
0047ae79  XOR EAX,EBP
0047ae7b  PUSH EAX
0047ae7c  LEA EAX,[EBP + -0xc]
0047ae7f  MOV FS:[0x0],EAX
0047ae85  MOV dword ptr [EBP + -0x28],ECX
0047ae88  MOV EAX,dword ptr [EBP + -0x28]
0047ae8b  MOV byte ptr [EAX + 0x7d2],0x0
0047ae92  MOV ECX,dword ptr [EBP + -0x28]
0047ae95  MOV ECX,dword ptr [ECX + 0x28]
0047ae98  CALL 0x005f87d0
0047ae9d  MOV ECX,dword ptr [EBP + -0x28]
0047aea0  CALL 0x0047e1d0
0047aea5  MOV dword ptr [EBP + -0x2c],EAX
0047aea8  CMP dword ptr [EBP + -0x2c],0x0
0047aeac  JZ 0x0047af7f
0047aeb2  CMP dword ptr [EBP + -0x2c],0x1
0047aeb6  JZ 0x0047aec3
0047aeb8  CMP dword ptr [EBP + -0x2c],0x2
0047aebc  JZ 0x0047af22
0047aebe  JMP 0x0047afdc
0047aec3  PUSH 0x28
0047aec5  CALL 0x00686d82
0047aeca  ADD ESP,0x4
0047aecd  MOV dword ptr [EBP + -0x14],EAX
0047aed0  MOV dword ptr [EBP + -0x4],0x0
0047aed7  CMP dword ptr [EBP + -0x14],0x0
0047aedb  JZ 0x0047aef8
0047aedd  PUSH 0x0
0047aedf  MOV ECX,dword ptr [EBP + -0x14]
0047aee2  CALL 0x005fc0d0
0047aee7  MOV EDX,dword ptr [EBP + -0x14]
0047aeea  MOV dword ptr [EDX],0x6bc75c
0047aef0  MOV EAX,dword ptr [EBP + -0x14]
0047aef3  MOV dword ptr [EBP + -0x30],EAX
0047aef6  JMP 0x0047aeff
0047aef8  MOV dword ptr [EBP + -0x30],0x0
0047aeff  MOV ECX,dword ptr [EBP + -0x30]
0047af02  MOV dword ptr [EBP + -0x10],ECX
0047af05  MOV dword ptr [EBP + -0x4],0xffffffff
0047af0c  MOV EDX,dword ptr [EBP + -0x10]
0047af0f  PUSH EDX
0047af10  MOV EAX,[0x00791eb8]
0047af15  MOV ECX,dword ptr [EAX + 0x4]
0047af18  CALL 0x005fc420
0047af1d  JMP 0x0047aff7
0047af22  PUSH 0x28
0047af24  CALL 0x00686d82
0047af29  ADD ESP,0x4
0047af2c  MOV dword ptr [EBP + -0x1c],EAX
0047af2f  MOV dword ptr [EBP + -0x4],0x1
0047af36  CMP dword ptr [EBP + -0x1c],0x0
0047af3a  JZ 0x0047af57
0047af3c  PUSH 0x0
0047af3e  MOV ECX,dword ptr [EBP + -0x1c]
0047af41  CALL 0x005fc0d0
0047af46  MOV ECX,dword ptr [EBP + -0x1c]
0047af49  MOV dword ptr [ECX],0x6bc738
0047af4f  MOV EDX,dword ptr [EBP + -0x1c]
0047af52  MOV dword ptr [EBP + -0x34],EDX
0047af55  JMP 0x0047af5e
0047af57  MOV dword ptr [EBP + -0x34],0x0
0047af5e  MOV EAX,dword ptr [EBP + -0x34]
0047af61  MOV dword ptr [EBP + -0x18],EAX
0047af64  MOV dword ptr [EBP + -0x4],0xffffffff
0047af6b  MOV ECX,dword ptr [EBP + -0x18]
0047af6e  PUSH ECX
0047af6f  MOV EDX,dword ptr [0x00791eb8]
0047af75  MOV ECX,dword ptr [EDX + 0x4]
0047af78  CALL 0x005fc420
0047af7d  JMP 0x0047aff7
0047af7f  PUSH 0x28
0047af81  CALL 0x00686d82
0047af86  ADD ESP,0x4
0047af89  MOV dword ptr [EBP + -0x24],EAX
0047af8c  MOV dword ptr [EBP + -0x4],0x2
0047af93  CMP dword ptr [EBP + -0x24],0x0
0047af97  JZ 0x0047afb4
0047af99  PUSH 0x0
0047af9b  MOV ECX,dword ptr [EBP + -0x24]
0047af9e  CALL 0x005fc0d0
0047afa3  MOV EAX,dword ptr [EBP + -0x24]
0047afa6  MOV dword ptr [EAX],0x6bc714
0047afac  MOV ECX,dword ptr [EBP + -0x24]
0047afaf  MOV dword ptr [EBP + -0x38],ECX
0047afb2  JMP 0x0047afbb
0047afb4  MOV dword ptr [EBP + -0x38],0x0
0047afbb  MOV EDX,dword ptr [EBP + -0x38]
0047afbe  MOV dword ptr [EBP + -0x20],EDX
0047afc1  MOV dword ptr [EBP + -0x4],0xffffffff
0047afc8  MOV EAX,dword ptr [EBP + -0x20]
0047afcb  PUSH EAX
0047afcc  MOV ECX,dword ptr [0x00791eb8]
0047afd2  MOV ECX,dword ptr [ECX + 0x4]
0047afd5  CALL 0x005fc420
0047afda  JMP 0x0047aff7
0047afdc  XOR EDX,EDX
0047afde  JNZ 0x0047aff7
0047afe0  PUSH 0x269
0047afe5  PUSH 0x6bc694
0047afea  PUSH 0x6b2b64
0047afef  CALL 0x005e9f20
0047aff4  ADD ESP,0xc
0047aff7  MOV ECX,dword ptr [EBP + -0xc]
0047affa  MOV dword ptr FS:[0x0],ECX
0047b001  POP ECX
0047b002  MOV ESP,EBP
0047b004  POP EBP
0047b005  RET
