; FUN_005fa1e0  005fa1e0
005fa1e0  PUSH EBP
005fa1e1  MOV EBP,ESP
005fa1e3  PUSH -0x1
005fa1e5  PUSH 0x6aa369
005fa1ea  MOV EAX,FS:[0x0]
005fa1f0  PUSH EAX
005fa1f1  SUB ESP,0x20
005fa1f4  MOV EAX,[0x00781870]
005fa1f9  XOR EAX,EBP
005fa1fb  PUSH EAX
005fa1fc  LEA EAX,[EBP + -0xc]
005fa1ff  MOV FS:[0x0],EAX
005fa205  MOV dword ptr [EBP + -0x24],ECX
005fa208  CMP dword ptr [EBP + 0xc],0x0
005fa20c  JNZ 0x005fa261
005fa20e  MOV dword ptr [EBP + -0x10],0x0
005fa215  JMP 0x005fa220
005fa217  MOV EAX,dword ptr [EBP + -0x10]
005fa21a  ADD EAX,0x1
005fa21d  MOV dword ptr [EBP + -0x10],EAX
005fa220  MOV ECX,dword ptr [EBP + -0x24]
005fa223  ADD ECX,0x44
005fa226  CALL 0x0060c9a0
005fa22b  CMP dword ptr [EBP + -0x10],EAX
005fa22e  JGE 0x005fa261
005fa230  MOV ECX,dword ptr [EBP + -0x10]
005fa233  PUSH ECX
005fa234  MOV ECX,dword ptr [EBP + -0x24]
005fa237  ADD ECX,0x44
005fa23a  CALL 0x0060ca40
005fa23f  MOV ECX,EAX
005fa241  CALL 0x005f5400
005fa246  CMP EAX,dword ptr [EBP + 0x14]
005fa249  JNZ 0x005fa25f
005fa24b  MOV EDX,dword ptr [EBP + -0x10]
005fa24e  PUSH EDX
005fa24f  MOV ECX,dword ptr [EBP + -0x24]
005fa252  ADD ECX,0x44
005fa255  CALL 0x0060ca40
005fa25a  MOV dword ptr [EBP + 0xc],EAX
005fa25d  JMP 0x005fa261
005fa25f  JMP 0x005fa217
005fa261  MOV EAX,dword ptr [EBP + 0xc]
005fa264  PUSH EAX
005fa265  MOV ECX,dword ptr [EBP + -0x24]
005fa268  ADD ECX,0x44
005fa26b  CALL 0x0060c9e0
005fa270  MOVZX ECX,AL
005fa273  TEST ECX,ECX
005fa275  JNZ 0x005fa304
005fa27b  CMP dword ptr [EBP + 0xc],0x0
005fa27f  JNZ 0x005fa2c2
005fa281  PUSH 0x58
005fa283  CALL 0x00686d82
005fa288  ADD ESP,0x4
005fa28b  MOV dword ptr [EBP + -0x18],EAX
005fa28e  MOV dword ptr [EBP + -0x4],0x0
005fa295  CMP dword ptr [EBP + -0x18],0x0
005fa299  JZ 0x005fa2a8
005fa29b  MOV ECX,dword ptr [EBP + -0x18]
005fa29e  CALL 0x005ff8b0
005fa2a3  MOV dword ptr [EBP + -0x28],EAX
005fa2a6  JMP 0x005fa2af
005fa2a8  MOV dword ptr [EBP + -0x28],0x0
005fa2af  MOV EDX,dword ptr [EBP + -0x28]
005fa2b2  MOV dword ptr [EBP + -0x14],EDX
005fa2b5  MOV dword ptr [EBP + -0x4],0xffffffff
005fa2bc  MOV EAX,dword ptr [EBP + -0x14]
005fa2bf  MOV dword ptr [EBP + 0xc],EAX
005fa2c2  MOV ECX,dword ptr [EBP + 0xc]
005fa2c5  PUSH ECX
005fa2c6  MOV ECX,dword ptr [EBP + -0x24]
005fa2c9  ADD ECX,0x44
005fa2cc  CALL 0x0060c840
005fa2d1  MOV EDX,dword ptr [EBP + 0xc]
005fa2d4  MOV EAX,dword ptr [EBP + -0x24]
005fa2d7  MOV dword ptr [EDX + 0x4],EAX
005fa2da  MOV ECX,dword ptr [EBP + 0x14]
005fa2dd  PUSH ECX
005fa2de  MOV ECX,dword ptr [EBP + 0xc]
005fa2e1  CALL 0x005f53e0
005fa2e6  MOV EDX,dword ptr [EBP + 0xc]
005fa2e9  MOV EAX,dword ptr [EDX]
005fa2eb  MOV ECX,dword ptr [EBP + 0xc]
005fa2ee  MOV EDX,dword ptr [EAX + 0x40]
005fa2f1  CALL EDX
005fa2f3  MOV EAX,dword ptr [EBP + 0x24]
005fa2f6  PUSH EAX
005fa2f7  MOV ECX,dword ptr [EBP + 0xc]
005fa2fa  MOV EDX,dword ptr [ECX]
005fa2fc  MOV ECX,dword ptr [EBP + 0xc]
005fa2ff  MOV EAX,dword ptr [EDX + 0x6c]
005fa302  CALL EAX
005fa304  CMP dword ptr [EBP + 0x8],0x0
005fa308  JNZ 0x005fa34e
005fa30a  PUSH 0x21c
005fa30f  CALL 0x00686d82
005fa314  ADD ESP,0x4
005fa317  MOV dword ptr [EBP + -0x20],EAX
005fa31a  MOV dword ptr [EBP + -0x4],0x1
005fa321  CMP dword ptr [EBP + -0x20],0x0
005fa325  JZ 0x005fa334
005fa327  MOV ECX,dword ptr [EBP + -0x20]
005fa32a  CALL 0x005ff310
005fa32f  MOV dword ptr [EBP + -0x2c],EAX
005fa332  JMP 0x005fa33b
005fa334  MOV dword ptr [EBP + -0x2c],0x0
005fa33b  MOV ECX,dword ptr [EBP + -0x2c]
005fa33e  MOV dword ptr [EBP + -0x1c],ECX
005fa341  MOV dword ptr [EBP + -0x4],0xffffffff
005fa348  MOV EDX,dword ptr [EBP + -0x1c]
005fa34b  MOV dword ptr [EBP + 0x8],EDX
005fa34e  MOV EAX,dword ptr [EBP + 0x8]
005fa351  PUSH EAX
005fa352  MOV ECX,dword ptr [EBP + 0xc]
005fa355  CALL 0x005ff8f0
005fa35a  MOV ECX,dword ptr [EBP + 0x10]
005fa35d  PUSH ECX
005fa35e  MOV EDX,dword ptr [EBP + 0x24]
005fa361  PUSH EDX
005fa362  MOV EAX,dword ptr [EBP + 0x20]
005fa365  PUSH EAX
005fa366  MOV ECX,dword ptr [EBP + 0x1c]
005fa369  PUSH ECX
005fa36a  MOV EDX,dword ptr [EBP + 0x18]
005fa36d  PUSH EDX
005fa36e  MOV ECX,dword ptr [EBP + 0x8]
005fa371  CALL 0x005eae80
005fa376  MOV EAX,dword ptr [EBP + 0x38]
005fa379  PUSH EAX
005fa37a  MOV ECX,dword ptr [EBP + 0x34]
005fa37d  PUSH ECX
005fa37e  MOV EDX,dword ptr [EBP + 0x30]
005fa381  PUSH EDX
005fa382  MOV EAX,dword ptr [EBP + 0x2c]
005fa385  PUSH EAX
005fa386  MOV ECX,dword ptr [EBP + 0x28]
005fa389  PUSH ECX
005fa38a  MOV ECX,dword ptr [EBP + 0x8]
005fa38d  CALL 0x005ff4c0
005fa392  MOV EDX,dword ptr [EBP + 0x8]
005fa395  MOV EAX,dword ptr [EDX]
005fa397  MOV ECX,dword ptr [EBP + 0x8]
005fa39a  MOV EDX,dword ptr [EAX + 0x74]
005fa39d  CALL EDX
005fa39f  MOV EAX,dword ptr [EBP + 0xc]
005fa3a2  MOV ECX,dword ptr [EBP + -0xc]
005fa3a5  MOV dword ptr FS:[0x0],ECX
005fa3ac  POP ECX
005fa3ad  MOV ESP,EBP
005fa3af  POP EBP
005fa3b0  RET 0x34
