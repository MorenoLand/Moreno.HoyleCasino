; FUN_005fac90  005fac90
005fac90  PUSH EBP
005fac91  MOV EBP,ESP
005fac93  PUSH -0x1
005fac95  PUSH 0x6aa4ca
005fac9a  MOV EAX,FS:[0x0]
005faca0  PUSH EAX
005faca1  SUB ESP,0x10
005faca4  MOV EAX,[0x00781870]
005faca9  XOR EAX,EBP
005facab  PUSH EAX
005facac  LEA EAX,[EBP + -0xc]
005facaf  MOV FS:[0x0],EAX
005facb5  MOV dword ptr [EBP + -0x18],ECX
005facb8  CMP dword ptr [EBP + 0x8],0x0
005facbc  JNZ 0x005fad02
005facbe  PUSH 0xcc
005facc3  CALL 0x00686d82
005facc8  ADD ESP,0x4
005faccb  MOV dword ptr [EBP + -0x14],EAX
005facce  MOV dword ptr [EBP + -0x4],0x0
005facd5  CMP dword ptr [EBP + -0x14],0x0
005facd9  JZ 0x005face8
005facdb  MOV ECX,dword ptr [EBP + -0x14]
005facde  CALL 0x006280d0
005face3  MOV dword ptr [EBP + -0x1c],EAX
005face6  JMP 0x005facef
005face8  MOV dword ptr [EBP + -0x1c],0x0
005facef  MOV EAX,dword ptr [EBP + -0x1c]
005facf2  MOV dword ptr [EBP + -0x10],EAX
005facf5  MOV dword ptr [EBP + -0x4],0xffffffff
005facfc  MOV ECX,dword ptr [EBP + -0x10]
005facff  MOV dword ptr [EBP + 0x8],ECX
005fad02  MOV EDX,dword ptr [EBP + 0x8]
005fad05  PUSH EDX
005fad06  MOV ECX,dword ptr [EBP + -0x18]
005fad09  ADD ECX,0x74
005fad0c  CALL 0x0060c840
005fad11  MOV EAX,dword ptr [EBP + 0x8]
005fad14  MOV ECX,dword ptr [EBP + -0x18]
005fad17  MOV dword ptr [EAX + 0x4],ECX
005fad1a  MOV EDX,dword ptr [EBP + 0xc]
005fad1d  PUSH EDX
005fad1e  MOV EAX,dword ptr [EBP + 0x88]
005fad24  PUSH EAX
005fad25  MOV CL,byte ptr [EBP + 0x84]
005fad2b  PUSH ECX
005fad2c  MOV DL,byte ptr [EBP + 0x80]
005fad32  PUSH EDX
005fad33  MOV AL,byte ptr [EBP + 0x7c]
005fad36  PUSH EAX
005fad37  MOV ECX,dword ptr [EBP + 0x78]
005fad3a  PUSH ECX
005fad3b  MOV EDX,dword ptr [EBP + 0x74]
005fad3e  PUSH EDX
005fad3f  MOV EAX,dword ptr [EBP + 0x70]
005fad42  PUSH EAX
005fad43  MOV ECX,dword ptr [EBP + 0x6c]
005fad46  PUSH ECX
005fad47  MOV EDX,dword ptr [EBP + 0x68]
005fad4a  PUSH EDX
005fad4b  MOV EAX,dword ptr [EBP + 0x64]
005fad4e  PUSH EAX
005fad4f  MOV ECX,dword ptr [EBP + 0x60]
005fad52  PUSH ECX
005fad53  MOV EDX,dword ptr [EBP + 0x5c]
005fad56  PUSH EDX
005fad57  MOV EAX,dword ptr [EBP + 0x58]
005fad5a  PUSH EAX
005fad5b  MOV ECX,dword ptr [EBP + 0x54]
005fad5e  PUSH ECX
005fad5f  MOV EDX,dword ptr [EBP + 0x50]
005fad62  PUSH EDX
005fad63  MOV EAX,dword ptr [EBP + 0x4c]
005fad66  PUSH EAX
005fad67  MOV ECX,dword ptr [EBP + 0x48]
005fad6a  PUSH ECX
005fad6b  MOV EDX,dword ptr [EBP + 0x44]
005fad6e  PUSH EDX
005fad6f  MOV EAX,dword ptr [EBP + 0x40]
005fad72  PUSH EAX
005fad73  MOV ECX,dword ptr [EBP + 0x3c]
005fad76  PUSH ECX
005fad77  MOV EDX,dword ptr [EBP + 0x38]
005fad7a  PUSH EDX
005fad7b  MOV EAX,dword ptr [EBP + 0x34]
005fad7e  PUSH EAX
005fad7f  MOV ECX,dword ptr [EBP + 0x30]
005fad82  PUSH ECX
005fad83  MOV EDX,dword ptr [EBP + 0x2c]
005fad86  PUSH EDX
005fad87  MOV EAX,dword ptr [EBP + 0x28]
005fad8a  PUSH EAX
005fad8b  MOV ECX,dword ptr [EBP + 0x24]
005fad8e  PUSH ECX
005fad8f  MOV EDX,dword ptr [EBP + 0x20]
005fad92  PUSH EDX
005fad93  MOV EAX,dword ptr [EBP + 0x1c]
005fad96  PUSH EAX
005fad97  MOV ECX,dword ptr [EBP + 0x18]
005fad9a  PUSH ECX
005fad9b  MOV EDX,dword ptr [EBP + 0x14]
005fad9e  PUSH EDX
005fad9f  MOV EAX,dword ptr [EBP + 0x10]
005fada2  PUSH EAX
005fada3  MOV ECX,dword ptr [EBP + 0x8]
005fada6  CALL 0x00628540
005fadab  MOV ECX,dword ptr [EBP + 0x8]
005fadae  MOV EDX,dword ptr [ECX]
005fadb0  MOV ECX,dword ptr [EBP + 0x8]
005fadb3  MOV EAX,dword ptr [EDX + 0x74]
005fadb6  CALL EAX
005fadb8  MOV EAX,dword ptr [EBP + 0x8]
005fadbb  MOV ECX,dword ptr [EBP + -0xc]
005fadbe  MOV dword ptr FS:[0x0],ECX
005fadc5  POP ECX
005fadc6  MOV ESP,EBP
005fadc8  POP EBP
005fadc9  RET 0x84
