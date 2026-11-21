; FUN_004ea970  004ea970
004ea970  PUSH EBP
004ea971  MOV EBP,ESP
004ea973  SUB ESP,0x3c
004ea976  PUSH ESI
004ea977  MOV dword ptr [EBP + -0x1c],ECX
004ea97a  MOVSX EAX,word ptr [EBP + 0x8]
004ea97e  TEST EAX,EAX
004ea980  JGE 0x004ea999
004ea982  PUSH 0x272a
004ea987  PUSH 0x6bf384
004ea98c  PUSH 0x6bf888
004ea991  CALL 0x005e9f20
004ea996  ADD ESP,0xc
004ea999  MOVSX ESI,word ptr [EBP + 0x8]
004ea99d  MOV ECX,dword ptr [0x00791364]
004ea9a3  CALL 0x0047f950
004ea9a8  CMP ESI,EAX
004ea9aa  JL 0x004ea9c3
004ea9ac  PUSH 0x272b
004ea9b1  PUSH 0x6bf384
004ea9b6  PUSH 0x6bf858
004ea9bb  CALL 0x005e9f20
004ea9c0  ADD ESP,0xc
004ea9c3  MOVSX EAX,word ptr [EBP + 0xc]
004ea9c7  CMP EAX,0x2
004ea9ca  JGE 0x004ea9e3
004ea9cc  PUSH 0x272c
004ea9d1  PUSH 0x6bf384
004ea9d6  PUSH 0x6bf778
004ea9db  CALL 0x005e9f20
004ea9e0  ADD ESP,0xc
004ea9e3  MOVSX ESI,word ptr [EBP + 0xc]
004ea9e7  MOV ECX,dword ptr [0x00791364]
004ea9ed  CALL 0x0047f950
004ea9f2  CMP ESI,EAX
004ea9f4  JLE 0x004eaa0d
004ea9f6  PUSH 0x272d
004ea9fb  PUSH 0x6bf384
004eaa00  PUSH 0x6bf740
004eaa05  CALL 0x005e9f20
004eaa0a  ADD ESP,0xc
004eaa0d  MOV EAX,dword ptr [EBP + -0x1c]
004eaa10  MOVSX ECX,word ptr [EAX + 0x28a]
004eaa17  MOV dword ptr [EBP + -0x20],ECX
004eaa1a  FILD dword ptr [EBP + -0x20]
004eaa1d  FDIV double ptr [0x006b4b00]
004eaa23  MOVSX EDX,word ptr [EBP + 0xc]
004eaa27  MOV dword ptr [EBP + -0x24],EDX
004eaa2a  FILD dword ptr [EBP + -0x24]
004eaa2d  FDIVP
004eaa2f  FSTP double ptr [EBP + -0x18]
004eaa32  MOV EAX,dword ptr [EBP + -0x1c]
004eaa35  MOV ECX,dword ptr [EAX + 0x428]
004eaa3b  MOVSX EDX,word ptr [EBP + 0x8]
004eaa3f  IMUL EDX,EDX,0xe
004eaa42  LEA EAX,[ECX + EDX*0x1 + 0xa48]
004eaa49  MOVSX ECX,word ptr [EBP + 0xc]
004eaa4d  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x4]
004eaa52  TEST EDX,EDX
004eaa54  JNZ 0x004eaa5e
004eaa56  FLD double ptr [EBP + -0x18]
004eaa59  JMP 0x004eab2e
004eaa5e  MOV EAX,dword ptr [EBP + -0x1c]
004eaa61  MOV ECX,dword ptr [EAX + 0x428]
004eaa67  MOVSX EDX,word ptr [EBP + 0x8]
004eaa6b  IMUL EDX,EDX,0xe
004eaa6e  LEA EAX,[ECX + EDX*0x1 + 0xa48]
004eaa75  MOVSX ECX,word ptr [EBP + 0xc]
004eaa79  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x4]
004eaa7e  MOV dword ptr [EBP + -0x28],EDX
004eaa81  FILD dword ptr [EBP + -0x28]
004eaa84  FSTP double ptr [EBP + -0x8]
004eaa87  MOV EAX,dword ptr [EBP + -0x1c]
004eaa8a  MOV ECX,dword ptr [EAX + 0x428]
004eaa90  MOVSX EDX,word ptr [EBP + 0x8]
004eaa94  IMUL EDX,EDX,0xe
004eaa97  LEA EAX,[ECX + EDX*0x1 + 0xab8]
004eaa9e  MOVSX ECX,word ptr [EBP + 0xc]
004eaaa2  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x4]
004eaaa7  MOV dword ptr [EBP + -0x2c],EDX
004eaaaa  FILD dword ptr [EBP + -0x2c]
004eaaad  FSTP double ptr [EBP + -0x10]
004eaab0  MOV ECX,dword ptr [0x00791eb8]
004eaab6  CALL 0x005da7b0
004eaabb  MOVZX EAX,AL
004eaabe  TEST EAX,EAX
004eaac0  JNZ 0x004eaaf5
004eaac2  MOV ECX,dword ptr [EBP + -0x1c]
004eaac5  MOVSX EDX,word ptr [ECX + 0x28e]
004eaacc  MOV dword ptr [EBP + -0x30],EDX
004eaacf  FILD dword ptr [EBP + -0x30]
004eaad2  FDIVR double ptr [EBP + -0x10]
004eaad5  FADD double ptr [EBP + -0x18]
004eaad8  MOV EAX,dword ptr [EBP + -0x1c]
004eaadb  MOVSX ECX,word ptr [EAX + 0x28e]
004eaae2  MOV dword ptr [EBP + -0x34],ECX
004eaae5  FILD dword ptr [EBP + -0x34]
004eaae8  FDIVR double ptr [EBP + -0x8]
004eaaeb  FLD1
004eaaed  FADDP
004eaaef  FDIVP
004eaaf1  JMP 0x004eab2e
004eaaf5  MOV EDX,dword ptr [EBP + -0x1c]
004eaaf8  MOVSX EAX,word ptr [EDX + 0x28e]
004eaaff  CDQ
004eab00  SUB EAX,EDX
004eab02  SAR EAX,0x1
004eab04  MOV dword ptr [EBP + -0x38],EAX
004eab07  FILD dword ptr [EBP + -0x38]
004eab0a  FDIVR double ptr [EBP + -0x10]
004eab0d  FADD double ptr [EBP + -0x18]
004eab10  MOV EAX,dword ptr [EBP + -0x1c]
004eab13  MOVSX EAX,word ptr [EAX + 0x28e]
004eab1a  CDQ
004eab1b  SUB EAX,EDX
004eab1d  SAR EAX,0x1
004eab1f  MOV dword ptr [EBP + -0x3c],EAX
004eab22  FILD dword ptr [EBP + -0x3c]
004eab25  FDIVR double ptr [EBP + -0x8]
004eab28  FLD1
004eab2a  FADDP
004eab2c  FDIVP
004eab2e  POP ESI
004eab2f  MOV ESP,EBP
004eab31  POP EBP
004eab32  RET 0x8
