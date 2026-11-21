; FUN_00434c40  00434c40
00434c40  PUSH EBP
00434c41  MOV EBP,ESP
00434c43  SUB ESP,0xa8
00434c49  MOV EAX,[0x00781870]
00434c4e  XOR EAX,EBP
00434c50  MOV dword ptr [EBP + -0x10],EAX
00434c53  MOV dword ptr [EBP + 0xffffff5c],ECX
00434c59  MOV dword ptr [EBP + -0x70],0x0
00434c60  MOV dword ptr [EBP + -0x6c],0x3
00434c67  MOV dword ptr [EBP + -0x68],0x2
00434c6e  MOV dword ptr [EBP + -0x64],0x1
00434c75  MOV dword ptr [EBP + -0x8],0x0
00434c7c  MOV dword ptr [EBP + -0x4],0x0
00434c83  MOV EAX,dword ptr [EBP + 0xffffff5c]
00434c89  MOV CL,byte ptr [EAX + 0xac0]
00434c8f  MOV byte ptr [EBP + -0x71],CL
00434c92  MOVZX EDX,byte ptr [EBP + -0x71]
00434c96  TEST EDX,EDX
00434c98  JZ 0x00434c9f
00434c9a  JMP 0x00434f7d
00434c9f  MOV EAX,dword ptr [EBP + 0xffffff5c]
00434ca5  MOV dword ptr [EAX + 0xabc],0x0
00434caf  MOV ECX,dword ptr [EBP + 0xffffff5c]
00434cb5  CALL 0x004343d0
00434cba  MOVZX ECX,AL
00434cbd  TEST ECX,ECX
00434cbf  JZ 0x00434ce0
00434cc1  PUSH -0x1
00434cc3  MOV ECX,dword ptr [EBP + 0xffffff5c]
00434cc9  CALL 0x00434c20
00434cce  MOV EDX,dword ptr [EBP + 0xffffff5c]
00434cd4  MOV byte ptr [EDX + 0xac0],0x1
00434cdb  JMP 0x00434f7d
00434ce0  MOV dword ptr [EBP + -0xc],0x0
00434ce7  JMP 0x00434cf2
00434ce9  MOV EAX,dword ptr [EBP + -0xc]
00434cec  ADD EAX,0x1
00434cef  MOV dword ptr [EBP + -0xc],EAX
00434cf2  CMP dword ptr [EBP + -0xc],0x4
00434cf6  JGE 0x00434d31
00434cf8  MOV ECX,dword ptr [EBP + 0xffffff5c]
00434cfe  MOV EDX,dword ptr [ECX + 0xab8]
00434d04  MOV dword ptr [EBP + -0x78],EDX
00434d07  MOV EAX,dword ptr [EBP + -0xc]
00434d0a  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x70]
00434d0e  CMP ECX,dword ptr [EBP + -0x78]
00434d11  JNZ 0x00434d2f
00434d13  MOV EDX,dword ptr [EBP + -0xc]
00434d16  MOV dword ptr [EBP + -0x8],EDX
00434d19  MOV EAX,dword ptr [EBP + -0x8]
00434d1c  ADD EAX,0x1
00434d1f  MOV dword ptr [EBP + -0x8],EAX
00434d22  CMP dword ptr [EBP + -0x8],0x3
00434d26  JLE 0x00434d2f
00434d28  MOV dword ptr [EBP + -0x8],0x0
00434d2f  JMP 0x00434ce9
00434d31  MOV dword ptr [EBP + -0xc],0x0
00434d38  JMP 0x00434d43
00434d3a  MOV ECX,dword ptr [EBP + -0xc]
00434d3d  ADD ECX,0x1
00434d40  MOV dword ptr [EBP + -0xc],ECX
00434d43  CMP dword ptr [EBP + -0xc],0x4
00434d47  JGE 0x00434f70
00434d4d  MOV EDX,dword ptr [EBP + -0x8]
00434d50  MOV EAX,dword ptr [EBP + EDX*0x4 + -0x70]
00434d54  PUSH EAX
00434d55  CALL 0x005dcb00
00434d5a  ADD ESP,0x4
00434d5d  MOV dword ptr [EBP + -0x80],EAX
00434d60  MOV ECX,dword ptr [EBP + -0x80]
00434d63  CALL 0x0063aac0
00434d68  MOV ECX,dword ptr [EAX]
00434d6a  MOV dword ptr [EBP + -0x7c],ECX
00434d6d  XOR EDX,EDX
00434d6f  CMP dword ptr [EBP + -0x7c],0x0
00434d73  SETZ DL
00434d76  MOVZX EAX,DL
00434d79  TEST EAX,EAX
00434d7b  JNZ 0x00434f29
00434d81  MOV ECX,dword ptr [EBP + -0x4]
00434d84  ADD ECX,0x1
00434d87  MOV dword ptr [EBP + -0x4],ECX
00434d8a  MOV EDX,dword ptr [EBP + -0x8]
00434d8d  MOV EAX,dword ptr [EBP + EDX*0x4 + -0x70]
00434d91  PUSH EAX
00434d92  CALL 0x005dcb00
00434d97  ADD ESP,0x4
00434d9a  MOV dword ptr [EBP + 0xffffff74],EAX
00434da0  MOV ECX,dword ptr [EBP + 0xffffff74]
00434da6  CALL 0x0063aac0
00434dab  MOV ECX,dword ptr [EAX]
00434dad  MOV dword ptr [EBP + 0xffffff7c],ECX
00434db3  CMP dword ptr [EBP + 0xffffff7c],0x2
00434dba  JZ 0x00434de4
00434dbc  MOV ECX,dword ptr [EBP + 0xffffff74]
00434dc2  CALL 0x0063aac0
00434dc7  MOV EDX,dword ptr [EAX]
00434dc9  MOV dword ptr [EBP + 0xffffff78],EDX
00434dcf  CMP dword ptr [EBP + 0xffffff78],0x3
00434dd6  JZ 0x00434de4
00434dd8  MOV dword ptr [EBP + 0xffffff58],0x0
00434de2  JMP 0x00434dee
00434de4  MOV dword ptr [EBP + 0xffffff58],0x1
00434dee  MOVZX EAX,byte ptr [EBP + 0xffffff58]
00434df5  TEST EAX,EAX
00434df7  JZ 0x00434ece
00434dfd  MOV ECX,dword ptr [0x0162ee84]
00434e03  MOV DL,byte ptr [ECX + 0x25]
00434e06  MOV byte ptr [EBP + 0xffffff73],DL
00434e0c  MOVZX EAX,byte ptr [EBP + 0xffffff73]
00434e13  TEST EAX,EAX
00434e15  JNZ 0x00434ecc
00434e1b  MOV ECX,dword ptr [EBP + -0x8]
00434e1e  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x70]
00434e22  PUSH EDX
00434e23  CALL 0x005dcb00
00434e28  ADD ESP,0x4
00434e2b  MOV dword ptr [EBP + 0xffffff6c],EAX
00434e31  MOV ECX,dword ptr [EBP + 0xffffff6c]
00434e37  CALL 0x0063aac0
00434e3c  ADD EAX,0x4
00434e3f  MOV dword ptr [EBP + 0xffffff68],EAX
00434e45  MOV EAX,dword ptr [EBP + 0xffffff68]
00434e4b  PUSH EAX
00434e4c  PUSH 0x6b7f58
00434e51  CALL 0x00630f40
00434e56  ADD ESP,0x4
00434e59  PUSH EAX
00434e5a  LEA ECX,[EBP + -0x60]
00434e5d  PUSH ECX
00434e5e  CALL dword ptr [0x006b2220]
00434e64  ADD ESP,0xc
00434e67  PUSH 0x4
00434e69  PUSH 0x6b7f3c
00434e6e  CALL 0x00630f40
00434e73  ADD ESP,0x4
00434e76  PUSH EAX
00434e77  LEA EDX,[EBP + -0x60]
00434e7a  PUSH EDX
00434e7b  CALL 0x0062ff10
00434e80  ADD ESP,0xc
00434e83  CMP EAX,0x6
00434e86  JNZ 0x00434ecc
00434e88  MOV EAX,dword ptr [EBP + -0x8]
00434e8b  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x70]
00434e8f  PUSH ECX
00434e90  MOV ECX,dword ptr [EBP + 0xffffff5c]
00434e96  CALL 0x00434c20
00434e9b  MOV EDX,dword ptr [EBP + -0x8]
00434e9e  MOV EAX,dword ptr [EBP + EDX*0x4 + -0x70]
00434ea2  MOV dword ptr [EBP + 0xffffff64],EAX
00434ea8  MOV ECX,dword ptr [EBP + 0xffffff5c]
00434eae  MOV EDX,dword ptr [EBP + 0xffffff64]
00434eb4  MOV dword ptr [ECX + 0xab8],EDX
00434eba  MOV EAX,dword ptr [EBP + 0xffffff5c]
00434ec0  MOV byte ptr [EAX + 0xac0],0x1
00434ec7  JMP 0x00434f7d
00434ecc  JMP 0x00434f29
00434ece  MOV ECX,dword ptr [EBP + -0x8]
00434ed1  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x70]
00434ed5  PUSH EDX
00434ed6  MOV ECX,dword ptr [EBP + 0xffffff5c]
00434edc  CALL 0x00435040
00434ee1  MOVZX EAX,AL
00434ee4  TEST EAX,EAX
00434ee6  JZ 0x00434f29
00434ee8  MOV ECX,dword ptr [EBP + -0x8]
00434eeb  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x70]
00434eef  PUSH EDX
00434ef0  MOV ECX,dword ptr [EBP + 0xffffff5c]
00434ef6  CALL 0x00434c20
00434efb  MOV EAX,dword ptr [EBP + -0x8]
00434efe  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x70]
00434f02  MOV dword ptr [EBP + 0xffffff60],ECX
00434f08  MOV EDX,dword ptr [EBP + 0xffffff5c]
00434f0e  MOV EAX,dword ptr [EBP + 0xffffff60]
00434f14  MOV dword ptr [EDX + 0xab8],EAX
00434f1a  MOV ECX,dword ptr [EBP + 0xffffff5c]
00434f20  MOV byte ptr [ECX + 0xac0],0x1
00434f27  JMP 0x00434f7d
00434f29  MOV ECX,dword ptr [0x0162ee84]
00434f2f  CALL 0x00636610
00434f34  CMP dword ptr [EBP + -0x4],EAX
00434f37  JNZ 0x00434f55
00434f39  PUSH -0x1
00434f3b  MOV ECX,dword ptr [EBP + 0xffffff5c]
00434f41  CALL 0x00434c20
00434f46  MOV EDX,dword ptr [EBP + 0xffffff5c]
00434f4c  MOV byte ptr [EDX + 0xac0],0x1
00434f53  JMP 0x00434f7d
00434f55  MOV EAX,dword ptr [EBP + -0x8]
00434f58  ADD EAX,0x1
00434f5b  MOV dword ptr [EBP + -0x8],EAX
00434f5e  CMP dword ptr [EBP + -0x8],0x3
00434f62  JLE 0x00434f6b
00434f64  MOV dword ptr [EBP + -0x8],0x0
00434f6b  JMP 0x00434d3a
00434f70  PUSH -0x1
00434f72  MOV ECX,dword ptr [EBP + 0xffffff5c]
00434f78  CALL 0x00434c20
00434f7d  MOV ECX,dword ptr [EBP + -0x10]
00434f80  XOR ECX,EBP
00434f82  CALL 0x00686d72
00434f87  MOV ESP,EBP
00434f89  POP EBP
00434f8a  RET
