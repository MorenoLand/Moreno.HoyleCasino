; FUN_0044ca20  0044ca20
0044ca20  PUSH EBP
0044ca21  MOV EBP,ESP
0044ca23  SUB ESP,0x18
0044ca26  MOV dword ptr [EBP + -0x18],ECX
0044ca29  PUSH 0x0
0044ca2b  PUSH -0x1
0044ca2d  MOV ECX,dword ptr [EBP + -0x18]
0044ca30  CALL 0x0044ccf0
0044ca35  MOV EAX,dword ptr [EBP + -0x18]
0044ca38  MOV dword ptr [EAX + 0xf4],0xffffffff
0044ca42  MOV ECX,dword ptr [EBP + -0x18]
0044ca45  MOV dword ptr [ECX + 0xf8],0xffffffff
0044ca4f  MOV ECX,dword ptr [EBP + -0x18]
0044ca52  CALL 0x0044cc90
0044ca57  MOV EDX,dword ptr [EBP + -0x18]
0044ca5a  MOV byte ptr [EDX + 0xc8],0x0
0044ca61  MOV EAX,dword ptr [EBP + -0x18]
0044ca64  MOV dword ptr [EAX + 0xd4],0x0
0044ca6e  MOV ECX,dword ptr [EBP + -0x18]
0044ca71  MOV byte ptr [ECX + 0xd8],0x0
0044ca78  MOV EDX,dword ptr [EBP + -0x18]
0044ca7b  MOV byte ptr [EDX + 0xd9],0x0
0044ca82  MOV EAX,dword ptr [EBP + -0x18]
0044ca85  MOV byte ptr [EAX + 0xf0],0x0
0044ca8c  MOV ECX,dword ptr [EBP + -0x18]
0044ca8f  MOV byte ptr [ECX + 0xf1],0x0
0044ca96  MOV dword ptr [EBP + -0x4],0x0
0044ca9d  JMP 0x0044caa8
0044ca9f  MOV EDX,dword ptr [EBP + -0x4]
0044caa2  ADD EDX,0x1
0044caa5  MOV dword ptr [EBP + -0x4],EDX
0044caa8  CMP dword ptr [EBP + -0x4],0xc
0044caac  JGE 0x0044cabf
0044caae  MOV EAX,dword ptr [EBP + -0x4]
0044cab1  MOV ECX,dword ptr [EBP + -0x18]
0044cab4  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x8]
0044cab8  CALL 0x005cb9b0
0044cabd  JMP 0x0044ca9f
0044cabf  MOV dword ptr [EBP + -0x4],0x0
0044cac6  JMP 0x0044cad1
0044cac8  MOV EDX,dword ptr [EBP + -0x4]
0044cacb  ADD EDX,0x1
0044cace  MOV dword ptr [EBP + -0x4],EDX
0044cad1  CMP dword ptr [EBP + -0x4],0x4
0044cad5  JGE 0x0044cb05
0044cad7  MOV dword ptr [EBP + -0x8],0x0
0044cade  JMP 0x0044cae9
0044cae0  MOV EAX,dword ptr [EBP + -0x8]
0044cae3  ADD EAX,0x1
0044cae6  MOV dword ptr [EBP + -0x8],EAX
0044cae9  CMP dword ptr [EBP + -0x8],0x5
0044caed  JGE 0x0044cb03
0044caef  PUSH 0x0
0044caf1  MOV ECX,dword ptr [EBP + -0x8]
0044caf4  PUSH ECX
0044caf5  MOV EDX,dword ptr [EBP + -0x4]
0044caf8  PUSH EDX
0044caf9  MOV ECX,dword ptr [EBP + -0x18]
0044cafc  CALL 0x0044cd40
0044cb01  JMP 0x0044cae0
0044cb03  JMP 0x0044cac8
0044cb05  MOV dword ptr [EBP + -0x4],0x0
0044cb0c  JMP 0x0044cb17
0044cb0e  MOV EAX,dword ptr [EBP + -0x4]
0044cb11  ADD EAX,0x1
0044cb14  MOV dword ptr [EBP + -0x4],EAX
0044cb17  CMP dword ptr [EBP + -0x4],0x2
0044cb1b  JGE 0x0044cb2f
0044cb1d  MOV ECX,dword ptr [EBP + -0x4]
0044cb20  MOV EDX,dword ptr [EBP + -0x18]
0044cb23  MOV word ptr [EDX + ECX*0x2 + 0xc0],0x0
0044cb2d  JMP 0x0044cb0e
0044cb2f  MOV dword ptr [EBP + -0x4],0x0
0044cb36  JMP 0x0044cb41
0044cb38  MOV EAX,dword ptr [EBP + -0x4]
0044cb3b  ADD EAX,0x1
0044cb3e  MOV dword ptr [EBP + -0x4],EAX
0044cb41  CMP dword ptr [EBP + -0x4],0x4
0044cb45  JGE 0x0044cbd3
0044cb4b  MOV ECX,dword ptr [EBP + -0x18]
0044cb4e  ADD ECX,dword ptr [EBP + -0x4]
0044cb51  MOV byte ptr [ECX + 0xc9],0x0
0044cb58  MOV EDX,dword ptr [EBP + -0x4]
0044cb5b  PUSH EDX
0044cb5c  CALL 0x005dcb00
0044cb61  ADD ESP,0x4
0044cb64  MOV dword ptr [EBP + -0xc],EAX
0044cb67  MOV EAX,dword ptr [EBP + -0xc]
0044cb6a  MOV byte ptr [EAX + 0x4a0],0x0
0044cb71  MOV ECX,dword ptr [EBP + -0x4]
0044cb74  PUSH ECX
0044cb75  CALL 0x005dcb00
0044cb7a  ADD ESP,0x4
0044cb7d  MOV dword ptr [EBP + -0x10],EAX
0044cb80  MOV EDX,dword ptr [EBP + -0x10]
0044cb83  MOV byte ptr [EDX + 0x4a1],0x0
0044cb8a  MOV EAX,dword ptr [EBP + -0x4]
0044cb8d  PUSH EAX
0044cb8e  CALL 0x005dcb00
0044cb93  ADD ESP,0x4
0044cb96  MOV dword ptr [EBP + -0x14],EAX
0044cb99  MOV ECX,dword ptr [EBP + -0x14]
0044cb9c  MOV byte ptr [ECX + 0x4a2],0x0
0044cba3  MOV EDX,dword ptr [EBP + -0x18]
0044cba6  ADD EDX,dword ptr [EBP + -0x4]
0044cba9  MOV byte ptr [EDX + 0xcd],0x0
0044cbb0  MOV EAX,dword ptr [EBP + -0x4]
0044cbb3  MOV ECX,dword ptr [EBP + -0x18]
0044cbb6  MOV dword ptr [ECX + EAX*0x4 + 0xdc],0xffffffff
0044cbc1  MOV EDX,dword ptr [EBP + -0x18]
0044cbc4  ADD EDX,dword ptr [EBP + -0x4]
0044cbc7  MOV byte ptr [EDX + 0xec],0x0
0044cbce  JMP 0x0044cb38
0044cbd3  MOV ESP,EBP
0044cbd5  POP EBP
0044cbd6  RET
