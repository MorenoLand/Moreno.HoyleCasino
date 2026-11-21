; FUN_0052aea0  0052aea0
0052aea0  PUSH EBP
0052aea1  MOV EBP,ESP
0052aea3  PUSH -0x1
0052aea5  PUSH 0x6a42aa
0052aeaa  MOV EAX,FS:[0x0]
0052aeb0  PUSH EAX
0052aeb1  SUB ESP,0x14
0052aeb4  MOV EAX,[0x00781870]
0052aeb9  XOR EAX,EBP
0052aebb  PUSH EAX
0052aebc  LEA EAX,[EBP + -0xc]
0052aebf  MOV FS:[0x0],EAX
0052aec5  MOV dword ptr [EBP + -0x1c],ECX
0052aec8  MOV EAX,[0x00793394]
0052aecd  MOV EDX,dword ptr [EAX]
0052aecf  MOV ECX,dword ptr [0x00793394]
0052aed5  MOV EAX,dword ptr [EDX + 0x40]
0052aed8  CALL EAX
0052aeda  CMP EAX,0x3
0052aedd  JNZ 0x0052af0d
0052aedf  CMP dword ptr [EBP + 0x8],0x1
0052aee3  JL 0x0052aeeb
0052aee5  CMP dword ptr [EBP + 0x8],0x3
0052aee9  JLE 0x0052af02
0052aeeb  PUSH 0x128
0052aef0  PUSH 0x6c3b5c
0052aef5  PUSH 0x6c3b44
0052aefa  CALL 0x005e9f20
0052aeff  ADD ESP,0xc
0052af02  MOV EDX,dword ptr [EBP + 0x8]
0052af05  SUB EDX,0x1
0052af08  MOV dword ptr [EBP + -0x10],EDX
0052af0b  JMP 0x0052af39
0052af0d  CMP dword ptr [EBP + 0x8],0x1
0052af11  JL 0x0052af19
0052af13  CMP dword ptr [EBP + 0x8],0x5
0052af17  JLE 0x0052af30
0052af19  PUSH 0x12b
0052af1e  PUSH 0x6c3b5c
0052af23  PUSH 0x6c3b2c
0052af28  CALL 0x005e9f20
0052af2d  ADD ESP,0xc
0052af30  MOV ECX,dword ptr [EBP + 0x8]
0052af33  ADD ECX,0x2
0052af36  MOV dword ptr [EBP + -0x10],ECX
0052af39  CMP dword ptr [EBP + -0x10],0x0
0052af3d  JL 0x0052af45
0052af3f  CMP dword ptr [EBP + -0x10],0x7
0052af43  JLE 0x0052af5c
0052af45  PUSH 0x12e
0052af4a  PUSH 0x6c3b5c
0052af4f  PUSH 0x6c3b1c
0052af54  CALL 0x005e9f20
0052af59  ADD ESP,0xc
0052af5c  PUSH 0x28
0052af5e  CALL 0x00686d82
0052af63  ADD ESP,0x4
0052af66  MOV dword ptr [EBP + -0x18],EAX
0052af69  MOV dword ptr [EBP + -0x4],0x0
0052af70  CMP dword ptr [EBP + -0x18],0x0
0052af74  JZ 0x0052af8d
0052af76  PUSH 0x0
0052af78  PUSH 0x0
0052af7a  PUSH 0x1
0052af7c  PUSH 0x0
0052af7e  PUSH 0x0
0052af80  MOV ECX,dword ptr [EBP + -0x18]
0052af83  CALL 0x00601110
0052af88  MOV dword ptr [EBP + -0x20],EAX
0052af8b  JMP 0x0052af94
0052af8d  MOV dword ptr [EBP + -0x20],0x0
0052af94  MOV EAX,dword ptr [EBP + -0x20]
0052af97  MOV dword ptr [EBP + -0x14],EAX
0052af9a  MOV dword ptr [EBP + -0x4],0xffffffff
0052afa1  MOV ECX,dword ptr [EBP + -0x14]
0052afa4  PUSH ECX
0052afa5  MOV EDX,dword ptr [EBP + -0x10]
0052afa8  MOV EAX,dword ptr [EBP + -0x1c]
0052afab  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c]
0052afaf  CALL 0x005f5d50
0052afb4  MOV ECX,dword ptr [EBP + -0x10]
0052afb7  MOV EDX,dword ptr [EBP + -0x1c]
0052afba  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3c]
0052afbe  MOV ECX,dword ptr [EBP + -0x10]
0052afc1  MOV EDX,dword ptr [EBP + -0x1c]
0052afc4  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x3c]
0052afc8  MOV EAX,dword ptr [EAX]
0052afca  MOV EDX,dword ptr [EAX + 0x74]
0052afcd  CALL EDX
0052afcf  MOV ECX,dword ptr [EBP + -0xc]
0052afd2  MOV dword ptr FS:[0x0],ECX
0052afd9  POP ECX
0052afda  MOV ESP,EBP
0052afdc  POP EBP
0052afdd  RET 0x4
