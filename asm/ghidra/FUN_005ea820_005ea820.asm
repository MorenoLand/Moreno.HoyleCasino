; FUN_005ea820  005ea820
005ea820  PUSH EBP
005ea821  MOV EBP,ESP
005ea823  PUSH -0x1
005ea825  PUSH 0x6a9b77
005ea82a  MOV EAX,FS:[0x0]
005ea830  PUSH EAX
005ea831  SUB ESP,0x2c
005ea834  MOV EAX,[0x00781870]
005ea839  XOR EAX,EBP
005ea83b  MOV dword ptr [EBP + -0x10],EAX
005ea83e  PUSH EAX
005ea83f  LEA EAX,[EBP + -0xc]
005ea842  MOV FS:[0x0],EAX
005ea848  MOV dword ptr [EBP + -0x34],0x0
005ea84f  MOV EAX,dword ptr [EBP + 0x8]
005ea852  PUSH EAX
005ea853  CALL 0x00686ecc
005ea858  ADD ESP,0x4
005ea85b  ADD EAX,0xa
005ea85e  PUSH EAX
005ea85f  CALL dword ptr [0x006b22b0]
005ea865  ADD ESP,0x4
005ea868  MOV dword ptr [EBP + -0x30],EAX
005ea86b  MOV ECX,dword ptr [EBP + 0x8]
005ea86e  PUSH ECX
005ea86f  MOV EDX,dword ptr [EBP + -0x30]
005ea872  PUSH EDX
005ea873  CALL 0x00686d8e
005ea878  ADD ESP,0x8
005ea87b  MOV EAX,dword ptr [EBP + -0x30]
005ea87e  PUSH EAX
005ea87f  CALL 0x005ea5b0
005ea884  ADD ESP,0x4
005ea887  MOV ECX,dword ptr [EBP + -0x30]
005ea88a  PUSH ECX
005ea88b  MOV ECX,dword ptr [EBP + 0x10]
005ea88e  CALL dword ptr [0x006b2114]
005ea894  MOV EDX,dword ptr [EBP + -0x30]
005ea897  PUSH EDX
005ea898  CALL dword ptr [0x006b22bc]
005ea89e  ADD ESP,0x4
005ea8a1  MOV EAX,dword ptr [EBP + 0xc]
005ea8a4  MOVSX ECX,byte ptr [EAX]
005ea8a7  CMP ECX,0x72
005ea8aa  JNZ 0x005ea8f7
005ea8ac  PUSH 0x77
005ea8ae  MOV EDX,dword ptr [EBP + 0xc]
005ea8b1  PUSH EDX
005ea8b2  CALL dword ptr [0x006b22b8]
005ea8b8  ADD ESP,0x8
005ea8bb  TEST EAX,EAX
005ea8bd  JNZ 0x005ea8f7
005ea8bf  PUSH 0x0
005ea8c1  MOV ECX,dword ptr [EBP + 0x10]
005ea8c4  CALL dword ptr [0x006b2110]
005ea8ca  MOVSX EAX,byte ptr [EAX]
005ea8cd  TEST EAX,EAX
005ea8cf  JZ 0x005ea913
005ea8d1  PUSH 0x1
005ea8d3  MOV ECX,dword ptr [EBP + 0x10]
005ea8d6  CALL dword ptr [0x006b2110]
005ea8dc  MOVSX ECX,byte ptr [EAX]
005ea8df  CMP ECX,0x3a
005ea8e2  JNZ 0x005ea913
005ea8e4  PUSH 0x2
005ea8e6  MOV ECX,dword ptr [EBP + 0x10]
005ea8e9  CALL dword ptr [0x006b2110]
005ea8ef  MOVSX EDX,byte ptr [EAX]
005ea8f2  CMP EDX,0x5c
005ea8f5  JNZ 0x005ea913
005ea8f7  MOV EAX,dword ptr [EBP + 0xc]
005ea8fa  PUSH EAX
005ea8fb  MOV ECX,dword ptr [EBP + 0x10]
005ea8fe  CALL dword ptr [0x006b2100]
005ea904  PUSH EAX
005ea905  CALL dword ptr [0x006b22b4]
005ea90b  ADD ESP,0x8
005ea90e  JMP 0x005ea99b
005ea913  MOV ECX,dword ptr [EBP + 0xc]
005ea916  PUSH ECX
005ea917  MOV ECX,dword ptr [EBP + 0x10]
005ea91a  CALL dword ptr [0x006b2100]
005ea920  PUSH EAX
005ea921  CALL dword ptr [0x006b22b4]
005ea927  ADD ESP,0x8
005ea92a  MOV dword ptr [EBP + -0x34],EAX
005ea92d  CMP dword ptr [EBP + -0x34],0x0
005ea931  JZ 0x005ea938
005ea933  MOV EAX,dword ptr [EBP + -0x34]
005ea936  JMP 0x005ea99b
005ea938  CALL 0x005ea760
005ea93d  PUSH EAX
005ea93e  LEA ECX,[EBP + -0x2c]
005ea941  CALL dword ptr [0x006b20fc]
005ea947  MOV dword ptr [EBP + -0x4],0x0
005ea94e  MOV EDX,dword ptr [EBP + 0x10]
005ea951  PUSH EDX
005ea952  LEA ECX,[EBP + -0x2c]
005ea955  CALL dword ptr [0x006b2108]
005ea95b  LEA EAX,[EBP + -0x2c]
005ea95e  PUSH EAX
005ea95f  MOV ECX,dword ptr [EBP + 0x10]
005ea962  CALL dword ptr [0x006b2104]
005ea968  MOV ECX,dword ptr [EBP + 0xc]
005ea96b  PUSH ECX
005ea96c  MOV ECX,dword ptr [EBP + 0x10]
005ea96f  CALL dword ptr [0x006b2100]
005ea975  PUSH EAX
005ea976  CALL dword ptr [0x006b22b4]
005ea97c  ADD ESP,0x8
005ea97f  MOV dword ptr [EBP + -0x34],EAX
005ea982  MOV EDX,dword ptr [EBP + -0x34]
005ea985  MOV dword ptr [EBP + -0x38],EDX
005ea988  MOV dword ptr [EBP + -0x4],0xffffffff
005ea98f  LEA ECX,[EBP + -0x2c]
005ea992  CALL dword ptr [0x006b20f4]
005ea998  MOV EAX,dword ptr [EBP + -0x38]
005ea99b  MOV ECX,dword ptr [EBP + -0xc]
005ea99e  MOV dword ptr FS:[0x0],ECX
005ea9a5  POP ECX
005ea9a6  MOV ECX,dword ptr [EBP + -0x10]
005ea9a9  XOR ECX,EBP
005ea9ab  CALL 0x00686d72
005ea9b0  MOV ESP,EBP
005ea9b2  POP EBP
005ea9b3  RET
