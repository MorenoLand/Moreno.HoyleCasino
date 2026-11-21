; FUN_0064cab0  0064cab0
0064cab0  PUSH EBP
0064cab1  MOV EBP,ESP
0064cab3  SUB ESP,0x4c
0064cab6  MOV EAX,[0x00781870]
0064cabb  XOR EAX,EBP
0064cabd  MOV dword ptr [EBP + -0x4],EAX
0064cac0  CMP dword ptr [EBP + 0x8],0x0
0064cac4  JNZ 0x0064cae3
0064cac6  PUSH 0x0
0064cac8  PUSH 0x0
0064caca  CALL 0x0064c8a0
0064cacf  ADD ESP,0x8
0064cad2  MOV dword ptr [EBP + -0x44],EAX
0064cad5  MOV dword ptr [EBP + -0x40],EDX
0064cad8  MOV EAX,dword ptr [EBP + -0x44]
0064cadb  MOV EDX,dword ptr [EBP + -0x40]
0064cade  JMP 0x0064cbca
0064cae3  MOV byte ptr [EBP + -0x35],0x0
0064cae7  MOV EAX,dword ptr [EBP + 0x8]
0064caea  PUSH EAX
0064caeb  CALL 0x00686ecc
0064caf0  ADD ESP,0x4
0064caf3  MOV dword ptr [EBP + -0x28],EAX
0064caf6  MOV dword ptr [EBP + -0x2c],0x0
0064cafd  MOV dword ptr [EBP + -0x24],0x0
0064cb04  MOV dword ptr [EBP + -0x3c],0x0
0064cb0b  JMP 0x0064cb16
0064cb0d  MOV ECX,dword ptr [EBP + -0x3c]
0064cb10  ADD ECX,0x1
0064cb13  MOV dword ptr [EBP + -0x3c],ECX
0064cb16  MOV EDX,dword ptr [EBP + -0x3c]
0064cb19  CMP EDX,dword ptr [EBP + -0x28]
0064cb1c  JGE 0x0064cb8a
0064cb1e  MOV EAX,dword ptr [EBP + 0x8]
0064cb21  ADD EAX,dword ptr [EBP + -0x3c]
0064cb24  MOVSX ECX,byte ptr [EAX]
0064cb27  CMP ECX,0x2e
0064cb2a  JNZ 0x0064cb32
0064cb2c  MOV byte ptr [EBP + -0x35],0x1
0064cb30  JMP 0x0064cb88
0064cb32  MOV EDX,dword ptr [EBP + 0x8]
0064cb35  ADD EDX,dword ptr [EBP + -0x3c]
0064cb38  MOVSX EAX,byte ptr [EDX]
0064cb3b  CMP EAX,0x30
0064cb3e  JL 0x0064cb88
0064cb40  MOV ECX,dword ptr [EBP + 0x8]
0064cb43  ADD ECX,dword ptr [EBP + -0x3c]
0064cb46  MOVSX EDX,byte ptr [ECX]
0064cb49  CMP EDX,0x39
0064cb4c  JG 0x0064cb88
0064cb4e  MOVZX EAX,byte ptr [EBP + -0x35]
0064cb52  TEST EAX,EAX
0064cb54  JZ 0x0064cb70
0064cb56  MOV ECX,dword ptr [EBP + 0x8]
0064cb59  ADD ECX,dword ptr [EBP + -0x3c]
0064cb5c  MOV EDX,dword ptr [EBP + -0x24]
0064cb5f  MOV AL,byte ptr [ECX]
0064cb61  MOV byte ptr [EBP + EDX*0x1 + -0x34],AL
0064cb65  MOV ECX,dword ptr [EBP + -0x24]
0064cb68  ADD ECX,0x1
0064cb6b  MOV dword ptr [EBP + -0x24],ECX
0064cb6e  JMP 0x0064cb88
0064cb70  MOV EDX,dword ptr [EBP + 0x8]
0064cb73  ADD EDX,dword ptr [EBP + -0x3c]
0064cb76  MOV EAX,dword ptr [EBP + -0x2c]
0064cb79  MOV CL,byte ptr [EDX]
0064cb7b  MOV byte ptr [EBP + EAX*0x1 + -0x20],CL
0064cb7f  MOV EDX,dword ptr [EBP + -0x2c]
0064cb82  ADD EDX,0x1
0064cb85  MOV dword ptr [EBP + -0x2c],EDX
0064cb88  JMP 0x0064cb0d
0064cb8a  MOV EAX,dword ptr [EBP + -0x2c]
0064cb8d  MOV byte ptr [EBP + EAX*0x1 + -0x20],0x0
0064cb92  MOV ECX,dword ptr [EBP + -0x24]
0064cb95  MOV byte ptr [EBP + ECX*0x1 + -0x34],0x0
0064cb9a  LEA EDX,[EBP + -0x34]
0064cb9d  PUSH EDX
0064cb9e  CALL dword ptr [0x006b223c]
0064cba4  ADD ESP,0x4
0064cba7  PUSH EAX
0064cba8  LEA EAX,[EBP + -0x20]
0064cbab  PUSH EAX
0064cbac  CALL dword ptr [0x006b223c]
0064cbb2  ADD ESP,0x4
0064cbb5  PUSH EAX
0064cbb6  CALL 0x0064c8a0
0064cbbb  ADD ESP,0x8
0064cbbe  MOV dword ptr [EBP + -0x4c],EAX
0064cbc1  MOV dword ptr [EBP + -0x48],EDX
0064cbc4  MOV EAX,dword ptr [EBP + -0x4c]
0064cbc7  MOV EDX,dword ptr [EBP + -0x48]
0064cbca  MOV ECX,dword ptr [EBP + -0x4]
0064cbcd  XOR ECX,EBP
0064cbcf  CALL 0x00686d72
0064cbd4  MOV ESP,EBP
0064cbd6  POP EBP
0064cbd7  RET
