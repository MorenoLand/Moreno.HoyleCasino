; FUN_005fcad0  005fcad0
005fcad0  PUSH EBP
005fcad1  MOV EBP,ESP
005fcad3  PUSH -0x1
005fcad5  PUSH 0x6aa614
005fcada  MOV EAX,FS:[0x0]
005fcae0  PUSH EAX
005fcae1  SUB ESP,0x10
005fcae4  MOV EAX,[0x00781870]
005fcae9  XOR EAX,EBP
005fcaeb  PUSH EAX
005fcaec  LEA EAX,[EBP + -0xc]
005fcaef  MOV FS:[0x0],EAX
005fcaf5  MOV dword ptr [EBP + -0x18],ECX
005fcaf8  MOV EAX,dword ptr [EBP + 0x8]
005fcafb  PUSH EAX
005fcafc  MOV ECX,dword ptr [EBP + -0x18]
005fcaff  CALL 0x00602020
005fcb04  MOV ECX,dword ptr [EBP + -0x18]
005fcb07  CALL 0x005f5400
005fcb0c  CMP EAX,-0x2
005fcb0f  JNZ 0x005fcb16
005fcb11  JMP 0x005fcc3e
005fcb16  MOV ECX,dword ptr [EBP + 0x8]
005fcb19  PUSH ECX
005fcb1a  MOV EDX,dword ptr [EBP + -0x18]
005fcb1d  MOV EAX,dword ptr [EDX]
005fcb1f  MOV ECX,dword ptr [EBP + -0x18]
005fcb22  MOV EDX,dword ptr [EAX + 0x84]
005fcb28  CALL EDX
005fcb2a  MOVZX EAX,AL
005fcb2d  TEST EAX,EAX
005fcb2f  JZ 0x005fcbf3
005fcb35  MOV ECX,dword ptr [EBP + -0x18]
005fcb38  MOV ECX,dword ptr [ECX + 0x1f0]
005fcb3e  CALL 0x005ff0a0
005fcb43  MOV EDX,dword ptr [EBP + -0x18]
005fcb46  CMP dword ptr [EDX + 0x1ec],-0x1
005fcb4d  JZ 0x005fcbd7
005fcb53  MOV ECX,dword ptr [EBP + -0x18]
005fcb56  CALL 0x006026d0
005fcb5b  MOVZX EAX,AL
005fcb5e  TEST EAX,EAX
005fcb60  JZ 0x005fcbd7
005fcb62  MOV ECX,dword ptr [EBP + -0x18]
005fcb65  MOV EDX,dword ptr [ECX + 0x1ec]
005fcb6b  PUSH EDX
005fcb6c  MOV ECX,dword ptr [0x015e55e4]
005fcb72  CALL 0x005f2920
005fcb77  MOVZX EAX,AL
005fcb7a  TEST EAX,EAX
005fcb7c  JNZ 0x005fcbd7
005fcb7e  MOV ECX,dword ptr [EBP + -0x18]
005fcb81  CMP dword ptr [ECX + 0x17c],0x0
005fcb88  JNZ 0x005fcbd7
005fcb8a  PUSH 0x24
005fcb8c  CALL 0x00686d82
005fcb91  ADD ESP,0x4
005fcb94  MOV dword ptr [EBP + -0x14],EAX
005fcb97  MOV dword ptr [EBP + -0x4],0x0
005fcb9e  CMP dword ptr [EBP + -0x14],0x0
005fcba2  JZ 0x005fcbb7
005fcba4  PUSH 0x0
005fcba6  MOV EDX,dword ptr [EBP + -0x18]
005fcba9  PUSH EDX
005fcbaa  MOV ECX,dword ptr [EBP + -0x14]
005fcbad  CALL 0x005ff190
005fcbb2  MOV dword ptr [EBP + -0x1c],EAX
005fcbb5  JMP 0x005fcbbe
005fcbb7  MOV dword ptr [EBP + -0x1c],0x0
005fcbbe  MOV EAX,dword ptr [EBP + -0x1c]
005fcbc1  MOV dword ptr [EBP + -0x10],EAX
005fcbc4  MOV dword ptr [EBP + -0x4],0xffffffff
005fcbcb  MOV ECX,dword ptr [EBP + -0x10]
005fcbce  PUSH ECX
005fcbcf  MOV ECX,dword ptr [EBP + -0x18]
005fcbd2  CALL 0x005f5df0
005fcbd7  MOV EDX,dword ptr [EBP + -0x18]
005fcbda  CMP dword ptr [EDX + 0x1ec],-0x1
005fcbe1  JNZ 0x005fcbf1
005fcbe3  MOV EAX,dword ptr [EBP + -0x18]
005fcbe6  MOV ECX,dword ptr [EAX + 0x1f0]
005fcbec  CALL 0x005feff0
005fcbf1  JMP 0x005fcc3e
005fcbf3  MOV ECX,dword ptr [EBP + -0x18]
005fcbf6  MOV EDX,dword ptr [ECX + 0x1ec]
005fcbfc  PUSH EDX
005fcbfd  MOV ECX,dword ptr [0x015e55e4]
005fcc03  CALL 0x005f2920
005fcc08  MOVZX EAX,AL
005fcc0b  TEST EAX,EAX
005fcc0d  JZ 0x005fcc34
005fcc0f  MOV ECX,dword ptr [EBP + 0x8]
005fcc12  PUSH ECX
005fcc13  MOV ECX,dword ptr [EBP + -0x18]
005fcc16  CALL 0x005fcc50
005fcc1b  MOVZX EDX,AL
005fcc1e  TEST EDX,EDX
005fcc20  JZ 0x005fcc34
005fcc22  PUSH 0x3
005fcc24  MOV EAX,dword ptr [EBP + -0x18]
005fcc27  MOV EDX,dword ptr [EAX]
005fcc29  MOV ECX,dword ptr [EBP + -0x18]
005fcc2c  MOV EAX,dword ptr [EDX + 0xd8]
005fcc32  CALL EAX
005fcc34  PUSH 0x0
005fcc36  MOV ECX,dword ptr [EBP + -0x18]
005fcc39  CALL 0x005f5df0
005fcc3e  MOV ECX,dword ptr [EBP + -0xc]
005fcc41  MOV dword ptr FS:[0x0],ECX
005fcc48  POP ECX
005fcc49  MOV ESP,EBP
005fcc4b  POP EBP
005fcc4c  RET 0x4
