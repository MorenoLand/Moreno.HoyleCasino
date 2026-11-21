; FUN_005fd9b0  005fd9b0
005fd9b0  PUSH EBP
005fd9b1  MOV EBP,ESP
005fd9b3  PUSH -0x1
005fd9b5  PUSH 0x6aa6a6
005fd9ba  MOV EAX,FS:[0x0]
005fd9c0  PUSH EAX
005fd9c1  SUB ESP,0x38
005fd9c4  MOV EAX,[0x00781870]
005fd9c9  XOR EAX,EBP
005fd9cb  PUSH EAX
005fd9cc  LEA EAX,[EBP + -0xc]
005fd9cf  MOV FS:[0x0],EAX
005fd9d5  MOV dword ptr [EBP + -0x3c],ECX
005fd9d8  MOV EAX,dword ptr [EBP + 0x8]
005fd9db  MOVZX ECX,byte ptr [EAX + 0x4]
005fd9df  TEST ECX,ECX
005fd9e1  JZ 0x005fd9e8
005fd9e3  JMP 0x005fdbfa
005fd9e8  PUSH 0x0
005fd9ea  MOV ECX,dword ptr [EBP + -0x3c]
005fd9ed  CALL 0x005fb2b0
005fd9f2  TEST EAX,EAX
005fd9f4  JZ 0x005fda1e
005fd9f6  PUSH 0x0
005fd9f8  MOV ECX,dword ptr [EBP + -0x3c]
005fd9fb  CALL 0x005fb2b0
005fda00  MOV dword ptr [EBP + -0x40],EAX
005fda03  MOV EDX,dword ptr [EBP + 0x8]
005fda06  PUSH EDX
005fda07  MOV EAX,dword ptr [EBP + -0x40]
005fda0a  MOV EDX,dword ptr [EAX]
005fda0c  MOV ECX,dword ptr [EBP + -0x40]
005fda0f  MOV EAX,dword ptr [EDX + 0x84]
005fda15  CALL EAX
005fda17  MOVZX ECX,AL
005fda1a  TEST ECX,ECX
005fda1c  JNZ 0x005fda54
005fda1e  PUSH 0x1
005fda20  MOV ECX,dword ptr [EBP + -0x3c]
005fda23  CALL 0x005fb2b0
005fda28  TEST EAX,EAX
005fda2a  JZ 0x005fda60
005fda2c  PUSH 0x1
005fda2e  MOV ECX,dword ptr [EBP + -0x3c]
005fda31  CALL 0x005fb2b0
005fda36  MOV dword ptr [EBP + -0x44],EAX
005fda39  MOV EDX,dword ptr [EBP + 0x8]
005fda3c  PUSH EDX
005fda3d  MOV EAX,dword ptr [EBP + -0x44]
005fda40  MOV EDX,dword ptr [EAX]
005fda42  MOV ECX,dword ptr [EBP + -0x44]
005fda45  MOV EAX,dword ptr [EDX + 0x84]
005fda4b  CALL EAX
005fda4d  MOVZX ECX,AL
005fda50  TEST ECX,ECX
005fda52  JZ 0x005fda60
005fda54  MOV EDX,dword ptr [EBP + 0x8]
005fda57  MOV byte ptr [EDX + 0x4],0x1
005fda5b  JMP 0x005fdbfa
005fda60  LEA ECX,[EBP + -0x30]
005fda63  CALL 0x006101f0
005fda68  MOV dword ptr [EBP + -0x4],0x0
005fda6f  MOV EAX,dword ptr [EBP + -0x3c]
005fda72  MOV ECX,dword ptr [EAX + 0x1c4]
005fda78  MOV dword ptr [EBP + -0x38],ECX
005fda7b  MOV EDX,dword ptr [EBP + -0x38]
005fda7e  PUSH EDX
005fda7f  MOV ECX,dword ptr [0x015e55e4]
005fda85  CALL 0x005f1df0
005fda8a  MOV dword ptr [EBP + -0x34],EAX
005fda8d  MOV EAX,dword ptr [EBP + 0x8]
005fda90  PUSH EAX
005fda91  LEA ECX,[EBP + -0x30]
005fda94  CALL 0x005ff2a0
005fda99  MOV ECX,dword ptr [EBP + -0x3c]
005fda9c  MOV EDX,dword ptr [EBP + -0x28]
005fda9f  ADD EDX,dword ptr [ECX + 0x108]
005fdaa5  MOV dword ptr [EBP + -0x28],EDX
005fdaa8  MOV EAX,dword ptr [EBP + -0x3c]
005fdaab  MOV ECX,dword ptr [EBP + -0x24]
005fdaae  ADD ECX,dword ptr [EAX + 0x104]
005fdab4  MOV dword ptr [EBP + -0x24],ECX
005fdab7  MOV EDX,dword ptr [EBP + -0x3c]
005fdaba  CMP dword ptr [EDX + 0x1bc],0x0
005fdac1  JZ 0x005fdb24
005fdac3  LEA EAX,[EBP + -0x30]
005fdac6  PUSH EAX
005fdac7  MOV ECX,dword ptr [EBP + -0x3c]
005fdaca  MOV EDX,dword ptr [ECX]
005fdacc  MOV ECX,dword ptr [EBP + -0x3c]
005fdacf  MOV EAX,dword ptr [EDX + 0x10]
005fdad2  CALL EAX
005fdad4  MOVZX ECX,AL
005fdad7  TEST ECX,ECX
005fdad9  JNZ 0x005fdb24
005fdadb  MOV EDX,dword ptr [EBP + -0x3c]
005fdade  MOV EAX,dword ptr [EDX + 0x1bc]
005fdae4  MOV ECX,dword ptr [EBP + -0x28]
005fdae7  SUB ECX,dword ptr [EAX + 0x108]
005fdaed  MOV dword ptr [EBP + -0x28],ECX
005fdaf0  MOV EDX,dword ptr [EBP + -0x3c]
005fdaf3  MOV EAX,dword ptr [EDX + 0x1bc]
005fdaf9  MOV ECX,dword ptr [EBP + -0x24]
005fdafc  SUB ECX,dword ptr [EAX + 0x104]
005fdb02  MOV dword ptr [EBP + -0x24],ECX
005fdb05  LEA EDX,[EBP + -0x30]
005fdb08  PUSH EDX
005fdb09  MOV EAX,dword ptr [EBP + -0x3c]
005fdb0c  MOV ECX,dword ptr [EAX + 0x1bc]
005fdb12  MOV EDX,dword ptr [EBP + -0x3c]
005fdb15  MOV EAX,dword ptr [EDX + 0x1bc]
005fdb1b  MOV EDX,dword ptr [ECX]
005fdb1d  MOV ECX,EAX
005fdb1f  MOV EAX,dword ptr [EDX + 0x4]
005fdb22  CALL EAX
005fdb24  MOV ECX,dword ptr [EBP + 0x8]
005fdb27  MOV DL,byte ptr [EBP + -0x2c]
005fdb2a  MOV byte ptr [ECX + 0x4],DL
005fdb2d  MOV EAX,dword ptr [EBP + 0x8]
005fdb30  PUSH EAX
005fdb31  MOV ECX,dword ptr [EBP + -0x3c]
005fdb34  CALL 0x005f7e80
005fdb39  MOV ECX,dword ptr [EBP + -0x3c]
005fdb3c  CMP dword ptr [ECX + 0x1b4],0x0
005fdb43  JNZ 0x005fdbcf
005fdb49  MOV EDX,dword ptr [EBP + 0x8]
005fdb4c  MOVZX EAX,byte ptr [EDX + 0x4]
005fdb50  TEST EAX,EAX
005fdb52  JZ 0x005fdb5d
005fdb54  MOV ECX,dword ptr [EBP + 0x8]
005fdb57  CMP dword ptr [ECX + 0x18],0x3
005fdb5b  JNZ 0x005fdbb7
005fdb5d  CMP dword ptr [EBP + -0x34],0x0
005fdb61  JZ 0x005fdbb5
005fdb63  LEA EDX,[EBP + -0x30]
005fdb66  PUSH EDX
005fdb67  MOV EAX,[0x015e55e4]
005fdb6c  MOV EDX,dword ptr [EAX]
005fdb6e  MOV ECX,dword ptr [0x015e55e4]
005fdb74  MOV EAX,dword ptr [EDX + 0x40]
005fdb77  CALL EAX
005fdb79  MOV ECX,dword ptr [EBP + 0x8]
005fdb7c  MOV DL,byte ptr [EBP + -0x2c]
005fdb7f  MOV byte ptr [ECX + 0x4],DL
005fdb82  MOV EAX,dword ptr [EBP + 0x8]
005fdb85  MOVZX ECX,byte ptr [EAX + 0x4]
005fdb89  TEST ECX,ECX
005fdb8b  JNZ 0x005fdbb5
005fdb8d  MOV EDX,dword ptr [EBP + 0x8]
005fdb90  CMP dword ptr [EDX + 0x18],0x1
005fdb94  JNZ 0x005fdba3
005fdb96  MOV ECX,dword ptr [0x015e55e4]
005fdb9c  CALL 0x005f2870
005fdba1  JMP 0x005fdbb5
005fdba3  PUSH 0x3
005fdba5  MOV EAX,dword ptr [EBP + -0x34]
005fdba8  MOV EDX,dword ptr [EAX]
005fdbaa  MOV ECX,dword ptr [EBP + -0x34]
005fdbad  MOV EAX,dword ptr [EDX + 0xd8]
005fdbb3  CALL EAX
005fdbb5  JMP 0x005fdbcf
005fdbb7  CMP dword ptr [EBP + -0x34],0x0
005fdbbb  JZ 0x005fdbcf
005fdbbd  PUSH 0x3
005fdbbf  MOV ECX,dword ptr [EBP + -0x34]
005fdbc2  MOV EDX,dword ptr [ECX]
005fdbc4  MOV ECX,dword ptr [EBP + -0x34]
005fdbc7  MOV EAX,dword ptr [EDX + 0xd8]
005fdbcd  CALL EAX
005fdbcf  MOV ECX,dword ptr [EBP + 0x8]
005fdbd2  MOVZX EDX,byte ptr [ECX + 0x4]
005fdbd6  TEST EDX,EDX
005fdbd8  JNZ 0x005fdbeb
005fdbda  MOV EAX,dword ptr [EBP + 0x8]
005fdbdd  CMP dword ptr [EAX + 0x18],0x1
005fdbe1  JNZ 0x005fdbeb
005fdbe3  MOV ECX,dword ptr [EBP + -0x3c]
005fdbe6  CALL 0x005fef90
005fdbeb  MOV dword ptr [EBP + -0x4],0xffffffff
005fdbf2  LEA ECX,[EBP + -0x30]
005fdbf5  CALL 0x00610250
005fdbfa  MOV ECX,dword ptr [EBP + -0xc]
005fdbfd  MOV dword ptr FS:[0x0],ECX
005fdc04  POP ECX
005fdc05  MOV ESP,EBP
005fdc07  POP EBP
005fdc08  RET 0x4
