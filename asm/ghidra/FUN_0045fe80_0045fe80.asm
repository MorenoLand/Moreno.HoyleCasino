; FUN_0045fe80  0045fe80
0045fe80  PUSH EBP
0045fe81  MOV EBP,ESP
0045fe83  PUSH -0x1
0045fe85  PUSH 0x69f3ac
0045fe8a  MOV EAX,FS:[0x0]
0045fe90  PUSH EAX
0045fe91  SUB ESP,0x30
0045fe94  MOV EAX,[0x00781870]
0045fe99  XOR EAX,EBP
0045fe9b  PUSH EAX
0045fe9c  LEA EAX,[EBP + -0xc]
0045fe9f  MOV FS:[0x0],EAX
0045fea5  MOV dword ptr [EBP + -0x34],ECX
0045fea8  MOV EAX,dword ptr [EBP + -0x34]
0045feab  CMP dword ptr [EAX + 0x58],0x0
0045feaf  JNZ 0x0045fef8
0045feb1  PUSH 0x810
0045feb6  CALL 0x00686d82
0045febb  ADD ESP,0x4
0045febe  MOV dword ptr [EBP + -0x18],EAX
0045fec1  MOV dword ptr [EBP + -0x4],0x0
0045fec8  CMP dword ptr [EBP + -0x18],0x0
0045fecc  JZ 0x0045fedb
0045fece  MOV ECX,dword ptr [EBP + -0x18]
0045fed1  CALL 0x00642e10
0045fed6  MOV dword ptr [EBP + -0x38],EAX
0045fed9  JMP 0x0045fee2
0045fedb  MOV dword ptr [EBP + -0x38],0x0
0045fee2  MOV ECX,dword ptr [EBP + -0x38]
0045fee5  MOV dword ptr [EBP + -0x14],ECX
0045fee8  MOV dword ptr [EBP + -0x4],0xffffffff
0045feef  MOV EDX,dword ptr [EBP + -0x34]
0045fef2  MOV EAX,dword ptr [EBP + -0x14]
0045fef5  MOV dword ptr [EDX + 0x58],EAX
0045fef8  PUSH 0x7
0045fefa  MOV ECX,dword ptr [EBP + -0x34]
0045fefd  MOV ECX,dword ptr [ECX + 0x58]
0045ff00  CALL 0x00642e70
0045ff05  MOV dword ptr [EBP + -0x10],0x0
0045ff0c  JMP 0x0045ff17
0045ff0e  MOV EDX,dword ptr [EBP + -0x10]
0045ff11  ADD EDX,0x1
0045ff14  MOV dword ptr [EBP + -0x10],EDX
0045ff17  CMP dword ptr [EBP + -0x10],0x5
0045ff1b  JGE 0x0045ff71
0045ff1d  PUSH 0x0
0045ff1f  PUSH 0x0
0045ff21  CALL 0x0064c8a0
0045ff26  ADD ESP,0x8
0045ff29  MOV dword ptr [EBP + -0x20],EAX
0045ff2c  MOV dword ptr [EBP + -0x1c],EDX
0045ff2f  MOV EAX,dword ptr [EBP + -0x10]
0045ff32  SHL EAX,0x4
0045ff35  MOV ECX,dword ptr [EBP + -0x34]
0045ff38  MOV EDX,dword ptr [EBP + -0x20]
0045ff3b  MOV dword ptr [ECX + EAX*0x1 + 0x8],EDX
0045ff3f  MOV EDX,dword ptr [EBP + -0x1c]
0045ff42  MOV dword ptr [ECX + EAX*0x1 + 0xc],EDX
0045ff46  PUSH 0x0
0045ff48  PUSH 0x0
0045ff4a  CALL 0x0064c8a0
0045ff4f  ADD ESP,0x8
0045ff52  MOV dword ptr [EBP + -0x28],EAX
0045ff55  MOV dword ptr [EBP + -0x24],EDX
0045ff58  MOV EAX,dword ptr [EBP + -0x10]
0045ff5b  SHL EAX,0x4
0045ff5e  MOV ECX,dword ptr [EBP + -0x34]
0045ff61  MOV EDX,dword ptr [EBP + -0x28]
0045ff64  MOV dword ptr [ECX + EAX*0x1 + 0x10],EDX
0045ff68  MOV EDX,dword ptr [EBP + -0x24]
0045ff6b  MOV dword ptr [ECX + EAX*0x1 + 0x14],EDX
0045ff6f  JMP 0x0045ff0e
0045ff71  PUSH 0xf0
0045ff76  CALL 0x00686d82
0045ff7b  ADD ESP,0x4
0045ff7e  MOV dword ptr [EBP + -0x30],EAX
0045ff81  MOV dword ptr [EBP + -0x4],0x1
0045ff88  CMP dword ptr [EBP + -0x30],0x0
0045ff8c  JZ 0x0045ff9b
0045ff8e  MOV ECX,dword ptr [EBP + -0x30]
0045ff91  CALL 0x004621e0
0045ff96  MOV dword ptr [EBP + -0x3c],EAX
0045ff99  JMP 0x0045ffa2
0045ff9b  MOV dword ptr [EBP + -0x3c],0x0
0045ffa2  MOV EAX,dword ptr [EBP + -0x3c]
0045ffa5  MOV dword ptr [EBP + -0x2c],EAX
0045ffa8  MOV dword ptr [EBP + -0x4],0xffffffff
0045ffaf  MOV ECX,dword ptr [EBP + -0x34]
0045ffb2  MOV EDX,dword ptr [EBP + -0x2c]
0045ffb5  MOV dword ptr [ECX + 0x4],EDX
0045ffb8  MOV ECX,dword ptr [EBP + -0x34]
0045ffbb  CALL 0x0045ffe0
0045ffc0  MOV EAX,dword ptr [EBP + -0x34]
0045ffc3  MOV byte ptr [EAX + 0x116],0x0
0045ffca  MOV ECX,dword ptr [EBP + -0xc]
0045ffcd  MOV dword ptr FS:[0x0],ECX
0045ffd4  POP ECX
0045ffd5  MOV ESP,EBP
0045ffd7  POP EBP
0045ffd8  RET
