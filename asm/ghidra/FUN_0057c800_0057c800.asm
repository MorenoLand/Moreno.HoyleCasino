; FUN_0057c800  0057c800
0057c800  PUSH EBP
0057c801  MOV EBP,ESP
0057c803  PUSH -0x1
0057c805  PUSH 0x6a67fa
0057c80a  MOV EAX,FS:[0x0]
0057c810  PUSH EAX
0057c811  SUB ESP,0x4c
0057c814  MOV EAX,[0x00781870]
0057c819  XOR EAX,EBP
0057c81b  PUSH EAX
0057c81c  LEA EAX,[EBP + -0xc]
0057c81f  MOV FS:[0x0],EAX
0057c825  MOV dword ptr [EBP + -0x48],ECX
0057c828  MOV byte ptr [EBP + -0x24],0x31
0057c82c  MOV byte ptr [EBP + -0x23],0x37
0057c830  MOV byte ptr [EBP + -0x22],0x70
0057c834  MOV byte ptr [EBP + -0x21],0xff
0057c838  MOV byte ptr [EBP + -0x20],0xff
0057c83c  MOV byte ptr [EBP + -0x1f],0xff
0057c840  MOV byte ptr [EBP + -0x1e],0x31
0057c844  MOV byte ptr [EBP + -0x1d],0x37
0057c848  MOV byte ptr [EBP + -0x1c],0x70
0057c84c  MOV byte ptr [EBP + -0x1b],0xff
0057c850  MOV byte ptr [EBP + -0x1a],0xff
0057c854  MOV byte ptr [EBP + -0x19],0xff
0057c858  MOV byte ptr [EBP + -0x18],0x31
0057c85c  MOV byte ptr [EBP + -0x17],0x37
0057c860  MOV byte ptr [EBP + -0x16],0x70
0057c864  MOV byte ptr [EBP + -0x15],0xe6
0057c868  MOV byte ptr [EBP + -0x14],0xe6
0057c86c  MOV byte ptr [EBP + -0x13],0xff
0057c870  PUSH 0x32
0057c872  PUSH 0x32
0057c874  MOV ECX,dword ptr [EBP + -0x48]
0057c877  CALL 0x005f8510
0057c87c  MOV dword ptr [EBP + -0x10],0x0
0057c883  JMP 0x0057c88e
0057c885  MOV EAX,dword ptr [EBP + -0x10]
0057c888  ADD EAX,0x1
0057c88b  MOV dword ptr [EBP + -0x10],EAX
0057c88e  CMP dword ptr [EBP + -0x10],0x6
0057c892  JGE 0x0057c984
0057c898  MOV ECX,dword ptr [EBP + -0x10]
0057c89b  MOV EDX,dword ptr [EBP + -0x48]
0057c89e  CMP dword ptr [EDX + ECX*0x4 + 0x1b8],0x0
0057c8a6  JNZ 0x0057c8f3
0057c8a8  PUSH 0x5c
0057c8aa  CALL 0x00686d82
0057c8af  ADD ESP,0x4
0057c8b2  MOV dword ptr [EBP + -0x2c],EAX
0057c8b5  MOV dword ptr [EBP + -0x4],0x0
0057c8bc  CMP dword ptr [EBP + -0x2c],0x0
0057c8c0  JZ 0x0057c8cf
0057c8c2  MOV ECX,dword ptr [EBP + -0x2c]
0057c8c5  CALL 0x005f6130
0057c8ca  MOV dword ptr [EBP + -0x4c],EAX
0057c8cd  JMP 0x0057c8d6
0057c8cf  MOV dword ptr [EBP + -0x4c],0x0
0057c8d6  MOV EAX,dword ptr [EBP + -0x4c]
0057c8d9  MOV dword ptr [EBP + -0x28],EAX
0057c8dc  MOV dword ptr [EBP + -0x4],0xffffffff
0057c8e3  MOV ECX,dword ptr [EBP + -0x10]
0057c8e6  MOV EDX,dword ptr [EBP + -0x48]
0057c8e9  MOV EAX,dword ptr [EBP + -0x28]
0057c8ec  MOV dword ptr [EDX + ECX*0x4 + 0x1b8],EAX
0057c8f3  MOV ECX,dword ptr [EBP + -0x10]
0057c8f6  MOV EDX,dword ptr [EBP + -0x48]
0057c8f9  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1b8]
0057c900  MOV ECX,dword ptr [EBP + -0x48]
0057c903  MOV dword ptr [EAX + 0x4],ECX
0057c906  MOV EDX,dword ptr [EBP + -0x10]
0057c909  MOV EAX,dword ptr [EBP + -0x48]
0057c90c  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x1b8]
0057c913  MOV EDX,dword ptr [EBP + -0x10]
0057c916  MOV EAX,dword ptr [EBP + -0x48]
0057c919  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x1b8]
0057c920  MOV EAX,dword ptr [ECX]
0057c922  MOV ECX,EDX
0057c924  MOV EDX,dword ptr [EAX + 0x40]
0057c927  CALL EDX
0057c929  MOV EAX,dword ptr [EBP + -0x10]
0057c92c  IMUL EAX,EAX,0x3
0057c92f  LEA ECX,[EBP + EAX*0x1 + -0x24]
0057c933  PUSH ECX
0057c934  MOV EDX,ESP
0057c936  MOV AX,word ptr [ECX]
0057c939  MOV word ptr [EDX],AX
0057c93c  MOV CL,byte ptr [ECX + 0x2]
0057c93f  MOV byte ptr [EDX + 0x2],CL
0057c942  MOV EDX,dword ptr [EBP + -0x10]
0057c945  MOV EAX,dword ptr [EBP + -0x48]
0057c948  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x1b8]
0057c94f  CALL 0x005f6510
0057c954  MOV ECX,dword ptr [EBP + -0x10]
0057c957  IMUL ECX,ECX,0x3
0057c95a  LEA EDX,[EBP + ECX*0x1 + -0x24]
0057c95e  PUSH ECX
0057c95f  MOV EAX,ESP
0057c961  MOV CX,word ptr [EDX]
0057c964  MOV word ptr [EAX],CX
0057c967  MOV DL,byte ptr [EDX + 0x2]
0057c96a  MOV byte ptr [EAX + 0x2],DL
0057c96d  MOV EAX,dword ptr [EBP + -0x10]
0057c970  MOV ECX,dword ptr [EBP + -0x48]
0057c973  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x1b8]
0057c97a  CALL 0x005f6430
0057c97f  JMP 0x0057c885
0057c984  MOV EDX,dword ptr [EBP + -0x48]
0057c987  CMP dword ptr [EDX + 0x1d0],0x0
0057c98e  JNZ 0x0057c9da
0057c990  PUSH 0x1d0
0057c995  CALL 0x00686d82
0057c99a  ADD ESP,0x4
0057c99d  MOV dword ptr [EBP + -0x34],EAX
0057c9a0  MOV dword ptr [EBP + -0x4],0x1
0057c9a7  CMP dword ptr [EBP + -0x34],0x0
0057c9ab  JZ 0x0057c9ba
0057c9ad  MOV ECX,dword ptr [EBP + -0x34]
0057c9b0  CALL 0x005ec5a0
0057c9b5  MOV dword ptr [EBP + -0x50],EAX
0057c9b8  JMP 0x0057c9c1
0057c9ba  MOV dword ptr [EBP + -0x50],0x0
0057c9c1  MOV EAX,dword ptr [EBP + -0x50]
0057c9c4  MOV dword ptr [EBP + -0x30],EAX
0057c9c7  MOV dword ptr [EBP + -0x4],0xffffffff
0057c9ce  MOV ECX,dword ptr [EBP + -0x48]
0057c9d1  MOV EDX,dword ptr [EBP + -0x30]
0057c9d4  MOV dword ptr [ECX + 0x1d0],EDX
0057c9da  MOV EAX,dword ptr [EBP + -0x48]
0057c9dd  MOV ECX,dword ptr [EAX + 0x1d0]
0057c9e3  MOV EDX,dword ptr [EBP + -0x48]
0057c9e6  MOV dword ptr [ECX + 0x4],EDX
0057c9e9  PUSH 0x6b27f8
0057c9ee  MOV EAX,dword ptr [EBP + -0x48]
0057c9f1  MOV ECX,dword ptr [EAX + 0x1d0]
0057c9f7  MOV EDX,dword ptr [EBP + -0x48]
0057c9fa  MOV EAX,dword ptr [EDX + 0x1d0]
0057ca00  MOV EDX,dword ptr [ECX]
0057ca02  MOV ECX,EAX
0057ca04  MOV EAX,dword ptr [EDX + 0xb4]
0057ca0a  CALL EAX
0057ca0c  MOV ECX,dword ptr [EBP + -0x48]
0057ca0f  MOV EDX,dword ptr [ECX + 0x1d0]
0057ca15  MOV EAX,dword ptr [EBP + -0x48]
0057ca18  MOV ECX,dword ptr [EAX + 0x1d0]
0057ca1e  MOV EDX,dword ptr [EDX]
0057ca20  MOV EAX,dword ptr [EDX + 0x40]
0057ca23  CALL EAX
0057ca25  PUSH 0xc
0057ca27  MOV ECX,dword ptr [EBP + -0x48]
0057ca2a  MOV ECX,dword ptr [ECX + 0x1d0]
0057ca30  CALL 0x005ef3b0
0057ca35  PUSH ECX
0057ca36  MOV EDX,ESP
0057ca38  MOV AX,[0x0075ee1c]
0057ca3e  MOV word ptr [EDX],AX
0057ca41  MOV CL,byte ptr [0x0075ee1e]
0057ca47  MOV byte ptr [EDX + 0x2],CL
0057ca4a  PUSH -0x1
0057ca4c  PUSH 0x23
0057ca4e  MOV EDX,dword ptr [EBP + -0x48]
0057ca51  MOV ECX,dword ptr [EDX + 0x1d0]
0057ca57  CALL 0x005ecd00
0057ca5c  MOV EAX,dword ptr [EBP + -0x48]
0057ca5f  CMP dword ptr [EAX + 0x1d4],0x0
0057ca66  JNZ 0x0057cab2
0057ca68  PUSH 0x178
0057ca6d  CALL 0x00686d82
0057ca72  ADD ESP,0x4
0057ca75  MOV dword ptr [EBP + -0x3c],EAX
0057ca78  MOV dword ptr [EBP + -0x4],0x2
0057ca7f  CMP dword ptr [EBP + -0x3c],0x0
0057ca83  JZ 0x0057ca92
0057ca85  MOV ECX,dword ptr [EBP + -0x3c]
0057ca88  CALL 0x005eaaf0
0057ca8d  MOV dword ptr [EBP + -0x54],EAX
0057ca90  JMP 0x0057ca99
0057ca92  MOV dword ptr [EBP + -0x54],0x0
0057ca99  MOV ECX,dword ptr [EBP + -0x54]
0057ca9c  MOV dword ptr [EBP + -0x38],ECX
0057ca9f  MOV dword ptr [EBP + -0x4],0xffffffff
0057caa6  MOV EDX,dword ptr [EBP + -0x48]
0057caa9  MOV EAX,dword ptr [EBP + -0x38]
0057caac  MOV dword ptr [EDX + 0x1d4],EAX
0057cab2  MOV ECX,dword ptr [EBP + -0x48]
0057cab5  MOV EDX,dword ptr [ECX + 0x1d4]
0057cabb  MOV EAX,dword ptr [EBP + -0x48]
0057cabe  MOV dword ptr [EDX + 0x4],EAX
0057cac1  MOV ECX,dword ptr [EBP + -0x48]
0057cac4  MOV EDX,dword ptr [ECX + 0x1d4]
0057caca  MOV EAX,dword ptr [EBP + -0x48]
0057cacd  MOV ECX,dword ptr [EAX + 0x1d4]
0057cad3  MOV EDX,dword ptr [EDX]
0057cad5  MOV EAX,dword ptr [EDX + 0x40]
0057cad8  CALL EAX
0057cada  MOV ECX,dword ptr [EBP + -0x48]
0057cadd  CMP dword ptr [ECX + 0x1d8],0x0
0057cae4  JNZ 0x0057cb30
0057cae6  PUSH 0x178
0057caeb  CALL 0x00686d82
0057caf0  ADD ESP,0x4
0057caf3  MOV dword ptr [EBP + -0x44],EAX
0057caf6  MOV dword ptr [EBP + -0x4],0x3
0057cafd  CMP dword ptr [EBP + -0x44],0x0
0057cb01  JZ 0x0057cb10
0057cb03  MOV ECX,dword ptr [EBP + -0x44]
0057cb06  CALL 0x005eaaf0
0057cb0b  MOV dword ptr [EBP + -0x58],EAX
0057cb0e  JMP 0x0057cb17
0057cb10  MOV dword ptr [EBP + -0x58],0x0
0057cb17  MOV EDX,dword ptr [EBP + -0x58]
0057cb1a  MOV dword ptr [EBP + -0x40],EDX
0057cb1d  MOV dword ptr [EBP + -0x4],0xffffffff
0057cb24  MOV EAX,dword ptr [EBP + -0x48]
0057cb27  MOV ECX,dword ptr [EBP + -0x40]
0057cb2a  MOV dword ptr [EAX + 0x1d8],ECX
0057cb30  MOV EDX,dword ptr [EBP + -0x48]
0057cb33  MOV EAX,dword ptr [EDX + 0x1d8]
0057cb39  MOV ECX,dword ptr [EBP + -0x48]
0057cb3c  MOV dword ptr [EAX + 0x4],ECX
0057cb3f  MOV EDX,dword ptr [EBP + -0x48]
0057cb42  MOV EAX,dword ptr [EDX + 0x1d8]
0057cb48  MOV ECX,dword ptr [EBP + -0x48]
0057cb4b  MOV ECX,dword ptr [ECX + 0x1d8]
0057cb51  MOV EDX,dword ptr [EAX]
0057cb53  MOV EAX,dword ptr [EDX + 0x40]
0057cb56  CALL EAX
0057cb58  MOV ECX,dword ptr [EBP + -0xc]
0057cb5b  MOV dword ptr FS:[0x0],ECX
0057cb62  POP ECX
0057cb63  MOV ESP,EBP
0057cb65  POP EBP
0057cb66  RET
