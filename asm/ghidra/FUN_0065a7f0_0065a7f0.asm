; FUN_0065a7f0  0065a7f0
0065a7f0  PUSH EBP
0065a7f1  MOV EBP,ESP
0065a7f3  PUSH -0x1
0065a7f5  PUSH 0x6ac6fc
0065a7fa  MOV EAX,FS:[0x0]
0065a800  PUSH EAX
0065a801  SUB ESP,0x44
0065a804  MOV EAX,[0x00781870]
0065a809  XOR EAX,EBP
0065a80b  PUSH EAX
0065a80c  LEA EAX,[EBP + -0xc]
0065a80f  MOV FS:[0x0],EAX
0065a815  MOV dword ptr [EBP + -0x3c],ECX
0065a818  MOV EAX,dword ptr [EBP + -0x3c]
0065a81b  MOV dword ptr [EAX],0x6de564
0065a821  MOV dword ptr [EBP + -0x4],0x0
0065a828  MOV dword ptr [EBP + -0x10],0x0
0065a82f  JMP 0x0065a83a
0065a831  MOV ECX,dword ptr [EBP + -0x10]
0065a834  ADD ECX,0x1
0065a837  MOV dword ptr [EBP + -0x10],ECX
0065a83a  CMP dword ptr [EBP + -0x10],0x3
0065a83e  JGE 0x0065a8ae
0065a840  MOV EDX,dword ptr [EBP + -0x10]
0065a843  MOV EAX,dword ptr [EBP + -0x3c]
0065a846  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x218]
0065a84d  MOV dword ptr [EBP + -0x18],ECX
0065a850  MOV EDX,dword ptr [EBP + -0x18]
0065a853  MOV dword ptr [EBP + -0x14],EDX
0065a856  CMP dword ptr [EBP + -0x14],0x0
0065a85a  JZ 0x0065a86f
0065a85c  PUSH 0x1
0065a85e  MOV EAX,dword ptr [EBP + -0x14]
0065a861  MOV EDX,dword ptr [EAX]
0065a863  MOV ECX,dword ptr [EBP + -0x14]
0065a866  MOV EAX,dword ptr [EDX]
0065a868  CALL EAX
0065a86a  MOV dword ptr [EBP + -0x40],EAX
0065a86d  JMP 0x0065a876
0065a86f  MOV dword ptr [EBP + -0x40],0x0
0065a876  MOV ECX,dword ptr [EBP + -0x10]
0065a879  MOV EDX,dword ptr [EBP + -0x3c]
0065a87c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x224]
0065a883  MOV dword ptr [EBP + -0x20],EAX
0065a886  MOV ECX,dword ptr [EBP + -0x20]
0065a889  MOV dword ptr [EBP + -0x1c],ECX
0065a88c  CMP dword ptr [EBP + -0x1c],0x0
0065a890  JZ 0x0065a8a5
0065a892  PUSH 0x1
0065a894  MOV EDX,dword ptr [EBP + -0x1c]
0065a897  MOV EAX,dword ptr [EDX]
0065a899  MOV ECX,dword ptr [EBP + -0x1c]
0065a89c  MOV EDX,dword ptr [EAX]
0065a89e  CALL EDX
0065a8a0  MOV dword ptr [EBP + -0x44],EAX
0065a8a3  JMP 0x0065a8ac
0065a8a5  MOV dword ptr [EBP + -0x44],0x0
0065a8ac  JMP 0x0065a831
0065a8ae  MOV EAX,dword ptr [EBP + -0x3c]
0065a8b1  MOV ECX,dword ptr [EAX + 0x230]
0065a8b7  MOV dword ptr [EBP + -0x28],ECX
0065a8ba  MOV EDX,dword ptr [EBP + -0x28]
0065a8bd  MOV dword ptr [EBP + -0x24],EDX
0065a8c0  CMP dword ptr [EBP + -0x24],0x0
0065a8c4  JZ 0x0065a8d9
0065a8c6  PUSH 0x1
0065a8c8  MOV EAX,dword ptr [EBP + -0x24]
0065a8cb  MOV EDX,dword ptr [EAX]
0065a8cd  MOV ECX,dword ptr [EBP + -0x24]
0065a8d0  MOV EAX,dword ptr [EDX]
0065a8d2  CALL EAX
0065a8d4  MOV dword ptr [EBP + -0x48],EAX
0065a8d7  JMP 0x0065a8e0
0065a8d9  MOV dword ptr [EBP + -0x48],0x0
0065a8e0  MOV ECX,dword ptr [EBP + -0x3c]
0065a8e3  MOV EDX,dword ptr [ECX + 0x234]
0065a8e9  MOV dword ptr [EBP + -0x30],EDX
0065a8ec  MOV EAX,dword ptr [EBP + -0x30]
0065a8ef  MOV dword ptr [EBP + -0x2c],EAX
0065a8f2  CMP dword ptr [EBP + -0x2c],0x0
0065a8f6  JZ 0x0065a90b
0065a8f8  PUSH 0x1
0065a8fa  MOV ECX,dword ptr [EBP + -0x2c]
0065a8fd  MOV EDX,dword ptr [ECX]
0065a8ff  MOV ECX,dword ptr [EBP + -0x2c]
0065a902  MOV EAX,dword ptr [EDX]
0065a904  CALL EAX
0065a906  MOV dword ptr [EBP + -0x4c],EAX
0065a909  JMP 0x0065a912
0065a90b  MOV dword ptr [EBP + -0x4c],0x0
0065a912  MOV ECX,dword ptr [EBP + -0x3c]
0065a915  MOV EDX,dword ptr [ECX + 0x238]
0065a91b  MOV dword ptr [EBP + -0x38],EDX
0065a91e  MOV EAX,dword ptr [EBP + -0x38]
0065a921  MOV dword ptr [EBP + -0x34],EAX
0065a924  CMP dword ptr [EBP + -0x34],0x0
0065a928  JZ 0x0065a93d
0065a92a  PUSH 0x1
0065a92c  MOV ECX,dword ptr [EBP + -0x34]
0065a92f  MOV EDX,dword ptr [ECX]
0065a931  MOV ECX,dword ptr [EBP + -0x34]
0065a934  MOV EAX,dword ptr [EDX]
0065a936  CALL EAX
0065a938  MOV dword ptr [EBP + -0x50],EAX
0065a93b  JMP 0x0065a944
0065a93d  MOV dword ptr [EBP + -0x50],0x0
0065a944  MOV dword ptr [EBP + -0x4],0xffffffff
0065a94b  MOV ECX,dword ptr [EBP + -0x3c]
0065a94e  CALL 0x006060e0
0065a953  MOV ECX,dword ptr [EBP + -0xc]
0065a956  MOV dword ptr FS:[0x0],ECX
0065a95d  POP ECX
0065a95e  MOV ESP,EBP
0065a960  POP EBP
0065a961  RET
