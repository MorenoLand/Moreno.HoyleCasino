; FUN_0058f530  0058f530
0058f530  PUSH EBP
0058f531  MOV EBP,ESP
0058f533  SUB ESP,0x10
0058f536  MOV dword ptr [EBP + -0x10],ECX
0058f539  MOV ECX,dword ptr [0x007947e0]
0058f53f  CALL 0x005e10d0
0058f544  MOV dword ptr [EBP + -0x8],EAX
0058f547  MOV EAX,dword ptr [EBP + -0x10]
0058f54a  MOV ECX,dword ptr [EAX + 0x174]
0058f550  MOV EDX,dword ptr [ECX + 0x3c08]
0058f556  MOV dword ptr [EBP + -0xc],EDX
0058f559  MOV EAX,dword ptr [EBP + -0x10]
0058f55c  MOV ECX,dword ptr [EBP + 0x8]
0058f55f  MOV EDX,dword ptr [ECX + 0x1c]
0058f562  MOV dword ptr [EAX + 0x14c],EDX
0058f568  MOV EAX,dword ptr [EBP + 0x8]
0058f56b  MOVSX ECX,byte ptr [EAX + 0x2]
0058f56f  MOV EDX,dword ptr [EBP + -0x10]
0058f572  MOV EAX,dword ptr [EDX + 0x14c]
0058f578  LEA ECX,[ECX + EAX*0x1 + -0x1]
0058f57c  MOV EDX,dword ptr [EBP + -0x10]
0058f57f  MOV dword ptr [EDX + 0x150],ECX
0058f585  CMP dword ptr [EBP + -0x8],0x1
0058f589  JL 0x0058f594
0058f58b  CMP dword ptr [EBP + -0x8],0x3e8
0058f592  JLE 0x0058f5ab
0058f594  PUSH 0xa42
0058f599  PUSH 0x6ccecc
0058f59e  PUSH 0x6cde28
0058f5a3  CALL 0x005e9f20
0058f5a8  ADD ESP,0xc
0058f5ab  MOV ECX,dword ptr [EBP + -0x10]
0058f5ae  MOV EDX,dword ptr [ECX + 0x178]
0058f5b4  MOV EAX,dword ptr [EBP + -0x10]
0058f5b7  MOV ECX,dword ptr [EAX + 0x178]
0058f5bd  MOV EDX,dword ptr [EDX]
0058f5bf  MOV EAX,dword ptr [EDX + 0x70]
0058f5c2  CALL EAX
0058f5c4  MOV ECX,dword ptr [EBP + -0x10]
0058f5c7  CALL 0x0058f450
0058f5cc  MOV ECX,dword ptr [EBP + -0x10]
0058f5cf  MOV ECX,dword ptr [ECX + 0x144]
0058f5d5  CALL 0x0058fb90
0058f5da  MOV EDX,dword ptr [EBP + -0x10]
0058f5dd  MOV ECX,dword ptr [EDX + 0x148]
0058f5e3  CALL 0x0058fb90
0058f5e8  MOV EAX,dword ptr [EBP + -0x10]
0058f5eb  MOV ECX,dword ptr [EAX + 0x174]
0058f5f1  MOV EDX,dword ptr [EBP + -0xc]
0058f5f4  MOV EAX,dword ptr [ECX + EDX*0x4 + 0x3be4]
0058f5fb  PUSH EAX
0058f5fc  MOV ECX,dword ptr [EBP + -0xc]
0058f5ff  MOV EDX,dword ptr [EBP + -0x10]
0058f602  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x154]
0058f609  PUSH EAX
0058f60a  PUSH 0x6cde08
0058f60f  CALL 0x0062fde0
0058f614  ADD ESP,0xc
0058f617  MOV ECX,dword ptr [EBP + 0x8]
0058f61a  CMP dword ptr [ECX + 0x1c],0x1
0058f61e  JL 0x0058f62c
0058f620  MOV EDX,dword ptr [EBP + 0x8]
0058f623  CMP dword ptr [EDX + 0x1c],0x3e8
0058f62a  JLE 0x0058f631
0058f62c  JMP 0x0058f729
0058f631  MOV dword ptr [EBP + -0x4],0x0
0058f638  MOV EAX,dword ptr [EBP + 0x8]
0058f63b  MOVSX ECX,byte ptr [EAX + 0x4]
0058f63f  CMP ECX,0x1
0058f642  JNZ 0x0058f66a
0058f644  MOV EDX,dword ptr [EBP + -0x10]
0058f647  MOV EAX,dword ptr [EDX + 0x150]
0058f64d  MOV dword ptr [EBP + -0x4],EAX
0058f650  CMP dword ptr [EBP + -0x4],0x3e8
0058f657  JLE 0x0058f665
0058f659  MOV ECX,dword ptr [EBP + -0x4]
0058f65c  SUB ECX,0x3e8
0058f662  MOV dword ptr [EBP + -0x4],ECX
0058f665  JMP 0x0058f70b
0058f66a  MOV EDX,dword ptr [0x007947e0]
0058f670  MOV EAX,dword ptr [EBP + -0x10]
0058f673  MOV ECX,dword ptr [EDX + 0x98]
0058f679  CMP ECX,dword ptr [EAX + 0x14c]
0058f67f  JZ 0x0058f70b
0058f685  MOV EDX,dword ptr [EBP + -0x10]
0058f688  MOV EAX,dword ptr [EBP + -0x8]
0058f68b  CMP EAX,dword ptr [EDX + 0x14c]
0058f691  JL 0x0058f6a1
0058f693  MOV ECX,dword ptr [EBP + -0x10]
0058f696  MOV EDX,dword ptr [EBP + -0x8]
0058f699  CMP EDX,dword ptr [ECX + 0x150]
0058f69f  JLE 0x0058f6c8
0058f6a1  MOV EAX,dword ptr [EBP + -0x8]
0058f6a4  ADD EAX,0x3e8
0058f6a9  MOV ECX,dword ptr [EBP + -0x10]
0058f6ac  CMP EAX,dword ptr [ECX + 0x14c]
0058f6b2  JL 0x0058f6d0
0058f6b4  MOV EDX,dword ptr [EBP + -0x8]
0058f6b7  ADD EDX,0x3e8
0058f6bd  MOV EAX,dword ptr [EBP + -0x10]
0058f6c0  CMP EDX,dword ptr [EAX + 0x150]
0058f6c6  JG 0x0058f6d0
0058f6c8  MOV ECX,dword ptr [EBP + -0x8]
0058f6cb  MOV dword ptr [EBP + -0x4],ECX
0058f6ce  JMP 0x0058f70b
0058f6d0  XOR EDX,EDX
0058f6d2  JNZ 0x0058f6eb
0058f6d4  PUSH 0xa69
0058f6d9  PUSH 0x6ccecc
0058f6de  PUSH 0x6b2b64
0058f6e3  CALL 0x005e9f20
0058f6e8  ADD ESP,0xc
0058f6eb  MOV ECX,dword ptr [EBP + -0x10]
0058f6ee  MOV EDX,dword ptr [ECX + 0x150]
0058f6f4  MOV dword ptr [EBP + -0x4],EDX
0058f6f7  CMP dword ptr [EBP + -0x4],0x3e8
0058f6fe  JLE 0x0058f70b
0058f700  MOV EAX,dword ptr [EBP + -0x4]
0058f703  SUB EAX,0x3e8
0058f708  MOV dword ptr [EBP + -0x4],EAX
0058f70b  CMP dword ptr [EBP + -0x4],0x0
0058f70f  JZ 0x0058f729
0058f711  MOV ECX,dword ptr [EBP + -0xc]
0058f714  MOV EDX,dword ptr [EBP + -0x10]
0058f717  MOV EAX,dword ptr [EBP + -0x4]
0058f71a  MOV dword ptr [EDX + ECX*0x4 + 0x154],EAX
0058f721  MOV ECX,dword ptr [EBP + -0x10]
0058f724  CALL 0x0058f730
0058f729  MOV ESP,EBP
0058f72b  POP EBP
0058f72c  RET 0x4
