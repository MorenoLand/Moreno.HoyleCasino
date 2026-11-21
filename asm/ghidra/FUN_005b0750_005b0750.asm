; FUN_005b0750  005b0750
005b0750  PUSH EBP
005b0751  MOV EBP,ESP
005b0753  PUSH -0x1
005b0755  PUSH 0x6a7d7d
005b075a  MOV EAX,FS:[0x0]
005b0760  PUSH EAX
005b0761  SUB ESP,0x40
005b0764  MOV EAX,[0x00781870]
005b0769  XOR EAX,EBP
005b076b  PUSH EAX
005b076c  LEA EAX,[EBP + -0xc]
005b076f  MOV FS:[0x0],EAX
005b0775  MOV dword ptr [EBP + -0x38],ECX
005b0778  MOV ECX,dword ptr [EBP + -0x38]
005b077b  CALL 0x005d8230
005b0780  PUSH 0x67c
005b0785  CALL 0x00686d82
005b078a  ADD ESP,0x4
005b078d  MOV dword ptr [EBP + -0x14],EAX
005b0790  MOV dword ptr [EBP + -0x4],0x0
005b0797  CMP dword ptr [EBP + -0x14],0x0
005b079b  JZ 0x005b07aa
005b079d  MOV ECX,dword ptr [EBP + -0x14]
005b07a0  CALL 0x005b2ff0
005b07a5  MOV dword ptr [EBP + -0x3c],EAX
005b07a8  JMP 0x005b07b1
005b07aa  MOV dword ptr [EBP + -0x3c],0x0
005b07b1  MOV EAX,dword ptr [EBP + -0x3c]
005b07b4  MOV dword ptr [EBP + -0x10],EAX
005b07b7  MOV dword ptr [EBP + -0x4],0xffffffff
005b07be  MOV ECX,dword ptr [EBP + -0x10]
005b07c1  MOV dword ptr [0x00793604],ECX
005b07c7  MOV ECX,dword ptr [0x00793604]
005b07cd  CALL 0x005b6190
005b07d2  PUSH 0x1c
005b07d4  CALL 0x00686d82
005b07d9  ADD ESP,0x4
005b07dc  MOV dword ptr [EBP + -0x1c],EAX
005b07df  MOV dword ptr [EBP + -0x4],0x1
005b07e6  CMP dword ptr [EBP + -0x1c],0x0
005b07ea  JZ 0x005b07f9
005b07ec  MOV ECX,dword ptr [EBP + -0x1c]
005b07ef  CALL 0x005acf50
005b07f4  MOV dword ptr [EBP + -0x40],EAX
005b07f7  JMP 0x005b0800
005b07f9  MOV dword ptr [EBP + -0x40],0x0
005b0800  MOV EDX,dword ptr [EBP + -0x40]
005b0803  MOV dword ptr [EBP + -0x18],EDX
005b0806  MOV dword ptr [EBP + -0x4],0xffffffff
005b080d  MOV EAX,dword ptr [EBP + -0x18]
005b0810  MOV [0x007935fc],EAX
005b0815  MOV ECX,dword ptr [0x007935fc]
005b081b  CALL 0x005aeb20
005b0820  PUSH 0x68
005b0822  CALL 0x00686d82
005b0827  ADD ESP,0x4
005b082a  MOV dword ptr [EBP + -0x24],EAX
005b082d  MOV dword ptr [EBP + -0x4],0x2
005b0834  CMP dword ptr [EBP + -0x24],0x0
005b0838  JZ 0x005b0847
005b083a  MOV ECX,dword ptr [EBP + -0x24]
005b083d  CALL 0x005a6c80
005b0842  MOV dword ptr [EBP + -0x44],EAX
005b0845  JMP 0x005b084e
005b0847  MOV dword ptr [EBP + -0x44],0x0
005b084e  MOV ECX,dword ptr [EBP + -0x44]
005b0851  MOV dword ptr [EBP + -0x20],ECX
005b0854  MOV dword ptr [EBP + -0x4],0xffffffff
005b085b  MOV EDX,dword ptr [EBP + -0x20]
005b085e  MOV dword ptr [0x007935f8],EDX
005b0864  MOV ECX,dword ptr [0x007935f8]
005b086a  CALL 0x005a7650
005b086f  PUSH 0x4
005b0871  CALL 0x00686d82
005b0876  ADD ESP,0x4
005b0879  MOV dword ptr [EBP + -0x2c],EAX
005b087c  MOV dword ptr [EBP + -0x4],0x3
005b0883  CMP dword ptr [EBP + -0x2c],0x0
005b0887  JZ 0x005b0896
005b0889  MOV ECX,dword ptr [EBP + -0x2c]
005b088c  CALL 0x005a4920
005b0891  MOV dword ptr [EBP + -0x48],EAX
005b0894  JMP 0x005b089d
005b0896  MOV dword ptr [EBP + -0x48],0x0
005b089d  MOV EAX,dword ptr [EBP + -0x48]
005b08a0  MOV dword ptr [EBP + -0x28],EAX
005b08a3  MOV dword ptr [EBP + -0x4],0xffffffff
005b08aa  MOV ECX,dword ptr [EBP + -0x28]
005b08ad  MOV dword ptr [0x007935f4],ECX
005b08b3  PUSH 0x20
005b08b5  CALL 0x00686d82
005b08ba  ADD ESP,0x4
005b08bd  MOV dword ptr [EBP + -0x34],EAX
005b08c0  MOV dword ptr [EBP + -0x4],0x4
005b08c7  CMP dword ptr [EBP + -0x34],0x0
005b08cb  JZ 0x005b08e8
005b08cd  PUSH 0x0
005b08cf  MOV ECX,dword ptr [EBP + -0x34]
005b08d2  CALL 0x005fc0d0
005b08d7  MOV EDX,dword ptr [EBP + -0x34]
005b08da  MOV dword ptr [EDX],0x6d01cc
005b08e0  MOV EAX,dword ptr [EBP + -0x34]
005b08e3  MOV dword ptr [EBP + -0x4c],EAX
005b08e6  JMP 0x005b08ef
005b08e8  MOV dword ptr [EBP + -0x4c],0x0
005b08ef  MOV ECX,dword ptr [EBP + -0x4c]
005b08f2  MOV dword ptr [EBP + -0x30],ECX
005b08f5  MOV dword ptr [EBP + -0x4],0xffffffff
005b08fc  MOV EDX,dword ptr [EBP + -0x30]
005b08ff  PUSH EDX
005b0900  MOV ECX,dword ptr [EBP + -0x38]
005b0903  CALL 0x005f1b70
005b0908  MOV EAX,dword ptr [EBP + -0x38]
005b090b  MOV ECX,dword ptr [EAX + 0x4]
005b090e  MOV EDX,dword ptr [EBP + -0x38]
005b0911  MOV EAX,dword ptr [EDX + 0x4]
005b0914  MOV EDX,dword ptr [ECX]
005b0916  MOV ECX,EAX
005b0918  MOV EAX,dword ptr [EDX + 0x10]
005b091b  CALL EAX
005b091d  MOV ECX,dword ptr [EBP + -0x38]
005b0920  CALL 0x005d85e0
005b0925  PUSH 0x0
005b0927  MOV ECX,dword ptr [0x007935fc]
005b092d  CALL 0x005aef40
005b0932  MOV ECX,dword ptr [EBP + -0xc]
005b0935  MOV dword ptr FS:[0x0],ECX
005b093c  POP ECX
005b093d  MOV ESP,EBP
005b093f  POP EBP
005b0940  RET
