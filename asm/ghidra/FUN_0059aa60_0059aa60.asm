; FUN_0059aa60  0059aa60
0059aa60  PUSH EBP
0059aa61  MOV EBP,ESP
0059aa63  SUB ESP,0x50
0059aa66  PUSH ESI
0059aa67  MOV dword ptr [EBP + -0x20],ECX
0059aa6a  MOV EAX,[0x007935cc]
0059aa6f  MOV EDX,dword ptr [EAX]
0059aa71  MOV ECX,dword ptr [0x007935cc]
0059aa77  MOV EAX,dword ptr [EDX + 0x2b0]
0059aa7d  CALL EAX
0059aa7f  MOV dword ptr [EBP + -0x8],EAX
0059aa82  MOV ECX,dword ptr [0x007935cc]
0059aa88  MOV EDX,dword ptr [ECX]
0059aa8a  MOV ECX,dword ptr [0x007935cc]
0059aa90  MOV EAX,dword ptr [EDX + 0x2b4]
0059aa96  CALL EAX
0059aa98  MOV dword ptr [EBP + -0x4],EAX
0059aa9b  MOV ECX,dword ptr [EBP + 0x8]
0059aa9e  PUSH ECX
0059aa9f  CALL 0x005dcb00
0059aaa4  ADD ESP,0x4
0059aaa7  MOV dword ptr [EBP + -0x24],EAX
0059aaaa  MOV EDX,dword ptr [EBP + -0x24]
0059aaad  MOV EAX,dword ptr [EDX]
0059aaaf  MOV ECX,dword ptr [EBP + -0x24]
0059aab2  MOV EDX,dword ptr [EAX + 0x18]
0059aab5  CALL EDX
0059aab7  MOV dword ptr [EBP + -0x14],EAX
0059aaba  MOV EAX,dword ptr [EBP + -0x8]
0059aabd  MOV dword ptr [EBP + -0xc],EAX
0059aac0  MOV ECX,dword ptr [EBP + 0x8]
0059aac3  PUSH ECX
0059aac4  CALL 0x005dcb00
0059aac9  ADD ESP,0x4
0059aacc  MOV EDX,dword ptr [EAX + 0x4a8]
0059aad2  MOV dword ptr [EBP + -0x10],EDX
0059aad5  PUSH 0xa
0059aad7  CALL 0x0062fbf0
0059aadc  ADD ESP,0x4
0059aadf  CMP EAX,0x7
0059aae2  JGE 0x0059ac3f
0059aae8  MOV ESI,dword ptr [EBP + -0x8]
0059aaeb  IMUL ESI,dword ptr [EBP + -0x14]
0059aaef  PUSH 0x5
0059aaf1  CALL 0x0062fbf0
0059aaf6  ADD ESP,0x4
0059aaf9  ADD EAX,0x1
0059aafc  IMUL ESI,EAX
0059aaff  MOV dword ptr [EBP + -0x28],ESI
0059ab02  FILD dword ptr [EBP + -0x28]
0059ab05  PUSH 0x5
0059ab07  FSTP double ptr [EBP + -0x30]
0059ab0a  CALL 0x0062fbf0
0059ab0f  ADD ESP,0x4
0059ab12  ADD EAX,0x1
0059ab15  MOV dword ptr [EBP + -0x34],EAX
0059ab18  FILD dword ptr [EBP + -0x34]
0059ab1b  FDIVR double ptr [EBP + -0x30]
0059ab1e  MOV EAX,dword ptr [EBP + -0x10]
0059ab21  IMUL EAX,dword ptr [EBP + -0x8]
0059ab25  IMUL EAX,dword ptr [EBP + -0x14]
0059ab29  MOV dword ptr [EBP + -0x38],EAX
0059ab2c  FILD dword ptr [EBP + -0x38]
0059ab2f  PUSH 0x5
0059ab31  FXCH
0059ab33  FSTP double ptr [EBP + -0x40]
0059ab36  FSTP double ptr [EBP + -0x48]
0059ab39  CALL 0x0062fbf0
0059ab3e  ADD ESP,0x4
0059ab41  ADD EAX,0x1
0059ab44  MOV dword ptr [EBP + -0x4c],EAX
0059ab47  FILD dword ptr [EBP + -0x4c]
0059ab4a  FDIVR double ptr [EBP + -0x48]
0059ab4d  FADD double ptr [EBP + -0x40]
0059ab50  CALL 0x00686cc0
0059ab55  MOV dword ptr [EBP + -0xc],EAX
0059ab58  PUSH 0x2
0059ab5a  CALL 0x0062fbf0
0059ab5f  ADD ESP,0x4
0059ab62  CMP EAX,0x1
0059ab65  JNZ 0x0059ab77
0059ab67  MOV EAX,dword ptr [EBP + -0xc]
0059ab6a  CDQ
0059ab6b  MOV ECX,0x3
0059ab70  IDIV ECX
0059ab72  MOV dword ptr [EBP + -0x50],EAX
0059ab75  JMP 0x0059ab82
0059ab77  MOV EAX,dword ptr [EBP + -0xc]
0059ab7a  CDQ
0059ab7b  SUB EAX,EDX
0059ab7d  SAR EAX,0x1
0059ab7f  MOV dword ptr [EBP + -0x50],EAX
0059ab82  MOV EDX,dword ptr [EBP + -0x50]
0059ab85  MOV dword ptr [EBP + -0xc],EDX
0059ab88  MOV EAX,dword ptr [EBP + -0xc]
0059ab8b  CDQ
0059ab8c  MOV ECX,0x5
0059ab91  IDIV ECX
0059ab93  TEST EDX,EDX
0059ab95  JZ 0x0059abaf
0059ab97  MOV EAX,dword ptr [EBP + -0xc]
0059ab9a  CDQ
0059ab9b  MOV ECX,0x5
0059aba0  IDIV ECX
0059aba2  MOV EAX,0x5
0059aba7  SUB EAX,EDX
0059aba9  ADD EAX,dword ptr [EBP + -0xc]
0059abac  MOV dword ptr [EBP + -0xc],EAX
0059abaf  MOV ECX,dword ptr [EBP + -0xc]
0059abb2  CMP ECX,dword ptr [EBP + -0x8]
0059abb5  JGE 0x0059abbf
0059abb7  MOV EDX,dword ptr [EBP + -0x8]
0059abba  MOV dword ptr [EBP + -0xc],EDX
0059abbd  JMP 0x0059abcd
0059abbf  MOV EAX,dword ptr [EBP + -0xc]
0059abc2  CMP EAX,dword ptr [EBP + -0x4]
0059abc5  JLE 0x0059abcd
0059abc7  MOV ECX,dword ptr [EBP + -0x4]
0059abca  MOV dword ptr [EBP + -0xc],ECX
0059abcd  MOV EDX,dword ptr [EBP + -0xc]
0059abd0  PUSH EDX
0059abd1  MOV EAX,dword ptr [EBP + 0x8]
0059abd4  PUSH EAX
0059abd5  MOV ECX,dword ptr [EBP + -0x20]
0059abd8  CALL 0x0059a6c0
0059abdd  MOVZX ECX,AL
0059abe0  TEST ECX,ECX
0059abe2  JNZ 0x0059abef
0059abe4  MOV EDX,dword ptr [EBP + -0xc]
0059abe7  SUB EDX,0x5
0059abea  MOV dword ptr [EBP + -0xc],EDX
0059abed  JMP 0x0059abcd
0059abef  MOV EAX,dword ptr [EBP + -0xc]
0059abf2  CMP EAX,dword ptr [EBP + -0x8]
0059abf5  JGE 0x0059abfe
0059abf7  MOV dword ptr [EBP + -0xc],0x0
0059abfe  MOV ECX,dword ptr [EBP + -0xc]
0059ac01  CMP ECX,dword ptr [EBP + -0x4]
0059ac04  JLE 0x0059ac1d
0059ac06  PUSH 0x9b
0059ac0b  PUSH 0x6cebe4
0059ac10  PUSH 0x6c59b4
0059ac15  CALL 0x005e9f20
0059ac1a  ADD ESP,0xc
0059ac1d  PUSH 0x0
0059ac1f  MOV EAX,dword ptr [EBP + -0xc]
0059ac22  PUSH EAX
0059ac23  CALL 0x0064c8a0
0059ac28  ADD ESP,0x8
0059ac2b  MOV dword ptr [EBP + -0x1c],EAX
0059ac2e  MOV dword ptr [EBP + -0x18],EDX
0059ac31  MOV ECX,dword ptr [EBP + 0xc]
0059ac34  MOV EDX,dword ptr [EBP + -0x1c]
0059ac37  MOV dword ptr [ECX],EDX
0059ac39  MOV EAX,dword ptr [EBP + -0x18]
0059ac3c  MOV dword ptr [ECX + 0x4],EAX
0059ac3f  POP ESI
0059ac40  MOV ESP,EBP
0059ac42  POP EBP
0059ac43  RET 0x8
