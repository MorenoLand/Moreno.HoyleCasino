; FUN_0059ddf0  0059ddf0
0059ddf0  PUSH EBP
0059ddf1  MOV EBP,ESP
0059ddf3  PUSH -0x1
0059ddf5  PUSH 0x6a7684
0059ddfa  MOV EAX,FS:[0x0]
0059de00  PUSH EAX
0059de01  SUB ESP,0x34
0059de04  MOV EAX,[0x00781870]
0059de09  XOR EAX,EBP
0059de0b  PUSH EAX
0059de0c  LEA EAX,[EBP + -0xc]
0059de0f  MOV FS:[0x0],EAX
0059de15  MOV dword ptr [EBP + -0x40],ECX
0059de18  MOV EAX,dword ptr [EBP + 0xc]
0059de1b  PUSH EAX
0059de1c  MOV ECX,dword ptr [EBP + -0x40]
0059de1f  CALL 0x005fc0d0
0059de24  MOV dword ptr [EBP + -0x4],0x0
0059de2b  MOV ECX,dword ptr [EBP + -0x40]
0059de2e  MOV dword ptr [ECX],0x6cf034
0059de34  MOV EDX,dword ptr [EBP + -0x40]
0059de37  MOV EAX,dword ptr [EBP + 0x8]
0059de3a  MOV dword ptr [EDX + 0x20],EAX
0059de3d  MOV dword ptr [EBP + -0x3c],0x310eb0
0059de44  MOV dword ptr [EBP + -0x38],0x310eae
0059de4b  MOV dword ptr [EBP + -0x34],0x310eb2
0059de52  MOV dword ptr [EBP + -0x30],0x310eac
0059de59  MOV dword ptr [EBP + -0x2c],0x310eb4
0059de60  MOV dword ptr [EBP + -0x28],0x310eb4
0059de67  MOV dword ptr [EBP + -0x24],0x310eaf
0059de6e  MOV dword ptr [EBP + -0x20],0x310ead
0059de75  MOV dword ptr [EBP + -0x1c],0x310eb1
0059de7c  MOV dword ptr [EBP + -0x18],0x310eab
0059de83  MOV dword ptr [EBP + -0x14],0x310eb3
0059de8a  MOV dword ptr [EBP + -0x10],0x310eb3
0059de91  MOV ECX,dword ptr [EBP + 0x8]
0059de94  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x3c]
0059de98  PUSH EDX
0059de99  MOV EAX,[0x007935c4]
0059de9e  MOV ECX,dword ptr [EAX + 0xa0]
0059dea4  CALL 0x005eaf00
0059dea9  MOV ECX,dword ptr [EBP + 0x8]
0059deac  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x24]
0059deb0  PUSH EDX
0059deb1  MOV EAX,[0x007935c4]
0059deb6  MOV ECX,dword ptr [EAX + 0x9c]
0059debc  CALL 0x005eaf00
0059dec1  PUSH 0x0
0059dec3  MOV ECX,dword ptr [0x007935c4]
0059dec9  MOV EDX,dword ptr [ECX + 0xa0]
0059decf  MOV EAX,[0x007935c4]
0059ded4  MOV ECX,dword ptr [EAX + 0xa0]
0059deda  MOV EDX,dword ptr [EDX]
0059dedc  MOV EAX,dword ptr [EDX + 0xb0]
0059dee2  CALL EAX
0059dee4  PUSH 0x0
0059dee6  MOV ECX,dword ptr [0x007935c4]
0059deec  MOV EDX,dword ptr [ECX + 0x9c]
0059def2  MOV EAX,[0x007935c4]
0059def7  MOV ECX,dword ptr [EAX + 0x9c]
0059defd  MOV EDX,dword ptr [EDX]
0059deff  MOV EAX,dword ptr [EDX + 0xb0]
0059df05  CALL EAX
0059df07  MOV dword ptr [EBP + -0x4],0xffffffff
0059df0e  MOV EAX,dword ptr [EBP + -0x40]
0059df11  MOV ECX,dword ptr [EBP + -0xc]
0059df14  MOV dword ptr FS:[0x0],ECX
0059df1b  POP ECX
0059df1c  MOV ESP,EBP
0059df1e  POP EBP
0059df1f  RET 0x8
